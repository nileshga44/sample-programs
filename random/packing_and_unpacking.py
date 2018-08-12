#!/usr/bin/python
print ("\nPassing variable number of args...")
def var_args (arg1, *others):
    print ("arg1 : ",arg1)
    print ("others : ",others)

var_args (1, 'two', 3, 4, 'five')

#Packing
def fun(a, b):
    print ("a = ",a)
    print ("b = ",b)

print ("Pakcing demo...")
x = [1,2]
#fun(x) -> Does not work 
fun(*x) #Works, *x unpacks list and passes each element from list as invidual arguments

t = (5,6)
fun(*t)


#Unpacking
def unpack(*args):
    print (args)

print ("\nUnpakcing demo...")
x = [1,2,3]
unpack(x)

x = (5,6,7,8)
unpack(x)

unpack(10,20,30,40,50,60)

#Packing and Unpacking
def fun1(a, b, c):
    print ("a = %s, b = %s, c = %s" % (a, b, c))

def fun2(*args):
    args = list(args)
    args[0] = "updated args[0]"
    args[1] = "updated args[1]"
    fun1(*args)

print ("\nPacking and unpacking demo...")
fun2("hello", "hi", "welcome")

#Unpacking dictionary with **
def dFun1(a, b, c):
    print ("a = %s, b = %s, c = %s" % (a, b, c))

print ("Unpacking dictionary...")
d = {"a" : 1, "b" : 2, "c" : 3}
dFun1(**d)

#Packing dictionary - **

def dFun(**kwargs):
    print (type(kwargs))
    for key in kwargs.keys():
        print ("key = %s value = %s\n" % (key, kwargs[key]))

print ("Packing dictionary...")
dFun(name="geeks", ID="101", language="Python") # It will be created as dictionary in calling function

print ("\nPassing both args and kwags..args should be passed before")

def cheeseshop(kind, *arguments, **keywords):
    print ("\nCheese of Kind : ", kind)
    for line in arguments:
        print (line)
    print ("-"*30)
    keys = sorted(keywords.keys())
    for kw in keys:
        print (kw, ":", keywords[kw])

cheeseshop("Burger", "It's very funny", "It's really very very funny",
                    shopkeeper="Micheal",
                    client="John",
                    sketch="cheese shop sketch")
