#!/usr/bin/python

# Date: 2018-10-27
#
# Description:
# Basic operations in numpy python library

import numpy as np
import sys
import time

a = np.array([1, 2, 3])  # Create 1-D array
print a  # [1, 2, 3]

a = np.array([(1, 2, 3), (4, 5, 6)])  # Create 2-D array
print a
# [[1, 2, 3]
#  [4, 5, 6]]


## np arrays are memory efficient
S = range(1000)
print sys.getsizeof(S[0])*len(S)  # 24000

D = np.arange(1000)
print D.size*D.itemsize  # 8000


## np are faster than lists 
SIZE = 1000000

L1 = range(SIZE)
L2 = range(SIZE)

start = time.time()

res = [x + y for x, y in zip(L1, L2)]

print (time.time() - start) * 1000  # 459.39207077

A1 = np.arange(SIZE)
A2 = np.arange(SIZE)

start = time.time()
res = A1 + A2

print (time.time() - start) * 1000  # 15.5050754547


## np array operations
a = np.array([1, 2, 3])
print a.ndim  # 1, Number of dimensions in array

a = np.array([(1, 2, 3), (4, 5, 6)])
print a.ndim  # 2, Number of dimensions in array

print a.itemsize  # 8, each element occupies 8 bytes
print a.dtype  # int64, Data type of variables stored in array

print a.size  # 6, Number of elements in array
print a.shape  # (2, 3), 2 rows and 3 columns in array

a = a.reshape(3, 2)  # Converts a to 3 rows and 2 columns
print a
# [[1 2]
#  [3 4]
#  [5 6]]
print a.shape  # (3, 2)


## np array slicing
a = np.array([(1, 2, 3), (4, 5, 6), (7, 8, 9), (10, 11, 12)])
print a[0, 1]  # 2, Give element at 0th row and first column, same as a[0][1]

print a[0:2, 1]  # [2, 5], Give elements having row 0 to 1 and column 1
print a[0:, 2]  # [3, 6, 9, 12], Give 2nd element from each row starting 0


## linespacing
# Give 5 equally spaced values between 1 to 3, both inclusive
print np.linspace(1, 3, 5)  # [1.  1.5 2.  2.5 3. ]


## min, max, sum
print a.min()  # 1
print a.max()  # 12
print a.sum()  # 78


## Axis
a = np.array([(1, 2, 3), (4, 5, 6)])
print a.sum(axis=0)  # [5, 7, 9] = [1+4, 2+5, 3+6]
print a.sum(axis=1)  # [6, 15] = [1+2+3, 4+5+6]


## Square root and standard deviation
print np.sqrt(a)
# [[1.         1.41421356 1.73205081]
#  [2.         2.23606798 2.44948974]]

# Standard deviation is how much each element varies from mean of all elements
print np.std(a)  # 1.707825127659933, standard deviation


## np array arithmetic operations, works on each element and gives new array
a = np.array([(1, 2, 3), (4, 5, 6)])
b = np.array([(1, 2, 3), (4, 5, 6)])
print a + b
print a - b
print a * b
print a / b

# [[ 2  4  6]
#  [ 8 10 12]]
# [[0 0 0]
#  [0 0 0]]
# [[ 1  4  9]
#  [16 25 36]]
# [[1 1 1]
#  [1 1 1]]


## In python lists, + operator creates a new list but np arrays adds all array
# elements. To create a new array, we can use vertical or horizontal stacking
a = np.array([(1, 2, 3), (4, 5, 6)])
b = np.array([(7, 8, 9), (10, 11, 12)])
print np.vstack((a, b))  # Stacks elements of a and b verically
# [[ 1  2  3]
#  [ 4  5  6]
#  [ 7  8  9]
#  [10 11 12]]

print np.hstack((a, b))  # Stacks elements of a and b horizontally
# [[ 1  2  3  7  8  9]
#  [ 4  5  6 10 11 12]]

print a.ravel()  # [1 2 3 4 5 6], convert 2-d to 1-d array


## sin and cosine
x = np.arange(0, 3*np.pi, 0.1)  # Angles in x-axis
y = np.sin(x)
print y  # Array with all sin() values

y = np.cos(x)
print y  # Array with all cosine values
print np.tan(x)  # Array with all tan values


## Exponential and log
a = np.array([1, 2, 3])
print np.exp(a)  # [ 2.71828183  7.3890561  20.08553692]

print np.log(a)  # [0.  0.69314718 1.09861229], Natural log - base e

print np.log10(a)  # [0.         0.30103    0.47712125]

print np.log2(a)  # [0.        1.        1.5849625]
