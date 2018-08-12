from functools import partial

def f (a,b,c,x):
    return 1000*a + 100*b + 10*c + x

partial_fun = partial(f, 3, 1, 4) #a=3, b=1, c=4 fixed

print partial_fun(5) #x=5 is passed
