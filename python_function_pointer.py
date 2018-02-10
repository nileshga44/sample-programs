#!/usr/bin/python

# Description: A way to use function pointer(C language concept) in python.

def f1():
	print "In f1"

def f2():
	print "In f2"

data = {1:f1, 2:f2}
input = 1
data[input]()
