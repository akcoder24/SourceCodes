#Bubble-sort
arr=[]
n=int(input("Enter the limit:"))
for i in range(0,n):
    ele=int(input())
    arr.append(ele)
for i in range(n-1):  
    for j in range(0, n-i-1): 
        if arr[j] > arr[j+1] : 
            arr[j], arr[j+1] = arr[j+1], arr[j] 
print ("Sorted array is:") 
print(arr)
  