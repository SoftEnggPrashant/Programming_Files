from typing import Iterable


# Iterable - __iter__() or  __getitem__()
# Iterator - __next__()
# Iteration - to iterate the values of the object

s = "prashant"
it = iter(s)
print(it.__next__())
print(it.__next__())
# print(s.__getitem__)

#***************************yield keyword****************************

def oddNum(ls):
    for i in ls:
        if i%2!=0:
            yield i

l = [1,2,3,4,5,6,7,8,9,10]
ls = oddNum(l)
for i in ls:
    print(i)

#**********************generator comprehension***************
evens = (i for i in range(20) if i%2==0)
for item in evens:
    print(item,end=" ")
print()
