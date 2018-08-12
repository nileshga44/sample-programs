#closures - the fact that inner functions remember their enclosing scope 
def outer(x):
    def inner():
        print x
    return inner

p1 = outer(1)
p1()
#p1 = inner()
p2 = outer(10)
p2()
