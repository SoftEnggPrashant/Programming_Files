def is_greater(x):
    return x>3

List = [1,2,3,4,5,6,7,8,9,10]

numbers = list(filter(is_greater,List)) # usint define function
numbers2 = list(filter(lambda x:x>5,List)) # using lambda function
print(numbers2)
print(numbers)

#------------------------------the reduce funtion-------------------------------
import functools as fun

num = fun.reduce(lambda x,y:x+y,List)

print(num)