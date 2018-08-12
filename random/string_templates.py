from string import Template

print "\nTEMPLATE DEMO..."
t = Template('x is $x')
print t.substitute({'x' : 1})

print "\nTEMPLATE DEMO..."
t = Template("Hi $name, You have $marks marks")
data = [("Ram", 10), ("Hero", 20), ("abcd", 30)]
for item in data:
    print t.substitute(name=item[0], marks=item[1])
