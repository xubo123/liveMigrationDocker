#!/usr/bin
#encoding: utf-8


import socket
import struct
import logging
import time

from docker import Client
from lm_docker_util import *
from lm_docker_client import lm_docker_socket
from lm_docker_fs import lm_docker_filesystem
BUF_SIZE = 1024


#----Get the container information by the container name. (id,label,pid)----#
def get_container_info(container_name):
	cli = Client(version='1.13.0-dev')
	out = cli.inspect_container(name)
	
	if 'Error' in out:
		logging.error('Error: Get container id Failed')
		return None,None

	image = out['Config']['Image']
	image_id = out['Image']
	label = name + '-' + image + '-' + image_id
	logging.info(label)
	pid = out['State']['Pid']
	logging.info(pid)

	return out['Id'],label,pid


#----Check whether the container is running or not.----#
def check_container_status(container_id):
	cli = Client(version='1.13.0-dev')
	out = cli.containers(container_id)
	lines = str(out)

	if 'Id' in lines:
		logging.info('container id is get by docker-py:%s' %out[0]['Id'])
		return True
	return False


#----The main feature, live migration ----#
class live_migrate:
	def __init__(self, container_name, dst_ip):
		self.dst_ip = dst_ip
		seld.container_name = container_name
		self.task_id = random_str()
		self.container_id, self.label, self.pid = get_container_info(container_name)

	
	def run(self):
		print('task id:' + self.task_id)
		start_time = time.time()

		#----check container status: before migrate, we must ensure the container is running in host.----# 
		if not check_container_status(self.container_id):
			logging.error('Error: Container which you want to migrate is not running.')
			return False

		#----we need to know the destination node status, CRIU version, Docker version etc.----#
		lm_docker_socket = lm_docker_socket(self.dst_ip)
		msg = 'init#' + self.task_id + '#' + self.label
		lm_docker_socket.send(msg)

		data = lm_docker_socket.recv()
		if 'success' not in data:
			logging.error('send msg failed')
			return False
	
		#----file system.----#
		fs_handle = lm_docker_filesystem(self.container_id,self.task_id)
		if not fs_handle.tar_file():
			logging.error('Error: tar file failed\n')
			return False
		image_fs = fs_handle.image_path()
		msg_fs = 'fs#' + str(os.path.getsize(fs_image)) + '#'
		lm_docker_socket.send(msg_fs)
		lm_docker_socket.send_file(image_fs)
		data = lm_docker_socket.recv()

		#----start the pre-copy looper----#
		pre_time_start = time.time()









