import os 
f = open("textfile.txt")
content = f.read()
print(content)

# print the number of charecter in the file

print(f.read(5))

# print the file content using the pointer 
for line in f:
    print(line)

# print the file content line by line

print(f.readline())

# print the all content as a list

print(f.readlines())

f.close()