import array as arr

# data = [int(x) for x in input().split()]
# print(data)
n = int(input("enter the size of array"))
a = arr.array('i',[])
for i in range(n):
    a.insert(i,int(input()))

print("the array elements is = ")
for i in a:
    print(i)

