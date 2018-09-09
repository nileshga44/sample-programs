#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# Lambda demo in python.

lis = range(10)
print (lis)

print ('\nlamnda demo')
sq = (lambda x : x*2)(5)
print (sq)

sq = (lambda x, y : x*y)(5, 6)
print (sq)

print ('\nCombination demo...')
print ('Find the number which are odd in list and multiply by 5')
sq = map(lambda v : v*5, filter(lambda x : x%2, lis))
print (sq)


# Output:
# -----------------------------------------------------
# [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
#
# lamnda demo
# 10
# 30
#
# Combination demo...
# Find the number which are odd in list and multiply by 5
# [5, 15, 25, 35, 45]
