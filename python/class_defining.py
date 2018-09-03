#!/usr/bin/python

# Date: 2017-mm-dd
#
# Description:
# Sample class declaration and usage of getattr and setattr function.


class student:
    """A class representing student's attributes"""

    def __init__(self, n, a):
        self.full_name = n
        self.age = a

    def get_age(self):
        return self.age


b = student('some-name', 27)

print (b.get_age())  # 27
print (b.full_name)  # some-name
print (b.age)  # 27

b.age = 50
print (b.age)  # 50
print (b.get_age())  # 50

print ('getattr function...')
print (getattr(b, 'full_name'))  # some-name

# Prints functions reference.
# <bound method student.get_age of <__main__.student instance at 0x7fdf3ebb0950>>
print (getattr(b, 'get_age'))

# Calls get_age()
# 50
print (getattr(b, 'get_age')())

print ('hasattr function...')
print (hasattr(b, 'age'))  # True
print (hasattr(b, 'get_age'))  # True
print (hasattr(b, 'get_age123'))  # False
