class counter:
    """A demonstration of class attributes(Common across all class instances) 
    and data attributes(per instance)"""
    overall_count = 0 #Class attribute
    def __init__(self):
        self.my_total = 0 #Data attribute
    def increment(self):
        self.my_total = self.my_total + 1
        counter.overall_count = counter.overall_count + 1

a = counter()
b = counter()

print a.my_total
print b.my_total
print a.__class__.overall_count
print b.__class__.overall_count

a.increment()
b.increment()
b.increment()

print a.my_total
print b.my_total
print a.__class__.overall_count
print b.__class__.overall_count
