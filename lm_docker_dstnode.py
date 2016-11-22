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

	def restore(self,pid,dump_image_name):
		self.untar_image(dump_image_name, 'dump')
		image_dir = self.workdir() + '/dump'
		restore_sh = 'criu restore -t ' + pid +' --images-dir ' +\
					 image_dir +' --shell-job --ext-mount-map /sys/fs/cgroup/memory:/sys/fs/cgroup/memory' +\
		             ' --ext-mount-map /sys/fs/cgroup/devices:/sys/fs/cgroup/devices' +\
		             ' --ext-mount-map /sys/fs/cgroup/freezer:/sys/fs/cgroup/freezer' +\
		             ' --ext-mount-map /sys/fs/cgroup/net_cls:/sys/fs/cgroup/net_cls' +\
		             ' --ext-mount-map /sys/fs/cgroup/perf_event:/sys/fs/cgroup/perf_event' +\
		             ' --ext-mount-map /sys/fs/cgroup/net_prio:/sys/fs/cgroup/net_prio' +\
		             ' --ext-mount-map /sys/fs/cgroup/hugetlb:/sys/fs/cgroup/hugetlb' +\
		             ' --ext-mount-map /etc/hosts:/etc/hosts' +\
		             ' --ext-mount-map /etc/hostname:/etc/hostname' +\
		             ' --ext-mount-map /etc/resolv.conf:/etc/resolv.conf' +\
		             ' --ext-mount-map /sys/fs/cgroup/blkio:sys/fs/cgroup/blkio' +\
		             ' --ext-mount-map /sys/fs/cgroup/cpuacct:/sys/fs/cgroup/cpuacct' +\
		             ' --ext-mount-map /sys/fs/cgroup/cpu:/sys/fs/cgroup/cpu' +\
		             ' --ext-mount-map /sys/fs/cgroup/cpuset:/sys/fs/cgroup/cpuset' +\
		             ' --ext-mount-map /sys/fs/cgroup/systemd:/sys/fs/cgroup/systemd'
		logging.info(restore_sh)
		ret = sp.call(restore_sh, shell=True)
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
