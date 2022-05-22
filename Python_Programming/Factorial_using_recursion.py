def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)

def fibonachi(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    return fibonachi(n-1)+fibonachi(n-2)
def added(*arg):
    print(arg)
# n = int(input())
# print(fact(n))
# print(fibonachi(n))
# added(1,2,2,3,34,4,5,6,7,78)

# a = int(input())
# ans = 1
# for i in range(a,1,-1):
#     ans *= i

# print(ans)

# s = 'python'
# b = ''
# for i in s:
#     b +=i
#     print(b)

s = 'there is an elephant'
b = s.split()
# ans = ''
# for i in b:
#     if len(i)>=len(ans):
#         ans = i
b = sorted(b,key=len)
print(b[-1])