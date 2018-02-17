#!/usr/lib/python

# Date: 2018-02-17
#
# Description:
# Finding nth fibonacci number with and without memoization using recursion.
# Using memoization performance increases drastically.

from datetime import datetime


class Memoize(object):
  """Implements memoize functionality."""

  def __init__(self, f):
    """Initializes dictionary to store factorials which can be used later.
    
    Args:
      f: Reference to called function.
    """
    self.f = f
    self.memo = {}

  def __call__(self, *args):
    """Calls the actual function if output is not stored for a input.
    
    Args:
      args: Tuple of function arguments.
    """
    if not args in self.memo:
      self.memo[args] = self.f(*args)
    return self.memo[args]


@Memoize
def fib_memoized(num):
  if num < 2:
      return num
  else:
      return fib_memoized(num - 1) + fib_memoized(num - 2)

def fib(num):
  if num < 2:
      return num
  else:
      return fib(num - 1) + fib(num - 2)

print datetime.now()
print fib(36)
print datetime.now()
print fib_memoized(36)
print datetime.now()


# Output:
# 2018-02-17 22:19:24.541637
# 14930352
# 2018-02-17 22:19:32.679474
# 14930352
# 2018-02-17 22:19:32.679666

# So to find 36th fibonacci number using recursion it takes 8 seconds and on
# using memoization it provides result in less than a millisecond.
