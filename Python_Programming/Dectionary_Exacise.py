from ast import comprehension
import os
# dict = {"set":"Set is the collection of elements",
#         "mutable":"The mutable means it is change the value",
#         "emutable":"imuatable means not change the value",
#         "prashant":"I am prashant rajpoot"}

# x = input()
# print(dict[x])
# print(dect)
s = "this is the very high speed bike"
l = s.split()
d = {0:0}
for i in l:
       d[i] = len(i)    
print(d) 
#reverse the key value pair in dectionary using the comprehancing
d = {value:key for key,value in d.items()}
print(d)

# ******************************comprehension *****************************
dect = {x:x**2 for x in range(1,11)} # it hold the option if condition

