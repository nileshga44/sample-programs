#yield is must for a function to become generator
def simpleGeneratorFunction():
    yield 1
    yield 2
    yield 3

print "\nAccess using loop :"
for item in simpleGeneratorFunction():
    print item

x = simpleGeneratorFunction()
print "\nAccess using next() :"
print x.next()
print x.next()
print x.next()
#print x.next() #Gives signal - StopIteration

print "\nFibonacci generator funciton..."
def fib(limit):
    a, b = 0, 1
    while a < limit:
        yield a
        a, b = b, a + b

print "\nUsing for loop..."
for n in fib(8):
    print n

x = fib(6)
print "\nUsing next()..."
print x.next()
print x.next()
print x.next()
print x.next()
print x.next()
print x.next()
