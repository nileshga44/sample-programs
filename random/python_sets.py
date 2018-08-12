A = {'a', 'c', 'd'}
B = {'c', 'd', 2 }
C = {1, 2, 3}

print('A U B =', A| B)
print('A U B U C =', A | B | C)

print('A U B =', A.union(B))
print('A U B U C =', A.union(B, C))        
