def fun1(x, y):
    print "Values are %d and %d" % (x,y)

def fun2(fun_name):
    return fun_name(3,4)

f = fun1
fun2(f)
