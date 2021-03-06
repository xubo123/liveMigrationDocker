#!usr/bin
#encoding: utf-8

import os
import shutil
import tarfile
import time
from lm_docker_util import *
from lm_docker_check import lm_docker_check



def lz4_tarfile(level, input_name='pages-1.img',output_name='memory.lz4'):
	cmd = 'lz4 -' + level + ' ' + input_name + ' ' + output_name
	logging.debug(cmd)
	sp.call(cmd, shell=True)
	os.remove(input_name)


class lm_docker_memory:
	def __init__(self, task_id):
		self.task_id = task_id
		self.predump_count = 0
		os.chdir(self.workdir())

	def workdir(self):
		return base_dir + '/tmp/' +self.task_id + '/'

	def predump_name(self):
		return 'predump' + str(self.predump_count)

	def predump_image_path(self):
		return self.workdir() + self.task_id + '-' +self.predump_name() +'.tar'

	def dump_image_path(self):
		return self.workdir() + self.task_id + '-dump.tar'

	def rename(self):
		os.rename(self.predump_name(),'predump')


	#----the kernel iterative----#
	def predump(self,container_id,is_transfer):
		#----we use predump function to decrease the halt time.----#
		#----in each iterative, we need the image_dir and parent_dir info----#
		os.chdir(self.workdir())
		if(is_transfer == True):
			self.predump_count += 1
		dir_name = self.predump_name()
		if(is_transfer == False):
			shutil.rmtree(dir_name)
		dir_path = self.workdir() + dir_name
		work_path = self.workdir()
		os.mkdir(dir_name)

		if self.predump_count > 1:
			parent_dir = 'predump' + str(self.predump_count - 1)
			if not check_dir(self.workdir() + parent_dir):
				logging.error('Error: parent dir is not exists.')
			parent_path = '../'  + parent_dir
			append_cmd = '--prev-images-dir=' + parent_path

		else:
			append_cmd = ''

		predump_sh = 'docker checkpoint --image-dir=' + dir_path +\
                             ' --work-dir=' + work_path +\
					 ' --pre-dump --leave-running ' + append_cmd +\
					 ' ' + container_id
		logging.info(predump_sh)

		out_msg = sp.call(predump_sh, shell=True)
		if out_msg:
			logging.error('Error: criu pre-dump failed.')
			return False

		name = self.task_id + '-' + dir_name +'.tar'
		self.tar_image(self.workdir(),name,dir_name)
		return True


	def tar_image(self,image_dir,name,path):
		os.chdir(image_dir)
		os.chdir(path)
		lz4_tarfile('1')
		os.chdir(image_dir)

		tar_file = tarfile.open(name,'w')
		tar_file.add(path)
		tar_file.close()

		if not check_file(name):
			logging.error('Error: package failed.')
			return False
		return True


	def dump(self,pid,container_id):
	#----dump the change memory in last interative, and process tree states.----#
		os.chdir(self.workdir())
		dump_time_start = time.time()
		logging.info('dump the docker init process ' + str(pid))
		dump_dir = 'dump'
		predump_dir = 'predump'
		os.mkdir(dump_dir)
		dump_path = self.workdir() + dump_dir
		work_path = self.workdir()
		parent_path = '../' + predump_dir
		dump_sh = 'docker checkpoint --image-dir=' + dump_path +\
                          ' --work-dir=' + work_path +\
                          ' --track-mem --prev-images-dir=' + parent_path +\
			  ' ' + container_id
		out_msg = sp.call(dump_sh, shell=True)
		logging.info('container stop time is ' + str(time.time()))
		if out_msg:
			logging.error('Error: criu dump failed')
			return False
		name = self.task_id + '-' + dump_dir +'.tar'
		self.tar_image(self.workdir(),name,dump_dir)
		logging.info('dump image tar end time is %s :' %time.time()) 
		return True

