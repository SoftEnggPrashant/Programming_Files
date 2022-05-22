def sqr(a):
    return a*a

list1 = ["23","34","45","456","78"]

list2 = list(map(int,list1))
print(list2)

# pass in the map function as a  prameter another function

numbers = [1,2,3,4,54,5,6,7,8,9]

numbers2 = list(map(lambda x:x*x,numbers))  #the use of lambda function
numbers3 = list(map(sqr,numbers))

print(numbers3)

print(numbers2)