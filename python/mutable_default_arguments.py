#!/usr/bin/python

# Date: 2017-mm-dd
#
# Description:
# Side effect of having mutable default argument in python. When a mutable
# parameter is optional and value is not passed while calling, it retains
# previous value.


def f(x, l=[]):
  for i in range(x):
    l.append(i*i)
  print(l)

f(2)
f(3, [3, 2, 1])
f(3)  # l updated with first call f(2) .i.e. [0, 1] is maintained in this call.
f(4)

# Output:
# [0, 1]
# [3, 2, 1, 0, 1, 4]
# [0, 1, 0, 1, 4]
# [0, 1, 0, 1, 4, 0, 1, 4, 9]
