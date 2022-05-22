import os

n = 5
i = 0
g = 10
while i<=10:
    x = int(input())
    if(x==n):
        print("your selectio is correct")
        print("game over")
        break
    elif(x>n):
        print("your Number is greater of gusses")
    elif(x<n):
        print("your number is lesser of gusses")
    print("left the gusses",g-i-1)
    i= i+1
else:
    print("game over")