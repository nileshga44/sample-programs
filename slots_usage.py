#!/usr/lib/python

# Date: 2018-05-28
#
# Description:
# As python is dynamic language so it allows to attach any attribute to an class
# object and list of all attributes for an object is stored in dictionary
# (which is dynamic) so it consumes lot of memory when large number of objects
# are created. To avoid this memory waste we can limit the attributes allowed on
# a class object using __slots__.
# In slots list we can specify the list of attributes allowed on an object which
# ultimately makes attribute dictionary static as now it will know all
# attributes allowed in advance hence saves large amount of memory.
#
# Reference:
# https://www.python-course.eu/python3_slots.php


class A(object):
  pass

a = A()

# Without slots it allows attaching any number of attributes to class instance.
a.x = 10
a.y = 20

print a.x, a.y  # 10 20
print a.__dict__  # {'y': 20, 'x': 10}


class B(object):
  __slots__ = ['x']

b = B()
b.x = 100
print b.x

# This fails with error: AttributeError: 'B' object has no attribute 'y'
# As we have restricted allowed attributes on objects of class B to only 'x'.
b.y = 200
