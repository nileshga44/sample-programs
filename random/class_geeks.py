print ("*********** Multiple Inheritance ************")
class base1():
    def __init__(self):
        self.str1 = "Geek1"
        print ("Base1")
class base2():
    def __init__(self):
        self.str2 = "Geek2"
        print ("Base2")

class der(base1, base2):
    def __init__(self):
        base1.__init__(self)
        base2.__init__(self)
        print ("In class der")

    def printStrs(self):
        print (self.str1, self.str2)

d = der()
d.printStrs()

print ("*********** Accesing base class member using class name ************")
class b1():
    def __init__(self, x):
        self.x = x

class d1(b1):
    def __init__(self, x, y):
        b1.x = x
        self.y = y

    def printXY(self):
        print (b1.x, self.y)

d = d1(10, 20)
d.printXY()

print ("*********** Accesing base class member using super() ************")
class b11():
    def __init__(self, x):
        self.x = x

class d11(b11):
    def __init__(self, x, y):
        #b11.x = x
        super(d11, self).__init__(x) #Works in python3 and above
        self.y = y

    def printXY(self):
        print (self.x, self.y)

d = d11(10, 20)
d.printXY()
