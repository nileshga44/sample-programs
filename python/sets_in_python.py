#!/usr/bin/python

# Date: 2018-10-16
#
# Description:
# Set, frozenset declaration and operations on them.


# Set demo
normal_set = set(['a', 'b', 'c'])
print (normal_set)  # set(['a', 'c', 'b'])

normal_set.add('d')
normal_set.add('d')
print (normal_set)  # set(['a', 'c', 'b', 'd'])

# Frozen set demo
frozen_set = frozenset(['e', 'f', 'g'])
print (frozen_set)  # frozenset(['e', 'g', 'f'])

# We can't update frozen set so add method frozenset doesn't work
# frozen_set.add('h')


A = {'a', 'c', 'd'}
B = {'c', 'd', 2}
C = {1, 2, 3}

# Union
print('A U B =', A | B)  # ('A U B =', set(['a', 'c', 'd', 2]))
print('A U B U C =', A | B | C)  # ('A U B U C =', set(['a', 1, 'c', 3, 'd', 2]))

print('A U B =', A.union(B))  # ('A U B =', set(['a', 'c', 'd', 2]))
print('A U B U C =', A.union(B, C))  # ('A U B U C =', set(['a', 1, 'c', 3, 'd', 2]))

# Intersection
print (A.intersection(B))  # set(['c', 'd'])
print (A.intersection(B, C))  # set([])
