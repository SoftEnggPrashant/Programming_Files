import os
def mul(x,y):
    return x*y

def fun():
    str = "This function return the multiple values"
    a = 4839
    return str,a

def shout(str):
    return str.upper()

a = int(input())
b = int(input())
print(mul(a,b))
str , no = fun()
print(str)
print(no)
print(shout(str))