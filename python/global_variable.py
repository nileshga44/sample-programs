#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# Creates and accesses global variable.


x = 10
print 'At starting, x =  %d' % x

def fun():
    # Use 'global' keyword to refer global variable, otherwise it will be
    # treated as local
    global x
    print 'In fun x =  %d ' % x
    x = 20


fun()
print 'After calling fun(), x = %d' % x


# Output:
# --------------
# At starting, x =  10
# In fun x =  10
# After calling fun(), x = 20
