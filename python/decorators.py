#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# Simple decorator demo.
#
# Note that whenever @some_function occurs some_function gets called with
# arguments as function name on which some_function was written.

from time import sleep


def wrapper(fun):
    print 'Entering wrapper(): ', fun
    def xyz(*args):
        print 'Before function call, arguments are: ', args
        fun(*args)
        print 'After function call'
    print 'Exiting wrapper(): ', xyz
    return xyz

@wrapper
def main(arg1, arg2):
    print 'In main(), Arguments: %d %d' % (arg1, arg2)

print 'Calling main...'
main(1, 2)


# Output:
# ------------------------------------------------------
# Entering wrapper():  <function main at 0x7f628689d848>
# Exiting wrapper():  <function xyz at 0x7f628689d8c0>
# Calling main...
# Before function call, arguments are:  (1, 2)
# In main(), Arguments: 1 2
# After function call
#
# Note that in above traces, decorator function gets called before calling
# main() that is when the program was getting parsed.


print '\nAnother example to show simple decorator flow'
def sleep_decorator(function):
    """
    Limits how fast the function is called. This decorator suspends the flow
    of decorated function by 2 seconds.
    """
    print 'Entering sleep_decorator, arguments: ', function
    def wrapper(*args, **kwargs):
        print 'Waiting for 2 seconds, arguments: ', args, kwargs
        sleep(2)
        return function(*args, **kwargs)
    print 'Exiting sleep_decorator: ', wrapper
    return wrapper


@sleep_decorator
def print_number(num):
    return num

print(print_number(222))

for num in range(1, 6):
    print(print_number(num))


# Output:
# -----------------------------------------------------------------------------
# Another example to show simple decorator flow
# Entering sleep_decorator, arguments:  <function print_number at 0x7f01080fe9b0>
# Exiting sleep_decorator:  <function wrapper at 0x7f01080fea28>
# Waiting for 2 seconds, arguments:  (222,) {}
# 222
# Waiting for 2 seconds, arguments:  (1,) {}
# 1
# Waiting for 2 seconds, arguments:  (2,) {}
# 2
# Waiting for 2 seconds, arguments:  (3,) {}
# 3
# Waiting for 2 seconds, arguments:  (4,) {}
# 4
# Waiting for 2 seconds, arguments:  (5,) {}
# 5
