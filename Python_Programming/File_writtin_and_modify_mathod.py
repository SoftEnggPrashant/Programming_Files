import os

# the append fo the in file
# f = open("textfile.txt","a")
# f.write("the append data from textfile using the write functuion")

# f.close()

f = open("textfile.txt","r+")

print(f.read())
f.write("Thank you")
