# Syntax - [expression for name in list]
li = [3, 6, 2, 7]
li_new = [elem*2 for elem in li]
print li_new

li = [('a', 1), ('b', 2), ('c', 3)]
li_new = [n*2 for (x, n) in li]
print li_new

def sum(x, y):
    return x + y

li = [(1, 2), (3, 4), (5, 6)]
li_new = [sum(a, b) for (a, b) in li]
print li_new

li = [(1, 2), (3, 4), (5, 6)]
li_new = [sum(t[0], t[1]) for t in li]
print li_new

# With filter - [expression for name in list if filter]
li = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
li_new = [elem*10 for elem in li if elem > 5]
print li_new

# Nested list comprehensions.
li = [1, 2, 3, 4, 5]
li_new = [item*2 for item in [(elem + 1) for elem in li]]
print li_new

# 2 conditions in list comprehension.
li = [1, 2, 3, 4, 5]
li_new = [item for item in li if item > 2 and item < 4]
print li_new

# Output:
# [6, 12, 4, 14]
# [2, 4, 6]
# [3, 7, 11]
# [3, 7, 11]
# [60, 70, 80, 90, 100]
# [4, 6, 8, 10, 12]
# [3]
