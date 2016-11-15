#!usr/bin
#encoding: utf-8

import tarfile
import shutil
import logging
from lm_docker_util import *


class lm_docker_filesystem:
	def __init__(self,container_id,task_id):
		self.container_id = container_id
		self.task_id = task_id
		print (container_id)
		print (task_id)
		self.fs_tar_name = task_id +'-fs.tar'
		self.container_tar = 'container.tar'
		self.container_init_tar = 'container-init.tar'


	def tar_file_without_path(self,container_tar,path):
		if not os.path.isdir(path):
			os.mkdir(path)
		tar_file = tarfile.TarFile.open(container_tar,'w')
		tar_file.add('./')
		tar_file.close()
		shutil.move(container_tar,self.workdir())
		os.chdir('../')


	def workdir(self):
		return base_dir +'/tmp/' +self.task_id +'/'


	def image_path(self):
		return self.workdir() + '/' + self.fs_tar_name

	
	def extract_file_to_path(self,tar,path):
		tar_file = tarfile.TarFile.open(tar,'r')
		tar_file.extractall(path)
		tar_file.close()
		os.remove(tar_file)


	def tar_file(self):
		'''
		tar file in /$(container_id)/
		'''
		if not os.path.isdir(self.workdir()):
			os.mkdir(self.workdir())
		layer_dir = base_dir + '/aufs/diff/'
		container_path = layer_dir + self.container_id

		if not check_dir(container_path):
			logging.error('Error: file path %s not exists' %container_path)
			return False

		container_tar = self.container_tar
		self.tar_file_without_path(container_tar,container_path)


		'''
		tar file in /$(container-id)-init/
		'''

		container_init_path = container_path +'-init'
		if not check_dir(container_init_path):
			logging.error('Error: init file path %s not exists' %container_init_path)
			return False
		container_init_tar = self.container_init_tar
		self.tar_file_without_path(container_init_tar,container_init_path)


		'''
		tar file in fs.tar
		'''
		os.chdir(self.workdir())
		if not (check_file(container_tar) and check_file(container_init_tar)):
			logging.error('Error:extract file system layer failed.')
			return False

		fs_tar_name = self.fs_tar_name
		fs_tar_file = tarfile.TarFile.open(fs_tar_name,'w')
		fs_tar_file.add(container_tar)
		fs_tar_file.add(container_init_tar)
		fs_tar_file.close()

		if not check_file(fs_tar_name):
			logging.error('Error: extract filesystem layer failed.')
			return False

		os.remove(container_tar)
		os.remove(container_init_tar)
		return True


	def extract_file(self):
		'''
		extract file from fs.tar.gz
		'''

		os.chdir(self.workdir())
		fs_tar_name = self.fs_tar_name
		if not check_file(fs_tar_name):
			logging.error('Error: filesystem %s not exists.' %fs_tar_name)
			return False

		fs_tar_file = tarfile.TarFile.open(fs_tar_name,'r')
		fs_tar_file.extractall()
		fs_tar_file.close()

		container_tar = self.container_tar
		container_init_tar = self.container_init_tar
		if not (check_file(container_tar) and check_file(container_init_tar)):
			logging.error('Error: filesystem extract file failed, fs not exists.')
			return False

		'''
		extract file into /$(container-id)/
		'''
		container_path = base_dir + 'aufs/diff/' + self.container_id
		if not check_dir(container_path):
			logging.error('Error: dir %s is not exists.' %container_path)
			return False

		self.extract_file_to_path(container_tar,container_path)

		'''
		extract file into /$(container-id)-init/
		'''
		container_init_path = container_path + '-init'
		if not check_dir(container_init_path):
			logging.error('Error: dir %s is not exists.' %container_init_path)
			return False

		self.extract_file_to_path(container_init_tar,container_init_path)

		return True



