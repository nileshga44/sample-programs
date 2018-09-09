#!/usr/bin/python

# Date: 2018-09-09
#
# Description:
# Decorator with arguments.
#
# Wile decorating a function, we can pass arguments to decorator function also.


def decoratorFunctionWithArguments(arg1, arg2, arg3):
    print 'Entering decoratorFunctionWithArguments, arguments: ', (
      arg1, arg2, arg3)
    def wrapper_1(function):
        print 'Entering wrapper_1, function: ', function
        def wrapper_2(*args):
            print 'Entering wrapper_2, arguments: ', args
            function(*args)
            print 'Exiting wrapper_2'
        print 'Exiting wrapper_1'
        return wrapper_2
    print 'Exiting decoratorFunctionWithArguments'
    return wrapper_1

@decoratorFunctionWithArguments(1, 2, 3)
def sayHello(a1, a2, a3, a4):
    print 'In sayHello, arguments: ', (a1, a2, a3, a4)

print 'Calling sayHello()...'
sayHello('say', 'hello', 'argument', 'list')
print '\nAfter first call to sayHello()'

sayHello('a', 'different', 'set of', 'arguments')
print 'After second call to sayHello()'


# Output:
# --------------------------------------------------------------------------
# Entering decoratorFunctionWithArguments, arguments:  (1, 2, 3)
# Exiting decoratorFunctionWithArguments
# Entering wrapper_1, function:  <function sayHello at 0x7f424a5ff8c0>
# Exiting wrapper_1
# Calling sayHello()...
# Entering wrapper_2, arguments:  ('say', 'hello', 'argument', 'list')
# In sayHello, arguments:  ('say', 'hello', 'argument', 'list')
# Exiting wrapper_2
#
# After first call to sayHello()
# Entering wrapper_2, arguments:  ('a', 'different', 'set of', 'arguments')
# In sayHello, arguments:  ('a', 'different', 'set of', 'arguments')
# Exiting wrapper_2
# After second call to sayHello()


print '\n\nAnother example of decorators with arguments'
def f1(a1, a2):
    def f2(fun):
        def f3(*args):
            print 'In f3: a1, a2 are %d %d' % (a1, a2)
            fun(*args)
        return f3
    return f2


@f1(1, 2)
def myFun(c1, c2):
    print 'In myFun(): c1, c2 are %d %d' % (c1, c2)

myFun(100, 200)

# Output:
# ----------------
# Another example of decorators with arguments
# In f3: a1, a2 are 1 2
# In myFun(): c1, c2 are 100 200
