#!/usr/bin/python

# Date: 2019-01-22
#
# Description:
# heapq examples - Python heapq module is used to create & maintain *MIN HEAP*.
# For MAX HEAP we need to negative the elements in iterable and heapify again.

import heapq

li = [10, 2, 3, 5, 7]

heapq.heapify(li)
print li  # [2, 5, 3, 10, 7]

heapq.heappush(li, 1)
print li  # [1, 5, 2, 10, 7, 3]

heapq.heappop(li)
print li  # [2, 5, 3, 10, 7]
