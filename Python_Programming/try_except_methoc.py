import os
a = int(input())
b = int(input())

try:
    print(a//b)
except Exception as e:
    print("This result are not show becuse the input are not valid",e)