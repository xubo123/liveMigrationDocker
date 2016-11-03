#!usr/bin
#encoding: utf-8

import json
import logging
from docker import Client
from lm_docker_utl import *
import subprocess as sp


docker_api_version = ''

def lm_docker_check():
	logging.info('start validate checking...')
	if(docker_check() and criu_check() and docker_py_check() and kernel_check()) is False:
		logging.error('Error: lm_docker environment check failed')
		return False

	print('\nOK, your system seems satisfied live migration environment.')
	return True

def docker_check():
	docker_version = sp.check_output('docker version',shell=True)
	lines = docker_version.split('\n')
	for line in lines:
		if 'API version' in line:
			global docker_api_version
			docker_api_version = line.split(':')[1]
			docker_api_version = ''.join(docker_api_version.split())

	if not docker_api_version:
		logging.error('Error:docker version failed')
		return False
	print('docker_api_version: ' +docker_api_version)
	return True

def criu_check():
	out = sp.check_output('criu check',shell=True)
	if 'Error' in out:
		logging.error('Error:criu check failed.')
		return False
	else:
		logging.info('criu check in successfully.')
	
	criu_info = sp.check_output('criu -V', shell=True)
	lines = criu_info.split('\n')
	for line in lines:
		if 'Version' in line:
			print('criu '+line)
			return True
	return False


def docker_py_check():
	global docker_api_version
	if isBlank(docker_api_version):
		logging.error('Error: criu check failed [inner issue occurs].')

	cli = Client(version=docker_api_version)
	to_json = json.dumps(cli.info())
	json_info = json.loads(to_json)
	if json_info['Driver'] != 'aufs':
		logging.error('Error: now we just support aufs.')
		return False
	logging.debug(json_info['OperatingSystem'] +'.')
	print(json_info['KernelVersion'])
	logging.debug('docker py works')
	return True

def kernel_check():
	logging.info('linux kernel check')
	kernel_version = sp.check_output('uname -a',shell = True)
	kernel_version = kernel_version.split(' ')[2]
	kernel_version = kernel_version.split('-')[0]
	kernel_first_version = kernel_version.split('.')[0]
	kernel_second_version = kernel_version.split('.')[1]
	if (int)(kernel_first_version) < 4 or (int)(kernel_second_version) < 2 :
		logging.error('Error: linux kernel version should be at least 4.2.0.')
		return False
	else:
		logging.info('kernel check in successfully.')
	return True
