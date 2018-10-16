#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# Operator overloading demo, overloads + operator to add 2 vector objects.


class Vector:
  def __init__(self, a, b):
    self.a = a
    self.b = b

  def __str__(self):  # Function overriding
    """Overrides default str() function to print vector object."""
    return 'Vector (%d, %d)' % (self.a, self.b)

  def __add__(self, other):  # Operator overloading
    """Overloads add(+) operator to add 2 vector objects."""
    return Vector(self.a + other.a, self.b + other.b)


v1 = Vector(2, 10)
v2 = Vector(5, -2)

v3 = v1 + v2

print str(v3)  # Vector (7, 8)
