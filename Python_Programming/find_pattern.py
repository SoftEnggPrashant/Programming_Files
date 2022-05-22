n = int(input())
b = int(input())

if b==1:
    for i in range(n):
        for j in range(i):
            print("*",end="")
        print("\n")
else:
    while n>=0:
        i = 1
        while(i<=n):
            print("*",end="")
            i = i+1
        print("\n")
        n = n-1
    #  print("false")