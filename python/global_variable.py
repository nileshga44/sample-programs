#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# Creates and accesses global variable.


x = 10
print('At starting, x =  %d' % x)

def change_global_variable():
    # Use 'global' keyword to refer global variable, otherwise it will be
    # treated as local
    global x
    print('In change_global_variable x =  %d ' % x)
    x = 20


change_global_variable()
print('After calling change_global_variable(), x = %d' % x)


# Output:
# --------------
# At starting, x =  10
# In change_global_variable x =  10
# After calling change_global_variable(), x = 20
