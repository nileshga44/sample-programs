#!/usr/bin/python

# Date: 2018-09-03
#
# Description:
# Data hiding, private variables, name mangling demo.


class MyClass:
    __hiddenVar = 0  # Double underscore to indicate private variables.

    def add(self, inc):
        self.__hiddenVar += inc;
        print (self.__hiddenVar)


my_obj = MyClass()
my_obj.add(2)  # 2
my_obj.add(5)  # 7

# Below line will throw error: AttributeError: MyClass instance has no
# attribute '__hiddenVar'
# print (my_obj.__hiddenVar)

# Way to access hidden variable.
print (my_obj._MyClass__hiddenVar)  # 7

# We can see how name mangling is done, private variable __hiddenVar is
# converted to _MyClass__hiddenVar.
print dir(my_obj)  # ['_MyClass__hiddenVar', '__doc__', '__module__', 'add']
