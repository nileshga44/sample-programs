import array

arr = array.array('i', [1,2,3])
print ("\nCreated an array...")
for i in range(0, 3):
    print (arr[i])

arr.append(4)
print ("\nAfter appending 4...")
#arr.append('4') -> Gives error, An integer is required
for i in range(0, 4):
    print (arr[i])

arr.insert(2, 5)
print ("\nAfter inserting (2, 5)...")
for i in range(0, 5):
    print (arr[i])

arr.pop()
print ("\nAfter pop()...")
for i in range(0, 4):
    print (arr[i])

arr.remove(1)
print ("\nAfter revove()...")
for i in range(0, 3):
    print (arr[i])

print ("\nIndex of 2 is...")
print (arr[2])

arr.reverse()
print ("\nAfter reverse()...")
for i in range(0, 3):
    print (arr[i])

print ("\narray is : ",arr)
print ("\ntypecode is : ",arr.typecode)
print ("\nitemsize is : ",arr.itemsize)
print ("\nbuffer_info() is : ",arr.buffer_info())
arr.append(4)
arr.append(4)
print ("Count of 4 is : ", arr.count(4))

arr2 = array.array('i', [10,20])
arr.extend(arr2)
print ("\nAfter extend : ", arr)

lis = [50,60]
arr.fromlist(lis)
print ("After fromlist : ",arr)

lis2 = arr.tolist()
print ("After to list : ",lis2)
