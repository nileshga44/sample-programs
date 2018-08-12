class X():
  def __init__(self):
    print ("In __init__() of X")
  
  def fun1(self):
    print ("In fun1() of X")

  def fun1(self, a):
    print ("In fun1() of X", a)

a = X()
#a.fun1() - Gives error "TypeError: fun1() takes exactly 2 arguments (1 given)"
a.fun1(1) #With arg 'a' is called

class Y(X):
  def __init__(self):
    print ("In __init__() of Y")

  def fun1(self):
    print ("In fun1() of Y")

b = Y()
b.fun1() #Y's fun1() is called
