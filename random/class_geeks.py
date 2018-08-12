class CSStudent:
    """Class defination"""
    stream = "cse"
    def __init__(self, roll):
        self.roll = roll

a = CSStudent(101)
b = CSStudent(102)

print ("\nAssigned values...")
print (a.stream)
print (b.stream)
print (a.roll)

print ("\na.stream updated to IT...")
a.stream = "IT" #If we try to change class variable using object, a new instance (or non-static) variable for that particular object is created and this variable shadows the class variables. Below is Python program to demonstrate the same.
print (a.stream)
print (b.stream)
print (CSStudent.stream)

print ("\nCSStudent.stream updated to ECE...")
CSStudent.stream = "ECE"
print (a.stream)
print (b.stream)
print (CSStudent.stream)


print ("*********** Data Hiding ************")
class MyClass:
    __hiddenVar = 0 #Hidden variable (start with __)

    def add(self, inc):
        self.__hiddenVar += inc;
        print (self.__hiddenVar)

myObj = MyClass()
myObj.add(2)
myObj.add(5)

#print (myObj.__hiddenVar) - Given error

print (myObj._MyClass__hiddenVar) #Way to access hidden variable

print ("*********** issubclass ************")

class base:
    pass
class derived(base):
    pass

b = base()
d = derived()

print (issubclass(derived, base))
print (issubclass(derived, derived))
print (issubclass(base, derived))
print (issubclass(base, base))

print ("*********** isinstance ************")
print (isinstance(b, base))
print (isinstance(d, base))
print (isinstance(b, derived))
print (isinstance(d, derived))

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
