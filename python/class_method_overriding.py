#!/usr/bin/python

# Date: 2018-09-03
#
# Description:
# 1. If a class has method defined multiple times, one defined last would be
#    applicable.
# 2. Method overriding demo.


class X():
  def __init__(self):
    print ('In __init__() of X')

  # This will not be used as this function is again defined below, last defined
  # is always applicable.
  def fun(self):
    print ('In first fun() of X')

  def fun(self, a):
    print ('In second fun() of X: %d' % a)

a = X()

# Gives error 'TypeError: fun() takes exactly 2 arguments (1 given)'
# a.fun()

# Second defined fun() will be effective.
a.fun(1)  # In second fun() of X: 1.

class Y(X):
  def __init__(self):
    print ('In __init__() of Y')

  def fun(self):
    print ('In fun() of Y')

b = Y()

# fun() defined in base class is overridden so Y's fun() will be called.
b.fun()  # In fun() of Y
