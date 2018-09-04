#!/usr/bin/python

# Date: 2018-09-03
#
# Description:
# Create, access and update class/static variable.


class CSStudent:
    """Demo to access and update class variable."""

    stream = "CSE"  # Class/static variable.
    def __init__(self, roll):
        self.roll = roll

a = CSStudent(101)
b = CSStudent(102)

print ("\nAssigned values...")
print (a.stream)  # CSE
print (b.stream)  # CSE
print (a.roll)  # 101
print (b.roll)  # 102

print ("\na.stream updated to IT...")

# If we try to change class variable using object, a new instance or
# non-static variable for that particular object is created and this variable
# shadows the class variables. This update will not be reflected to other
# objects.
a.stream = "IT"
print (a.stream)  # IT
print (b.stream)  # CSE
print (CSStudent.stream)  # CSE

# When class variable is updated using class name, it will be reflected to all
# objects but not for those who has already shadowed or created a variable with
# same name as class variable like object 'a'.
print ("\nCSStudent.stream updated to ECE...")
CSStudent.stream = "ECE"
print (a.stream)  # IT
print (b.stream)  # ECE
print (CSStudent.stream)  # ECE

print ('\n\nAnother example...')
class Counter:
    """
    A demonstration of class attributes(Common across all class instances)
    and data attributes(per instance).
    """
    overall_count = 0  # Class attribute

    def __init__(self):
        self.my_total = 0  # Data attribute

    def increment(self):
        self.my_total = self.my_total + 1
        Counter.overall_count = Counter.overall_count + 1

a = Counter()
b = Counter()

print (a.my_total)  # 0
print (b.my_total)  # 0
print (a.__class__.overall_count)  # 0
print (b.__class__.overall_count)  # 0

a.increment()
b.increment()
b.increment()

print (a.my_total)  # 1
print (b.my_total)  # 2
print (a.__class__.overall_count)  # 3
print (b.__class__.overall_count)  # 3

# Class attribute can also be accessed using object and class name.
print (a.overall_count)  # 3
print (b.overall_count)  # 3
print (Counter.overall_count)  # 3
