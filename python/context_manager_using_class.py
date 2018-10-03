#!/usr/bin/python

# Date: 2018-10-03
#
# Description:
# Implement custom context manager using class.
#
# Approach:
# A class having __enter__(), __exit__() methods can be used as context
# managers.
# If __exit__() returns True, it means that exception is handled gracefully
# otherwise raised exception will be thrown to with statement.


class File(object):
  """Custom context manager to open, write and close a file."""

  def __init__(self, filename, mode):
    print ('In __init__()')
    self.file_pointer = open(filename, mode)

  def __enter__(self):
    print ('In __enter__()')
    return self.file_pointer

  def __exit__(self, type, value, traceback):
    print ('In __exit__()')
    self.file_pointer.close()


class FileHandleException(File):
  """Custom context manager to open, write and close a file.

  Here __exit__ method returned True, therefore no exception was raised by the
  with statement.
  """
  def __exit__(self, type, value, traceback):
    print ('In __exit__() of FileHandleException')
    self.file_pointer.close()
    return True


def main():
  print ('***** Test-1 *******')
  with File('/tmp/test.txt', 'w') as file_fp:
    print ('In context manager')
    file_fp.write('Some text data')

  print ('\n***** Test-2 *******')
  with FileHandleException('/tmp/test.txt', 'w') as file_fp:
    print ('In context manager')
    file_fp.undefined_fn()  # Exception will be handled by FileHandleException

  print ('\n***** Test-3 *******')
  with File('/tmp/test.txt', 'w') as file_fp:
    print ('In context manager')
    # Exception will not be handled in File(), will show back track on this
    # statement
    file_fp.undefined_fn()


if __name__ == '__main__':
  main()


# Output:
# ----------------
# ***** Test-1 *******
# In __init__()
# In __enter__()
# In context manager
# In __exit__()
#
# ***** Test-2 *******
# In __init__()
# In __enter__()
# In context manager
# In __exit__() of FileHandleException
#
# ***** Test-3 *******
# In __init__()
# In __enter__()
# In context manager
# In __exit__()
# Traceback (most recent call last):
#   File "context_manager_using_class.py", line 63, in <module>
#     main()
#   File "context_manager_using_class.py", line 59, in main
#     file_fp.undefined_fn()
# AttributeError: 'file' object has no attribute 'undefined_fn'
