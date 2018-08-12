def wrapper(fun):
    def xyz(*args):
        print "Before..."
        fun(*args)
        print "After.."
    return xyz

@wrapper
def main(arg1, arg2):
    print "In main() %d %d"% (arg1, arg2)

#wrapper(main)
main(1, 2)


print "******************************************************"

def f1(a1, a2):
    def f2(fun):
        def f3(*args):
            print "a1, a2 is %d %d" % (a1, a2)
            fun(*args)
        return f3
    return f2

@f1(1, 2)
def myFun(c1, c2):
    print "c1, c2 are %d %d" % (c1, c2)

myFun(100, 200)
