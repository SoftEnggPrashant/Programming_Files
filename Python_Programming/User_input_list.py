import os

list = []
x = int(input("enter the range of list"))
for i in range(x):
    n = int(input())
    list.append(n)
print("the list content is =")
for i in list:
    print(i,end=" ")
print("\n")