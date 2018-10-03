#!/usr/bin/python

# Date: 2018-10-03
#
# Description:
# Implement custom context manager using contextlib.
#
# Approach:
# Python provides contextlib.contextmanager decorator function to make any
# generator as context manager.
# The function being decorated must return a generator-iterator when called.
# This iterator must yield exactly one value, which will be bound to the
# targets in the with statement’s as clause, if any.
#
# Reference:
# http://book.pythontips.com/en/latest/context_managers.html#
# https://docs.python.org/2/library/contextlib.html


import contextlib


@contextlib.contextmanager
def open_file(filename):
  print ('Entering open_file()')
  fp = open(filename, 'w')
  yield fp
  fp.close()
  print ('Exiting open_file()')


def main():
  print ('***** Test-1 *******')
  with open_file('/tmp/test.txt') as file_fp:
    print ('In context manager')
    file_fp.write('Some text data')

  print ('\n\n***** Test-1 *******')
  with open_file('/tmp/test.txt') as file_fp:
    print ('In context manager')
    file_fp.undefined_fn('Some text data')


if __name__ == '__main__':
  main()


# Output:
# ----------------
# ***** Test-1 *******
# Entering open_file()
# In context manager
# Exiting open_file()
#
#
# ***** Test-1 *******
# Entering open_file()
# In context manager
# Traceback (most recent call last):
#   File "python/context_manager_using_contextlib.py", line 35, in <module>
#     main()
#   File "python/context_manager_using_contextlib.py", line 32, in main
#     file_fp.undefined_fn('Some text data')
# AttributeError: 'file' object has no attribute 'undefined_fn'
