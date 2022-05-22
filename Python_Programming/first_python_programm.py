import os
import keyword
a=int(input())
b=int(input())
def add(a,b):
    return a+b

if a>b : print(a)
else : print(b)
print(add(a,b))
# for a in range(5):
#     print(a)

#print(keyword.kwlist)
data = [1,2,3,5,6,7]
for i in range(len(data)):
    print(data[i])

# short hand if else condition in python
print(a) if a<b else print(b)
