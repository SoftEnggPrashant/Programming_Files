import os

list1 = [1,2,3,5]
list2 = [6,7,8,9]
for a in list1:
     if a in list2:
        print(a)
else:
    #print("NOT overlapping")

 
 x = 5
if x not in list1:
    print("NO")
else:
    print("yes")

if x in list1:
    print("yes")
else:
    print("NO")

if type(x) is int:
     print("true")
else:
    print("false")
if type(x) is not int:
    print("true")
else:
    print("false")