#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# __call__() method makes an object of a class and class name as callable.


class A:
  g_data = []

  def __init__(self, data):
    self.g_data.append(data)

  def __call__(self):
    for d in self.g_data:
      print (d)


a1 = A('Nisha')
a2 = A('Mahabeer')
a3 = A('Khargosh')

print ('*********A(Test)**********')
A('Test')  # This only calls __init__() not __call__()

print ('*********a3()**********')
a3()  # Calls __call__() method

print ('*********A(Test1)()**********')
A('Test1')()  # Creates object and calls __call__()


# Output:
# ------------------
# *********A(Test)**********
# *********a3()**********
# Nisha
# Mahabeer
# Khargosh
# Test
# *********A(Test1)()**********
# Nisha
# Mahabeer
# Khargosh
# Test
# Test1
