def square(x):
    return (x**2)

def filter_fn(x):
    return x%2

def reduce_fn(x, y):
    return x+y

lis = range(10)
print ("lis = ",lis)

print ("MAP DEMO...")
sq = map(square, lis)
print ("sq = ",sq)

print ("FILTER DEMO...")
sq = filter(filter_fn, lis)
print ("sq = ",sq)

print ("REDUCE DEMO...")
sq = reduce(reduce_fn, lis)
print ("sq = ",sq)

print ("LAMBDA DEMO...")
sq = (lambda x : x*2)(5)
print ("sq = ",sq)

sq = (lambda x, y : x*y)(5, 6)
print ("sq = ",sq)

print ("COMBINATION DEMO...")
print ("Problem : Find the number which are odd in list and multiply by 5")
sq = map(lambda v : v*5, filter(lambda x : x%2, lis))
print ("sq = ",sq)

print ("Using list comprehensions")
sq = [x*5 for x in lis if x%2]
print ("sq = ",sq)
