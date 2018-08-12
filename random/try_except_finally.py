#!/usr/bin/python

print "**************** finally block in exception handling *************"
def finally_demo():
                n = 5
                a = [1, 2, 'er', 3.5, 4]
                nums = []
                not_nums = []
                for i in xrange (n):
                    try:
                        n = float (a[i])
                        nums.append(n)
                    except ValueError, msg:
                        not_nums.append(str(msg))
                    finally:
                        print "Finally can be added like this"

                print "Numbers are : ", nums
                print "Non-Numbers :",not_nums

finally_demo()

print "**************** else block in exceptin handling *************"
def else_in_exception_handling(a, b):
    try:
        c = (a + b)/(a - b)
    except Exception, msg:
        print msg
    else: #Executes when try block doesnot raise any exception
        print (c)

else_in_exception_handling(2,2)
else_in_exception_handling(3,2)
else_in_exception_handling(2,3)
    
print "**************** raising an exception *************"
def raise_exception(num, deno):
    try:
        if (1 == deno):
            raise ValueError ("Denominator is 1, no divion operation required")
        else:
            print (num/deno)
    except ValueError, msg:
        print msg

raise_exception(2,1)
raise_exception(2,2)
