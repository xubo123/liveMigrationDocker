#!/usr/bin
#encoding: utf-8

import os
import netifaces as ni
import logging
import SocketServer
import struct
import time
from lm_docker_util import *

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
				length = size - len(buffer)

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
		cmd_type = str_array[0]

		if 'init' == cmd_type:
			self.task_id = str_array[1]
			self.label = str_array[2]
			self.send_msg('init:success')
			logging.info('get init msg success.')



