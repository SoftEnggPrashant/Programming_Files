#*******************************************armstrong number using while loop***********************************

# n = int(input())
# temp = n
# ans = 0
# while n!=0:
#     t = n%10
#     ans+=(t*t*t)
#     n/=10
# if ans == temp:
#     print("yes")
# else:
#     print("No")

#*******************************************armstrong number using for loop***************************************

# n = input()
# ans = 0
# for i in n:
#     t = int(i)
#     ans+=(t**3)
    
# if ans==int(n):
#     print("yes")
# else:
#     print("No")



#***************************reverse the number******************************************** 

#n = input()
# t = len(n)-1
# a = 0
# for i in range(0,t+1):
#     print(n[t-a],end="")
#     a+=1

#***************************** reverse the number using slicing   ****************************

# n = input()
# print(n[::-1])

#***************************** reverse the number using while loop **************************

n = int(input())
ans = 0
while n!=0:
    r = n%10
    ans = ans*10+r
    n//=10

print(ans)