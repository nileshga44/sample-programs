#Remove characters from the first string which are present in the second string
input_str = "Hansraj"
mask_str = "as"
out = ""

data = [0]*256

for char in mask_str:
    data[ord(char)] = 1

for char in input_str:
    if data[ord(char)] == 0:
        out += char
print out
