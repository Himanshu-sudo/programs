def insertionSort(arr): 
    for i in range(1, len(arr)): 
  
        k = arr[i] #k is to be inserted at proper place
        j = i-1
        while j >=0 and k < arr[j] : 
                arr[j+1] = arr[j] 
                j -= 1
        arr[j+1] = k 
        
arr = [12, 11, 13, 5, 6] 
insertionSort(arr) 
print ("Sorted array is:") 
for i in range(len(arr)): 
    print ("%d" %arr[i]) 
