from itertools import count
import os
# dict = {1:"prashant",2:"shubam",3:"mohan",4:{1:10,2:20,3:40,4:50}}
# # dict[5] = "xyz"
# dict.update({5:"xyz"})
# # print(dict)
# # del dict[5]
# # print(dict)
# print(dict.keys())
# print(dict.items())



# *********************************Dectionary(mutable)*************************************
# Denoted by {key : value } ans item are saprated by using a ,
# No indexing,No slicing ,no order
# value can be accessed by using key as index
# keys: *Unique across the dictionary *Immutable objects
# Example : d= {'a':2,'b':3} ------> d['a']-->2
# d = {} Empty dict
  
# d  = {}
# no = int(input())
# for i in range(no):
#     n = input().split()
#     d.update({n[0]:n[1]})
# l = list
# for key,item in d.items():
#     print(key,item)
    
# a = ['PYTHON','JAVA','PHP']
# b = [100,200,300]

# d = {a[i]:b[i] for i in range(len(a))}
    
# for key,value in d.items():
#     print(key,value)

# n = min(len(a),len(b))
# l = list()
# for i in range(n):
#     l.append((a[i],b[i]))
# d = dict(l)
# print(d)

# de = dict(zip(a,b))
# print(de)

a = 'ababababab'
ans ={'a':a.count('a'),'b':a.count('b')}
print(ans)