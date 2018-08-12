class Person(object): #Important to inherit from object to work with property

  def __init__(self, name):
    print ("__init__")
    self._name = name

  @property
  def name(self):
    print ("getName")
    return self._name

  @name.setter
  def name(self, value):
    print ("setName")
    self._name = value

  @name.deleter
  def name(self):
    print ("delName")
    del self._name

p = Person('hans')
p.name
p.name = 'hansraj'
print (p._name)
del p.name


print ("###########Using property function################")
#property(fget=None, fset=None, fdel=None, doc=None)

class Person1(object): #Important to inherit from object to work with property

  def __init__(self, name):
    print ("__init__")
    self._name = name

  def getName(self):
    print ("getName")
    return self._name

  def setName(self, value):
    print ("setName")
    self._name = value

  def delName(self):
    print ("delName")
    del self._name

  name = property(getName, setName, delName, 'property...')

p = Person1('hans')
p.name
p.name = 'hansraj'
print (p._name)
del p.name

