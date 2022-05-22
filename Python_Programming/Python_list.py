import os
list = [1,2,3,5,6]
list2 = list
list +=[7,8,9,10]
list2+=[11,12,13,14]
print(list2)
for i in range(len(list)):
    print(list[i],end=" ")