x = 10
print "x =  ", x
def fun():
    global x #to refer to global var, otherwise it will be treated as local
    print "In fun x =  ", x
    x = 20
fun()
print "x = ", x
