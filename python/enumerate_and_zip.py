#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# Enumerate and zip() usage.

lis = [10, 20, 30, 40, 50]

print ('Enumerate demo...')
for item in enumerate(lis):
    print item

print ('\nChanging starting index to 1')
for item in enumerate(lis, start = 1):
    print item

print ('\nZip() demo...')
cars = ['Aston', 'Audi', 'McLaren']
accessories = ['GPS', 'Car Repair Kit', 'Dolby sound kit']
for c, a in zip(cars, accessories):
    print (c, a)

print ('\nUnzip() demo...')
data = [
    ('Aston', 'GPS'),
    ('Audi', 'Car Repair Kit'),
    ('McLaren', 'Dolby sound kit')
]

for item in zip(*data):
    print (item)


print ('\n\nTranspose of a matrix')
print ('\nOriginal matrix')
mat = [
    (1, 2, 3),
    (4, 5, 6),
    (7, 8, 9),
    (10, 11, 12)
]
for row in mat:
    print (row)

print ('\nTranspose of a matrix using zip()')
t_matrix = zip(*mat)
for row in t_matrix:
    print (row)

print ('\nTranspose of matrix using nested list comprehensions')
                  # For columns in new mat  # For rows in new mat - 3
rez = [[mat[j][i] for j in range(len(mat))] for i in range(len(mat[0]))]
for row in rez:
    print(row)

# Output:
# ----------------------------------------------
# Enumerate demo...
# (0, 10)
# (1, 20)
# (2, 30)
# (3, 40)
# (4, 50)
#
# Changing starting index to 1
# (1, 10)
# (2, 20)
# (3, 30)
# (4, 40)
# (5, 50)
#
# Zip() demo...
# ('Aston', 'GPS')
# ('Audi', 'Car Repair Kit')
# ('McLaren', 'Dolby sound kit')
#
# Unzip() demo...
# ('Aston', 'Audi', 'McLaren')
# ('GPS', 'Car Repair Kit', 'Dolby sound kit')
#
#
# Transpose of a matrix
#
# Original matrix
# (1, 2, 3)
# (4, 5, 6)
# (7, 8, 9)
# (10, 11, 12)
#
# Transpose of a matrix using zip()
# (1, 4, 7, 10)
# (2, 5, 8, 11)
# (3, 6, 9, 12)
#
# Transpose of matrix using nested list comprehensions
# [1, 4, 7, 10]
# [2, 5, 8, 11]
# [3, 6, 9, 12]
