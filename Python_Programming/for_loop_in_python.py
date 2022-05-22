#  1. while -> when we do not know the number of the time  we want to run the loop
#  2. for   -> when we know the number of times we want to run the loop

# list = [1,2,3,4,5,6,7,8,9]

# for item in list: single list print using for loop
#     print(item)

# Nested_list = [[1,2],[4,5],[7,8],[11,1]]
# for first,second in Nested_list:           print the nested lists
#     print(first,second)

# dect = {1:2,3:4,5:6,7:8,8:9}
# for key,item in dect.items():  # pirnt the dectionary key and items
#     print(key,item)

# i=0
# while i<10:
#     print(i)
#     i= i+1
# else:
#     print("this loop end properly")
# lops :

#while loop 
# while condition:
#       body of the loop

# a = 1
# while a<=10:
#     print(a,end='\t')
#     a+=1
# print("out the loop")
# print(2,7,3,4,sep="-->")
# first = 'prashant'
# last = 'Rajput'

# print(f'Hi {first} {last} how are you') # using the fstring

# print('Hi {} {} how are you'.format(first,last)) # using the format function

#print the table
a = int(input())
# b = int(input())
# c = int(input())
i = 1
while a<=10:
    i=1
    while i<=5:
        print(f'{a} * {i} = ',a*i,end=", ")
        # print('{} * {} = {}'.format(a,i,a*i))
        i+=1
    print(end="\n\n")
    a+=1