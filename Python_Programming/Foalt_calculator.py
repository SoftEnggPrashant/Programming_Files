import os

a = int(input("input the first number\n"))
b = int(input("input the second number\n"))

c= input("input the operation perform\n")

if (a==45 and b==3 and c=='*'):
    print(555)
elif a==56 and b==9 and c=='+':
    print(77)
elif a==56 and b==6 and c=='/':
    print(4)
else:
    if c=='+':
        print(a+b)
    elif c=='*':
        print(a*b)
    elif c=='/':
        print(a/b)