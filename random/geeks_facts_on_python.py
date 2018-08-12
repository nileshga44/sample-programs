import this # prints poem by Tim Peters

print ("\nUnpakcing of dictionary, passsed values not keys")
def point (x,y):
    print (x,y)

foo_tup = (3, 4)
foo_list = (30, 40)
foo_dict = {'y': 400, 'x': 300}
point (*foo_tup)
point (*foo_list)
point (**foo_dict)

print ("\nChanged comparision...")
i = 5
ans = 1 < i < 10
print (ans)

ans = 10 > i <=9
print (ans)

ans = 5 == i
print (ans)

print ("\nInfinity in python...")
p_infinity = float('Inf')
print (p_infinity)

if 99999999999999999999999999 > p_infinity:
    print ("The number is greater than infinity")
else:
    print ("Infinity is greateset")

n_infinity = float('-Inf')
if -9999999999999999999999999 < n_infinity:
    print ("Numbber is less than negative infinity")
else:
    print ("Negative infinity is least")

print ("\nSlicing operator...")
a = [1,2,3,4,5]
print (a[0:2])
print (a[0:-1])
print (a[::-1])
print (a[::-2])
