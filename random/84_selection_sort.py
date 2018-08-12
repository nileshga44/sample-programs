#!/usr/bin/python

#Selection sort - Finds/selects the minimum element from the remaining array and inserts at the end of sorted sub-array
                  #while sorting in ascending order minimum element reaches at first place after first iteration

a = []
n = input ("Enter number of elements : ")
for i in range (n):
    x = input ("Enter value of a[%d] : " % i)
    a.append(x)

print "Entered values are :"
for i in range (n):
    print "a[%d] : %d"% (i, a[i])

for i in range(n):
    min_idx = i
    for j in range(i + 1, n):
        if (a[i] > a[j]):
            min_idx = j;
    a[i], a[min_idx] = a[min_idx], a[i]
    print "-"*40
    print "Values after pass - %d" % i
    for i in range (n):
        print "a[%d] : %d"% (i, a[i])
