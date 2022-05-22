def fibonachi(n):
    if n==0:
        return 0
    if n==1:
        return 1
    return fibonachi(n-1) + fibonachi(n-2)

for i in range(10):
    print(fibonachi(i),end=" ")

print()

a = -1
b = 1
s = 1

# while(s<=100): 
#     c = a+b
#     print(c,end=" ")     # using while loop
#     a = b
#     b = c
#     s+=1

for i in range(10):
    c = a+b
    print(c,end=" ")     # using for loop 
    a = b
    b = c
    
print()