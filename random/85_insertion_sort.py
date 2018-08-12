#!/usr/bin/python

#Insertion sort - It inserts every element at correct place by shifting all the elements to right

a = []
n = input ("Enter number of elements : ")
for i in range (n):
    x = input ("Enter value of a[%d] : " % i)
    a.append(x)

print "Entered values are :"
for i in range (n):
    print "a[%d] : %d"% (i, a[i])

for i in range (1, n):
    key = a[i]
    j = i - 1
    while ((j >= 0) and (a[j] > key)):
        a[j + 1] = a[j]
        j = j - 1
    a[j + 1] = key
    print "-"*40
    print "Values after pass - %d" % i
    for i in range (n):
        print "a[%d] : %d"% (i, a[i])
