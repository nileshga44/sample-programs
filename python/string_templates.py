#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# Templates in python, present in string module.
# Provides more features, more readable and simple than format().

import string

t = string.Template('x is $x')
print t.substitute({'x' : 1})  # x is 1


t = string.Template('Hi $name, You have $marks marks')

for item in [('Ram', 10), ('Hero', 20), ('abcd', 30)]:
    print t.substitute(name=item[0], marks=item[1])
    # Hi Ram, You have 10 marks
    # Hi Hero, You have 20 marks
    # Hi abcd, You have 30 marks
