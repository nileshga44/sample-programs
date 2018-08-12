class A(object):
    def foo(self,x):
        print "executing foo(%s,%s)"%(self,x)

    @classmethod
    def class_foo(cls,x):
        print "executing class_foo of A(%s,%s)"%(cls,x)

    @staticmethod
    def static_foo(x):
        print "executing static_foo(%s)"%x

class B(A):
    @classmethod
    def class_foo(cls,x):
        print "executing class_foo of B(%s,%s)"%(cls,x)

    def xyz(self):
      print "In xyz of class B..."

A.class_foo(1)
B.class_foo(1)
