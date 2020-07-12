#!/usr/lib/python

# Date: 2020-08-12
#
# Description:
# Memoization using functions

def memoize(f):
    cache = {}
    def _compute(*args):
        print(args)
        if args not in cache:
            cache[args] = f(*args)
        return cache[args]
    return _compute

@memoize
def f1():
    print('In f1')
    return 10

@memoize
def f2(m, n):
    print('In f2')
    return m + n
    
print('Test f1')
print(f1())
print(f1())  # 'In f1' should not be printed

print('\nTest f2')
print(f2(2, 3))
print(f2(4, 5))
print(f2(4, 5))  # 'In f2' for this input should not be printed
