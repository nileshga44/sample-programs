#!/usr/bin/python

# Date: 2018-09-03
#
# Description:
# Static and class methods demo.


class A(object):
    def foo(self, x):
        print ('Executing foo(%s, %s)' % (self, x))

    @classmethod
    def class_foo(cls, x):
        print ('Executing class_foo of A(%s, %s)' % (cls, x))

    @staticmethod
    def static_foo(x):
        print ('Executing static_foo(%s)' % x)

class B(A):
    @classmethod
    def class_foo(cls, x):
        print ('Executing class_foo of B(%s, %s)' % (cls, x))

    def xyz(self):
      print ('In instance method xyz() of class B...')

A.class_foo(1)  # Executing class_foo of A(<class '__main__.A'>, 1)
B.class_foo(2)  # Executing class_foo of B(<class '__main__.B'>, 2)

A.static_foo(3)  # Executing static_foo(3)
B.static_foo(4)  # Executing static_foo(4)

# This would be an error as xyz() is an instance method so can only be called
# using object.
# B.xyz()

# Static and class method can also be called using objects.
a = A()
b = B()

a.class_foo(5)  # Executing class_foo of A(<class '__main__.A'>, 5)
a.static_foo(6)  # Executing static_foo(6)

b.class_foo(7)  # Executing class_foo of B(<class '__main__.B'>, 7)
b.static_foo(8)  # Executing static_foo(8)

b.xyz()  # In instance method xyz() of class B...
