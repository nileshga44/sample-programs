#!/usr/bin/python

# Date: 2017-xx-xx
#
# Description:
# map, filter, reduce demo.


a  = [i for i in range(0, 11, 1)]
print a

def map1(val):
    return val + 1

def filter1(val):
    return (val % 2 == 0)

def reduce1(val1, val2):
    return (val1 + val2)

b = map(map1, a)
print b

b = filter(filter1, a)
print b

b = reduce(reduce1, a)
print b

# Output:
# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
# [0, 2, 4, 6, 8, 10]
# 55
