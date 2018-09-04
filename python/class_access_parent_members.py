#!/usr/bin/python3

# Date: 2018-09-04
#
# Description:
# Access methods of parents class in derived class.
# Usage of super() in python3.


class Base1():
    def __init__(self, x):
        self.x = x

class Derived1(Base1):
    def __init__(self, x, y):
        Base1.x = x
        self.y = y

    def printXY(self):
        print (Base1.x, self.y)

d = Derived1(10, 20)
d.printXY()


print ('\nAnother example, usage of super()')
class Base2():
    def __init__(self, x):
        self.x = x

class Derived2(Base2):
    def __init__(self, x, y):
        # We can assign 'x' using class name also, as done above.
        # Base2.x = x

        # This also works.
        # Base2.__init__(self, x)
        print ('Calling parent class __init__ using super()')
        super(Derived2, self).__init__(x)  # Works in python3 and above
        self.y = y

    def printXY(self):
        print (self.x, self.y)


d = Derived2(50, 100)
d.printXY()


# Output:
# ----------------------------------------
# 10 20
#
# Another example, usage of super()
# Calling parent class __init__ using super()
# 50 100
