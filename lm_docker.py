#!usr/bin
#encoding: utf-8

import sys
import logging
from lm_docker_check import lm_docker_check 
#from lm_docker_overlay import overlay
from lm_docker_livemigrate import live_migrate
from lm_docker_service import server_node


lm_docker_version = '0.1'
lm_docker_info = 'live migration on docker'


def help():
	print('lm_docker: ')
	print('Usage: lm_docker [opt] [argv]')
	print('Usage: lm_docker check')
	print('Usage: lm_docker -h')
	print('    service -l #listening to the connections')
	print('    fetch [service name] #get overlay image')
	print('    overlay [new image] [base image] #create overlay image')
	print('    migrate [container name] -t [des ip] #migrate container')


def parase(argv):
	argv_len = len(argv)
	logging.debug(argv_len)
	ret = True
	opt = argv[0]
	if argv_len == 1:
		if opt == 'check':
			ret = lm_docker_check()
	
	if argv_len == 2:
		if opt == 'service' and argv[1] == '-l':
			server = server_node();
			server.run()
		elif opt == 'fetch':
			overlay_name = argv[1]
			ovlay = overlay(overlay_name,None)
			ovlay.fetch()
	
	if argv_len == 3:
		if opt == 'overlay':
			modified_image = argv[1]
			base_image = argv[2]
			logging.info(modified_image)
			logging.info(base_image)
			ol = overlay(modified_image,base_image)
			ret = ol.generate()
	
	if argv_len == 4:
		if opt == 'migrate':
			container_name = argv[1]
			cmd_option = argv[2]
			dst_ip = argv[3]
			if cmd_option != '-t':
				logging.error('please follow opt format:')
				logging.error(' migrate [container] -t [dst ip]')
				return False
			lmigrate = live_migrate(container_name, dst_ip)
		    
			ret = lmigrate.run()

	if ret is False:
		logging.error('service failed')
		return False
	return True

if __name__ == '__main__':
	logging.basicConfig(level=logging.INFO)
	if len(sys.argv) > 5:
		logging.error('Error:too many input arguments!')
	
	logging.debug(sys.argv)

	opt = sys.argv[1]
	if opt =='-h' or opt == '-help' or opt == 'help':
		help()
		sys.exit(0)
	elif opt == '-v' or opt == 'version':
		print('lm_docker_version: '+lm_docker_version)
		print('lm_docker_info: '+lm_docker_info)
		sys.exit(0)
	
	ret = parase(sys.argv[1:])
	if ret == False:
		logging.error('service failed!')
		sys.exit(-1)
	sys.exit(0)

