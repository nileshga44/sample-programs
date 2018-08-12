#!/usr/bin/python
'''while and for loop can have an optional else block, else block executes if loop executes normally it does not breaks'''
a = []
n = input ("Enter number of elements : ")
for i in xrange (n):
    x = input ("Enter value of a[%d] : " % i)
    a.append(x)

for i in xrange (n):
    if 0 > a[i]:
        break
else:
    print "All values entered were not negative !!"
