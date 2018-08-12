class complex:
    def __init__(self, real, img):
        self.real = real
        self.img = img
    def __repr__(self):
        return "Rational(%s, %s)" % (self.real, self.img)
    def __str__(self):
        return "%s + i%s" % (self.real, self.img)

t = complex(10, 20)
print str(t)
print repr(t)
