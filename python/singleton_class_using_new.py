#!/usr/bin/python

# Date: 2018-08-23
#
# Description:
# Implement singleton class.
#
# Approach:
# __new__ magic function is overwritten and checked if object is already present
# or not. If created, old object is returned otherwise new object is created
# and returned.


class MySingleton(object):
  """Implements singleton class."""

  _instance = None

  def __new__(self):
    if not self._instance:
      self._instance = super(MySingleton, self).__new__(self)
      self.value = 10
    return self._instance


obj1 = MySingleton()
print id(obj1), obj1.value

obj2 = MySingleton()
print id(obj2), obj2.value  # Same as obj1.

obj1.value = 20
print obj2.value  # value updated in obj2 also.


# Output:
# ******************
# 140522150478608 10
# 140522150478608 10
# 20
