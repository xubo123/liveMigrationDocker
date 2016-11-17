#!/usr/bin
#encoding: utf-8

import os
import netifaces as ni
import logging
import SocketServer
import struct
import time
from lm_docker_util import *
from lm_docker_dstnode import destination_node
BUF_SIZE = 1024

class lm_docker_server(SocketServer.BaseRequestHandler):
	"""
	The request handler class for our server.
	It is instantiated once per connection to the server, and must
	override the handle() method to implement communication to the client.
	"""
	def recv_file(self,file_name,file_size):
		hd_file = open(file_name,'wb')
		try:
			buffer = b''
			length = file_size
			while(length > 0):
				tmp = self.request.recv(length)
				if not tmp:
					return False
				buffer = buffer + tmp
				length = file_size - len(buffer)

			hd_file.write(buffer)
			hd_file.close()
			return True
		except Exception as conError:
			logging.error('Error: connection error, conError:%s' %conError)

	
	def send_msg(self,msg):
		length = len(msg)
		self.request.send(struct.pack('!I',length))
		self.request.send(msg)


	def recv_msg(self):
		format_buf = self.request.recv(4)
		length, = struct.unpack('!I',format_buf)
		return self.request.recv(length)


	def handle(self):
		tmp = self.recv_msg()
		print ('tmp:' + tmp)
		str_array = tmp.split('#')
		dst_handle = destination_node()
		cmd_type = str_array[0]

		if 'init' == cmd_type:
			self.task_id = str_array[1]
			self.label = str_array[2]
			dst_handle.init_dst_node(self.task_id,self.label)
			self.send_msg('init:success')
			logging.info('get init msg success.')
	

		while(True):
			new_msg = self.recv_msg()
			logging.info(new_msg)
			str_array = new_msg.split('#')
			cmd_type = str_array[0]

			if 'fs' == cmd_type:
				fs_time_start = time.time()
				fs_image = self.task_id + '-fs.tar'
				fs_size = int (str_array[1])
				msg_fs = 'fs:'
				if self.recv_file(fs_image,fs_size):
					msg_fs += 'success'
				else:
					msg_fs += 'failed'
				self.send_msg(msg_fs)
				dst_handle.dst_filesystem()
				fs_time_end = time.time()
			
			if 'predump' == cmd_type:
				predump_time_start = time.time()
				predump_image = self.task_id + str_array[1] +'.tar'
				logging.info(predump_image)
				predump_size = int(str_array[2])
				logging.info(predump_size)
				msg_predump = 'predump:'
				if self.recv_file(predump_image,predump_size):
					msg_predump += 'success'
				else:
					msg_predump += 'failed'
				self.send_msg(msg_predump)
				logging.info(msg_predump)
				dst_handle.predump_restore(predump_image,str_array[1])
				predump_time_end = time.time()
'''
			if 'dump' == cmd_type:
				dump_time_start = time.time()
				dump_image = self.task_id + '-mm.tar'
				dump_size = int(str_array[1])
				last_predump_dir = str_array[2]
				if last_predump_dir != 'pre0' :
					os.rename(last_predump_dir,'pre')
				msg_dump = 'dump:'
				if self.recv(dump_image,dump_size):
					msg_dump += 'success'
				else:
					msg_dump += 'failed'
				self.send_msg(msg_dump)
				dst_handle.restore(dump_image)
				dump_time_end = time.time()
				self.send_msg('restore:success')
				break
				 
'''


