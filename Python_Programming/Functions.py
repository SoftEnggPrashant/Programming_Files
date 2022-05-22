# import os 
# def mySum(a,b):
#     """This function are return the sum of two variable"""
#     return a+b

# a = int(input())
# b = int(input())

# print(mySum(a,b))
# print(mySum.__doc__)

# Functions
# Built-in-function
# User Defined Function

# To print almost all builtin functions
# print(dir(__builtins__))
# a = [19,23,5,34,67,45,78]
# print(max(a))
# print(min(a))


# b = ['python','Python','php','java','kotlenlanguage']
# print(max(b,key=len))
# print(min(b,key=len))
# print(sum(a))
# c = (10,20,30,40)
# print(sum(c))
# print(a)
# b = sorted(a)
# print(b)

# print(sorted(a,reverse=True))
# b = ['ankit','shikhar','anurag','prashant','nishant']
# l = sorted(b)
# l1 = sorted(b,reverse=True)
# print(l)
# print(l1)
# print(sorted.__doc__)
# l2 = sorted(b,key=len)
# print(l2)

# li = [True,False,True,True,True]
# a = 2
# print(any(li))
# print(all(li))
# print(help(any))

# print(help(all))
# b = iter(a)
# print(next(b))

#***************************function in python ****************************
# def func_name(optional_Arguments):
#''' OPtional doc string'''
# body of the string
# *By default functions return no until otherwise spacified

# *Threre are 6 different types of user defined function Y an anonymous functions:
# 1. NO arguemnts
# 2. Required arguments
# 3. keyword arguments
# 4. Variable arguments
# 5. keyword variable arguemnts
# 6. Lambda ------> Anonymous Function

# 1.Noarguments
def fun():
    '''this function only print the string'''
    print('this is my first function')
    return 1

# print(fun())

# Required Arguments
def mul(a,b):
    return a*b

# print(mul(5,4))

def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)

def fact1(n):
    ans = 1
    while n:
        ans*=n
        n-=1
    return ans

# print(fact1(5))
# print(fact(5))
def prime(n):
    for i in range(2,(n//2)+1):
        if n%i==0:
            return False
    return True

# if prime(10):
#     print("Yes")
# else:
#     print("No")

def armStrong(n):
    ans = 0
    for i in n:
        ans+=(int(i)**3)
    if n==str(ans):
        return True
    return False

# n = int(input())

# for i in range(1,n+1):
#     if armStrong(str(i)):
#         print(i)

# Function to find LCM of two numbers

def gcd(a,b):
    if b==0:
        return a
    return gcd(b,a%b)

def Lcm(a,b):
    return a*b//gcd(a,b)

print(Lcm(6,5))

# Write a function to print table of any given number

def table(n):
    for i in range(1,11):
        print(f"{n} * {i} = {i*n}")
        
# table(4)

def LCM(a,b):
    m = n = max(a,b)
    while True:
        if m%a==0 and m%b ==0:
            return m
        m+=n
print(LCM(4,5))

# lambda function

number = lambda a,b:a+b
print(number(5,4))