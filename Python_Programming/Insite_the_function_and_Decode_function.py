import os

def addition(a,b):
    c=a+b
    def addprint(c):
        print(c)
    return addprint(c)
 
def stringo(str):
    str1 = "Rajpoot"
    def instring(str):
     return str+str1
    return instring(str)

a = int(input())
b = int(input())
str = input()
addition(a,b)
print(stringo(str))
