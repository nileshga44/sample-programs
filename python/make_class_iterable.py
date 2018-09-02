#!/usr/bin/python

# Date: 2018-09-02
#
# Description:
# Example to make an user defined class iterable.

class Test(object):
 
    # Constructor
    def __init__(self, limit):
        print ('Calling __init__()...')
        self.limit = limit
 
    # Called when iteration is initialized
    def __iter__(self):
        """
        This is called when object of this class ready for iteration, when for
        statement is used.
        """
        print ('Calling __iter__()...')
        self.x = 10
        return self
 
    # To move to next element. In Python 3,
    # we should replace next with __next__
    def next(self):
        print ('Calling next()...')
 
        # Store current value ofx
        x = self.x
 
        # Stop iteration if limit is reached
        if x > self.limit:
            raise StopIteration
 
        # Else increment and return old value
        self.x = x + 1;
        return x


# Prints numbers from 10 to 15
test = Test(15)
print 'Object created...'

for i in test:  # Here __iter__() will be called.
    print(i)
