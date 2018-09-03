class student:
    """A class representing student's attributes"""

    def __init__(self, n, a):
        self.full_name = n
        self.age = a

    def get_age(self):
        print "In get_age of class student [age] : ", self.age

class e_student(student):
    """This is a derived class from studennt"""
    pvt = 0    
    __pvt = 1    #__pvt will not be accessed outside of class it is private member of this class(started with double underscore)
    def __init__(self, n, a, s):
        student.__init__(self, n, a)
        self.section_num = s
    
    def get_age(self):
        print "In get_age of class e_student [age] : ", self.age

b = e_student("Hansraj", 27, 2)
b.get_age()
print b
print b.__doc__
print b.__class__
print b.__module__
print b.__class__.pvt
print b.__class__.__pvt     #__pvt will not be accessed outside of class it is private member of this class(started with double underscore)

#Check how to call base class method that is overrided in derived class
#super(e_student, b).get_age()
