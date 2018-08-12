class student:
    """A class representing student's attributes"""

    def __init__(self, n, a):
        self.full_name = n
        self.age = a

    def get_age(self):
        return self.age

b = student("Hansraj", 27)
print b.get_age()
print b.full_name
print b.age
b.age = 50
print b.age
print b.get_age()

print "getattr function..."
print getattr(b, "full_name")
print getattr(b, "get_age")
print getattr(b, "get_age")()

print "hasattr function..."
print hasattr(b, "age")
print hasattr(b, "get_age")
print hasattr(b, "get_age123")
