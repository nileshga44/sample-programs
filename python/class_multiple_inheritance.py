#!/usr/bin/python

# Date: 2018-09-04
#
# Description:
# Multiple inheritance and calling parent's method. Note that 'self' is passed
# while calling parent's class method from derived class method.


class Base1():
    def __init__(self):
        self.str1 = "Geek1"
        print ("In Base1")

class Base2():
    def __init__(self):
        self.str2 = "Geek2"
        print ("In Base2")

class Derived(Base1, Base2):
    def __init__(self):
        Base1.__init__(self)
        Base2.__init__(self)
        print ("In Derived")

    def print_strs(self):
        print (self.str1, self.str2)

d = Derived()
d.print_strs()


# Output:
# ------------------
# In Base1
# In Base2
# In Derived
# ('Geek1', 'Geek2')

