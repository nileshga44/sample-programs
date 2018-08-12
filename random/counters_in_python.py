from collections import Counter

print "\nWAYS TO GET CONT..."
print Counter(['B','B','A','B','C','A','B','B','A','C'])
print Counter({'A' : 3, 'B' : 5, 'C' : 2})
print Counter(A=3, B=5, C=2)

print "\nUPDATING COUNT..."
coun = Counter()
print coun

data = [1,2,3,1,2,3,4,5,4,3]
coun.update(data)
print coun

coun.update([1,2,3,1,2,3])
print coun

print "\nSUBSTRACTING COUNT..."
c1 = Counter(A=4, B=3, C=10)
c2 = Counter(A=10, B=3, C=4)
print c1
print c2
c1.subtract(c2) #c1 - c2
print "\nAFTER SUBTRACT..."
print c1
print c2

print "\nCOUNTING LIST ELEMENTS..."
z = ['blue', 'red', 'blue', 'yellow', 'blue', 'red']
print Counter(z)

print "\nCounter used as dictionary..."
z = ['blue', 'red', 'blue', 'yellow', 'blue', 'red']
colour_count = Counter(z)
print colour_count

colour = ['blue', 'red', 'yellow', 'green']
for clr in colour:
    print (clr, colour_count[clr]) # don't crash if key is not present, shows count as 0

print "\nelements() in Counter.."
coun = Counter(a=1, b=2, c=3)
print coun
print list(coun.elements())

print "\nmost_common() in Conter..."
coun = Counter(a=1, b=2, c=3, d=120, e=1, f=219)
print coun
for letter, count in coun.most_common(3):
    print letter, count
