#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# Closures demo, closure is the fact that inner functions remember their
# enclosing scope.
# Like in the below example inner() knows the value of x which is passed to
# outer() only.


def outer(x):
    def inner():
        print x
    return inner

p = outer(1)
# This is actually calling inner(), once outer() returns reference to inner()
p()  # 1

# This gives error as inner() is not visible to the outside world
# p = inner()

q = outer(10)
q()  # 10
