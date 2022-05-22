def choice(arr,index,num,reduNum):
    if reduNum < 0:
        return
    
    if reduNum == 0:
        for i in range(index):
            print(arr[i],end=' ')
        print("")
        return
    
    prev = 1 if num == 0 else arr[index-1]
    
    for k in range(prev,num+1):
        arr[index] = k
        choice(arr,index+1,num,reduNum-k)

n = int(input())
arr = [0]*n
choice(arr,0,n,n)