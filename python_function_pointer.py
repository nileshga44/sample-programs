#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# A way to simulate function pointer(C language concept) in python.


def f1():
	print "In f1"

def f2():
	print "In f2"

data = {1: f1, 2: f2}  # Function pointer

choice = 1
data[choice]()  # Relevant function gets called based on choice.
