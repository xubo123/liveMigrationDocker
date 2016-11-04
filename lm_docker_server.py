#!/usr/bin
#encoding: utf-8

import os
import netifaces as ni
import logging
import SocketServer
import time



from lm_docker_util import *


class lm_docker_server(SocketServer.BaseRequestHandler):

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
		self.request.recv(length)


	def handle(self):
		tmp = self.recv_msg()
		str_array = tmp.split('#')


