#!usr/bin
#encoding: utf-8


import random
import string
import os.path
import logging
import subprocess as sp

base_dir = '/var/lib/docker'
PORT = 10019
cgroup_log = '/var/lib/docker/cgroup.log'
mount_log = '/var/lib/docker/mount.log'
crit_bin = '/home/hdq/criu/crit/crit'
cgroup_img = '/cgroup.img'
mount_img = '/mountpoints-12.img'

def isBlank(inString):
	if inString and inString.strip():
		return False
	return True



def check_dir(file_path):
	if os.path.exists(file_path):
		return True
	else:
		return False


def check_file(file):
	if os.path.isfile(file):
		return True
	else:
		return False


def random_str(size = 6,chars = string.ascii_lowercase + string.digits):
	return ''.join(random.choice(chars) for _ in range(size))
