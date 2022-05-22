# n = int(input())
# arr = map(int, input().split())
# largest = max(arr)
# for i in range(n):
#     print()
# print(max(arr))

# **********************************set(Mutable)***************************

# Denoted by {} ans items are separated using a,
# No indexing , No order
# No duplicate i.e..., only unique items
# Only mutable object are allowed
# No slicing

s1 = {1,2,3,4,5}
s2 = {4,5,6}

# print('Union of s1 and s2',s1.union(s2))
# print('intersection of s1 and s2',s1.intersection(s2))
# print('differece of s1 and s2',s1.difference(s2),s1-s2)
# print((s1-s2)|(s2-s1))
# print(s1.symmetric_difference(s2))
# print(s1^s2)

s = {'MATHS','ENGLISH','SCIENCE'}
for i in s:
    print(i)
