def point(x, y):
    print(x,y)
 
foo_list = (3, 4)
bar_dict = {'y': 3, 'x': 2}
 
point(*foo_list) # Unpacking Lists
point(**bar_dict) # Unpacking Dictionaries

# Output:
# (3, 4)
# (2, 3)

