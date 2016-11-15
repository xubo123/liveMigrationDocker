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
from lm_docker_mem import lm_docker_memory
BUF_SIZE = 1024


#----Get the container information by the container name. (id,label,pid)----#
def get_container_info(container_name):
	cli = Client(version='1.21')
	out = cli.inspect_container(container_name)
	
	if 'Error' in out:
		logging.error('Error: Get container id Failed')
		return None,None

	image = out['Config']['Image']
	image_id = out['Image']
	label = container_name + '-' + image + '-' + image_id
	logging.info(label)
	pid = out['State']['Pid']
	logging.info(pid)

	return out['Id'],label,pid


#----Check whether the container is running or not.----#
def check_container_status(container_id):
	cli = Client(version='1.21')
	out = cli.containers(container_id)
	lines = str(out)

	if 'Id' in lines:
		logging.info('container id is get by docker-py:%s' %out[0]['Id'])
		return True
	return False


#----format the image file size----#
def sizeof_format(num,suffix = 'B'):
	for unit in ['','Ki','Mi','Gi','Ti','Pi','Ei','Zi']:
		if abs(num) < 1024.0:
			return '%3.1f%s%s' %(num,unit,suffix)
		num /= 1024.0
	return '%.1f%s%s' %(num,unit,suffix)



#----The main feature, live migration ----#
class live_migrate:
	def __init__(self, container_name, dst_ip):
		self.dst_ip = dst_ip
		self.container_name = container_name
		self.task_id = random_str()
		self.container_id, self.label, self.pid = get_container_info(container_name)

	
	def run(self):
		print('task id:' + self.task_id)
		start_time = time.time()
		print(start_time)

		#----check container status: before migrate, we must ensure the container is running in host.----# 
		if not check_container_status(self.container_id):
			logging.error('Error: Container which you want to migrate is not running.')
			return False

		#----we need to know the destination node status, CRIU version, Docker version etc.----#
		lm_socket = lm_docker_socket(self.dst_ip)
		msg = 'init#' + self.task_id + '#' + self.label
		print('client send msg: ' + msg)
		lm_socket.send_msg(msg)

		data = lm_socket.recv_msg()
		print ('data1' + data)
		if 'success' not in data:
			logging.error('send msg failed')
			return False
	
		#----file system.----#
		fs_handle = lm_docker_filesystem(self.container_id,self.task_id)
		if not fs_handle.tar_file():
			logging.error('Error: tar file failed\n')
			return False
		fs_image = fs_handle.image_path()
		msg_fs = 'fs#' + str(os.path.getsize(fs_image)) + '#'
		lm_socket.send_msg(msg_fs)
		lm_socket.send_file(fs_image)
		data = lm_socket.recv_msg()
		print ('data2' + data)

		#----start the pre-copy looper----#
		pre_time_start = time.time()
		livemigrate_handle = lm_docker_memory(self.task_id)
		flag_precopy = True

		while(flag_precopy):
			if not livemigrate_handle.predump(self.pid):
				return False
			
			predump_image = livemigrate_handle.predump_image_path()
			predump_size = os.path.getsize(predump_image)
			
			#send predump image to the dst node
			msg_predump = 'predump#' + livemigrate_handle.predump_name() + \
						  '#' + str(predump_size) + '#'
			lm_docker_socket.send_msg(msg_predump)
			send_predump_image_start = time.time()
			lm_docker_socket.send_file(predump_image)
			data = lm_docker_socket.recv_msg()
			send_predump_image_end = time.time()
			send_predump_image_time = send_predump_image_end - send_predump_image_start
			print ('predump image size is : ' + sizeof_format(predump_size))
			print ('measure bandwidth:' + sizeof_format((predump_size*8)/(send_predump_image_time)) +\
						'/s')

			#----control whether the pre-copy iteration continue or not----#
			if(predump_size <= (predump_size/send_predump_image_time) * 1.5):
				flag_precopy = False
				livemigrate_handle.rename()

		#----do the last step, dump and send the dump image for dst node restore----#
		precopy_end = time.time()

		if not livemigrate_handle.dump(self.container_name):
			logging.error('Error: there is something wrong in the last dump step.')
			return False
		dump_end = time.time()

		dump_image = livemigrate_handle.dump_image_path()
		dump_size = os.path.getsize(dump_image)

		#send dump image to the dst node
		msg_dump = 'dump#' + str(dump_size) + '#' +\
				   livemigrate_handle.predump_name() +'#'
		lm_docker_socket.send_msg(msg_dump)
		lm_docker_socket.send_file(dump_image)
		data = lm_docker_socket.recv_msg()
		logging.debug(data)
		
		return True









