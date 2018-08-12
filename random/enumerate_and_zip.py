lis = [10, 20, 30, 40, 50]
print ("ENUMERTAE DEMO...")
for item in enumerate(lis):
    print item

print ("Changing starting index to 1")
for item in enumerate(lis, start = 1):
    print item

print ("zip() DEMO...")
cars = ["Aston", "Audi", "McLaren"]
accessories = ["GPS", "Car Repair Kit", 
               "Dolby sound kit"]
for c, a in zip(cars, accessories):
    print (c, a)

print ("un-zip() DEMO...")
data = [
                ('Aston', 'GPS'), 
                ('Audi', 'Car Repair Kit'), 
                ('McLaren', 'Dolby sound kit')
             ]
for item in zip(*data):
    print (item)
