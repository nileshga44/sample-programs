#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# Usage of property in python.


class Person(object): # Important to inherit from object to work with property

  def __init__(self, name):
    print ('In __init__()')
    self._name = name

  @property
  def name(self):
    print ('In name.getter')
    return self._name

  @name.setter
  def name(self, value):
    print ('In name.setter')
    self._name = value

  @name.deleter
  def name(self):
    print ('In name.deleter')
    del self._name


p = Person('hans')  # In __init__()
p.name  # In name,getter
p.name = 'hansraj'  # In name.setter
print (p._name)  # hansraj, directly accessed hidden variable _name.
del p.name  # In name.deleter

# After deleting p.name we can't access p.name or p._name, it will fail will
# error: AttributeError: 'Person' object has no attribute '_name'
# p.name
# p._name


print ('\n########### Using property function ################')
# property(fget=None, fset=None, fdel=None, doc=None)

class Person1(object): # Important to inherit from object to work with property

  def __init__(self, name):
    print ('In __init__()')
    self._name = name

  def getName(self):
    print ('In getName()')
    return self._name

  def setName(self, value):
    print ('In setName()')
    self._name = value

  def delName(self):
    print ('In delName()')
    del self._name

  name = property(fget=getName, fset=setName, fdel=delName,
                  doc='name property')


p = Person1('hans')  # In __init__()
p.name  # In getName()
p.name = 'hansraj'  # In setName()
print (p._name)  # hansraj
del p.name  # In delName()
