#!/usr/bin
#encoding: utf-8

import os
import logging
import shutil
import tarfile
import commands
import time

from lm_docker_util import *
from lm_docker_fs import lm_docker_filesystem
from lm_docker_mem import lm_docker_memory

def lz4_extractfile(input_name = 'memory.lz4', output_name = 'pages-1.img'):
	cmd_sh = 'lz4 -d ' + input_name + ' ' + output_name
	logging.info(cmd_sh)
	sp.call(cmd_sh, shell = True)
	os.remove(input_name)


class destination_node:
	
	#init the class, step in the docker dir.
	def __init__(self):
		os.chdir(base_dir + '/tmp/')

	
	#get the extractly container dir.
	def workdir(self):
		return base_dir + '/tmp/' + self.task_id


	def init_dst_node(self, task_id, label):
		if not os.path.isdir(task_id):
			os.mkdir(task_id)
		os.chdir(task_id)
		self.task_id = task_id
		
		label_array = label.split('-')
		container_name = label_array[0]
		base_image = label_array[1]
		image_id = label_array[2]

		logging.debug('The docker image id is %s' %image_id)
		logging.debug(label_array)

#		cmd_sh = 'docker run --name=livemigrate -d ' + base_image +\
#					 ' tail -f /dev/null && docker rm -f livemigrate'
#		logging.info(cmd_sh)
#		logging.debug(cmd_sh)
#		os.system(cmd_sh)

		rmv_sh = 'docker rm -f ' + container_name +' >/dev/null 2>&1'
		logging.info(rmv_sh)
		logging.debug(rmv_sh)
		os.system(rmv_sh)

		cre_sh = 'docker create --name=' + container_name + ' ' + base_image
		logging.info(cre_sh)
		logging.debug(cre_sh)
		ret,con_id = commands.getstatusoutput(cre_sh)
		self.container_id = con_id

	
	def untar_image(self, image_name, dump_dir):
		os.chdir(self.workdir())
		if not check_file(image_name):
			logging.error('Error: file is not exists, maybe something wrong in receive from client.')
			return False
		tar_file = tarfile.open(image_name,'r')
		tar_file.extractall()
		tar_file.close()
		os.chdir(dump_dir)
		lz4_extractfile()
		os.chdir('../')
		return True

	def restore(self,pid,dump_image_name,last_container_id):
		logging.info('last container id is %s ' %last_container_id)
		os.chdir(self.workdir())
		self.untar_image(dump_image_name, 'dump')
		image_dir = self.workdir() + '/dump'

		mount_sh = 'sudo mount -t aufs -o br=/var/lib/docker/aufs/diff/' + self.container_id +\
				   ':/var/lib/docker/aufs/diff/' + self.container_id +'-init' +\
				   ' none /var/lib/docker/aufs/mnt/' + self.container_id

		logging.info(mount_sh)
		p = sp.Popen(mount_sh,shell=True,stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.PIPE)
		p.stdin.write('123456\n')
		ret = p.wait()
		logging.info(ret)
		if ret:
			logging.error('mount aufs failed.')
			return False

		'''
		do the map operate to the cgroup.img and mounts-12.img
		'''
		cgroup_log = '/var/lib/docker/cgroup.log'
		decode_sh = 'sudo /home/hdq/criu/crit/crit decode -i ' + image_dir +\
					'/cgroup.img -o ' + cgroup_log
		
		p = sp.Popen(decode_sh,shell=True,stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.PIPE)
		p.stdin.write('123456\n')
		ret = p.wait()
		logging.info(ret)
		if ret:
			logging.error('decode failed.')
			return False
		
#		if not os.path.exists(cgroup_log):
#			return False
#		lines = open(cgroup_log).readlines()
#		fp = open(cgroup_log,'w')
#		for s in lines:
#			fp.write(s.replace(last_container_id,self.container_id))
#		fp.close()

		sed_sh = 'sudo sed -i \"s/' + last_container_id +'/' + self.container_id +\
				 '/g\" ' + cgroup_log
		logging.info(sed_sh)
		sp.call(sed_sh,shell=True)

		encode_sh = 'sudo /home/hdq/criu/crit/crit encode -i ' + cgroup_log +\
					' -o ' + image_dir + '/cgroup.img'
		logging.info(encode_sh)	
		p = sp.Popen(encode_sh,shell=True,stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.PIPE)
		p.stdin.write('123456\n')
		ret = p.wait()
		logging.info(ret)
		if ret:
			logging.error('encode failed.')
			return False

		mounts_log = '/var/lib/docker/mounts.log'
		decode_sh = 'sudo /home/hdq/criu/crit/crit decode -i ' + image_dir +\
					'/mountpoints-12.img -o ' + mounts_log
	

		p = sp.Popen(decode_sh,shell=True,stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.PIPE)
		p.stdin.write('123456\n')
		ret = p.wait()
		logging.info(ret)
		if ret:
			logging.error('decode failed.')
			return False
		
#		if not os.path.exists(mounts_log):
#			return False
#		lines = open(mounts_log).readlines()
#		fp = open(mounts_log,'w')
#		for s in lines:
#			fp.write(s.replace(last_container_id,self.container_id))
#		fp.close()
		sed_sh = 'sudo sed -i \"s/' + last_container_id +'/' + self.container_id +\
				 '/g\" ' + mounts_log
		logging.info(sed_sh)
		sp.call(sed_sh,shell=True)

		encode_sh = 'sudo /home/hdq/criu/crit/crit encode -i ' + mounts_log +\
					' -o ' + image_dir + '/mountpoints-12.img'
		logging.info(encode_sh)
		p = sp.Popen(encode_sh,shell=True,stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.PIPE)
		p.stdin.write('123456\n')
		ret = p.wait()
		logging.info(ret)
		if ret:
			logging.error('encode failed.')
			return False





		restore_sh = 'sudo criu restore -o /var/lib/docker/restore.log -v4 -d -D ' +\
					 image_dir + ' --manage-cgroups --evasive-devices --ext-mount-map auto --root /var/lib/docker/aufs/mnt/'+\
					 self.container_id + ' --ext-mount-map /etc/hostname:/var/lib/docker/containers/' +\
					 self.container_id + '/hostname --ext-mount-map /etc/hosts:/var/lib/docker/containers/' +\
					 self.container_id + '/hosts --ext-mount-map /var/run/resolvconf/resolv.conf:/var/lib/docker/containers/' +\
					 self.container_id + '/resolv.conf'

					 
#		restore_sh = 'sudo criu restore -o /var/lib/docker/restore.log -v4 --tree ' + pid + ' --images-dir ' +\
#					 image_dir + ' --ext-mount-map auto'
#       image_dir = self.workdir() + '/dump'
#		restore_sh = 'criu restore --tree ' + pid +' --images-dir ' +\
#					 image_dir +' --shell-job --ext-mount-map auto'
		logging.info(restore_sh)
		p = sp.Popen(restore_sh,shell=True,stdin=sp.PIPE,stdout=sp.PIPE,stderr=sp.PIPE)
		p.stdin.write('123456\n')
		ret = p.wait()
		logging.info(ret)
		if ret:
			logging.error('criu restore failed.')
			return False
		return True
	
	def dst_filesystem(self):
		dst_fs = lm_docker_filesystem(self.container_id, self.task_id)
		if dst_fs.extract_file() is False:
			logging.error('Error: filesystem is destination node restore failed.')
			return False
		return True

	def predump_restore(self, predump_image_name, predump_dir):
		self.untar_image(predump_image_name, predump_dir)
	
	
'''

	def restore(self,dump_image_name):
		self.untar_image(dump_image_name,'dump')
		image_dir = self.workdir() + '/dump'
		restore_op = 'docker restore --force=true --allow-tcp=true --work-dir='\
					 + image_dir + ' --image-dir=' + image_dir + ' ' +self.container_id
		logging.debug(restore_op)
		
		ret = sp.call(restore_op,shell = True)
		logging.info(ret)

		if 0 != ret:
			logging.error('docker restore failed.')
			return False
		return True



	
	def dst_filesystem(self):
		dst_fs = lm_docker_filesystem(self.container_id, self.task_id)
		if dst_fs.extract_file() is False:
			logging.error('Error: filesystem is destination node restore failed.')
			return False
		return True


	def predump_restore(self,predump_image_name,predump_dir):
		self.untar_image(predump_image_name,predump_dir)



'''
