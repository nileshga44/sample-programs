#!/usr/bin/python

# Date: 2018-09-03
#
# Description:
# 1. issubclass(class-1, class-2) -> Checks if class-1 is derived from class-2 or
#    in other words is class-2 base class of class-1 or not.
#
# 2. isinstance(object, class-name) -> Checks if object is instance of
#    class-name or not.

class base:
    pass

class derived(base):
    pass

print (issubclass(derived, base))  # True
print (issubclass(derived, derived))  # True
print (issubclass(base, derived))  # False
print (issubclass(base, base))  # True

b = base()
d = derived()

print (isinstance(b, base))  # True
print (isinstance(d, base))  # True
print (isinstance(b, derived))  # False
print (isinstance(d, derived))  # True

print ('\nOther examples')
print (isinstance(1, int))  # True
print (isinstance('1', int))  # False
print (isinstance('1', str))  # True
print (isinstance([1, 2, 3], list))  # True
