print "\nSET DEMO..."
normal_set = set(["a", "b", "c"])
print (normal_set)
normal_set.add("d")
normal_set.add("d")
print (normal_set)

print "\nFROZEN_SET DEMO..."
frozen_set = frozenset(["e", "f", "g"])
print (frozen_set)
#frozen_set.add("h") Doesn't work
