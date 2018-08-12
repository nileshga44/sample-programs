class xyz(Exception):
  pass
a=5
try:
  if (a>2):
    raise xyz, ("More than 2")
except xyz, msg:
  print (msg)
