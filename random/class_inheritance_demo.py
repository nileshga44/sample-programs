class abc(object):
  y = 23

  def __init__(self):
    print ("In first __init__()")

  def __init__(self, name, age):
    self.name = name
    self.age = age
    self.__class__.y += 1
    print ("In second __init__()")

  def __call__(self, name):
    print ("In __call__")

x = abc("hans", 27)
print x.__class__.y
name = getattr(x, "name")
print name
print x.__class__.y
print abc.y

x = abc("hans", 27)
x("hello")
print ("****************************************")
abc("xyz", 10)
abc("ioio", 110)("low")
#x = abc()

print ("****************************************")
class d(abc):
  def __init__(self):
    abc.__init__(self, "kkkk", 10)
    super(d, self).__init__("kkkk", 10)

d1 = d()
print (d1.name)
print (d1.age)

print ("*********** class without constructor *****************************")
class xyz:
  def fun(self, year):
    print ("In fun..")
    self.year = year

obj = xyz()
obj.fun(10)
print (obj.year)
