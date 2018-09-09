#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# How to create and use generator function.


print 'Simple generator function'
# yield is must for a function to become generator.
def simpleGeneratorFunction():
    yield 1
    yield 2
    yield 3

print 'Access using loop: ',
for item in simpleGeneratorFunction():
    print item,

x = simpleGeneratorFunction()
print '\nAccess using next(): ',
print x.next(),
print x.next(),
print x.next(),
# print x.next() # raises 'StopIteration' exception.


print '\n\nFibonacci generator function'
def fib(limit):
    a, b = 0, 1
    while a < limit:
        yield a
        a, b = b, a + b


print 'Access using for loop: ',
for n in fib(8):
    print n,

x = fib(6)
print '\nAccess using next(): ',
print x.next(),
print x.next(),
print x.next(),
print x.next(),
print x.next(),
print x.next(),

# Output:
# ------------------------
# Simple generator function
# Access using loop:  1 2 3
# Access using next():  1 2 3
#
# Fibonacci generator function
# Access using for loop:  0 1 1 2 3 5
# Access using next():  0 1 1 2 3 5
