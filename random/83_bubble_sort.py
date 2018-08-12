#!/usr/bin/python

#Bubble sort algo - Compares adjacent elements and pushes to it's required extreme
                  #Here while sorting in ascending order largest element reaches at last place after first iteration
a = []
n = input ("Enter number of elements : ")
for i in range (n):
    x = input ("Enter value of a[%d] : " % i)
    a.append(x)

print "Entered values are :"
for i in range (n):
    print "a[%d] : %d"% (i, a[i])

swap_flag = False;
for i in range(n):
    for j in range(0, n - 1 - i, 1):
        if (a[j] > a[j + 1]):
            #Swap
            a[j], a[j+1] = a[j+1], a[j]
            swap_flag = True;
    print "-"*40
    print "Values after pass - %d" % i
    for i in range (n):
        print "a[%d] : %d"% (i, a[i])
    if False == swap_flag:
        break
