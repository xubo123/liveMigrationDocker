#!/usr/bin
#encoding: utf-8


import socket
import struct
import logging
import time

from docker import Client
from lm_docker_util import *

BUF_SIZE = 1024


class lm_docker_socket:

	def __init__(self, dst_ip):
		
		HOST = dst_ip
		logging.info('destination ip is %s:' % HOST)
		self.socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		self.socket.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)
		try:
			self.socket.connect((HOST,PORT))
		except Exception, e:
			logging.error('Error: There is something wrong in socket connect to the server node : %s.' % e)
			return False

	
	def send_file(self, file_path):
		file_handler = open(file_path,'rb')
		self.socket.sendall(file_handler.read())
		file_handler.close()


	def send_msg(self, msg):
		length = len(msg)
		self.socket.sendall(struct.pack('!I',length))
		self.socket.sendall(msg)


	def recv_msg(self):
		format_buf = self.socket.recv(4)
		length, = struct.unpack('!I',format_buf)
		return self.socket.recv(length)


	def close(self):
		self.socket.close()

