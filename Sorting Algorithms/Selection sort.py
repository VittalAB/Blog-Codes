# implementation of selection sort in python

def selection_sort(arr):
    for i in range(len(arr)-1):
        min = i
        for j in range(i+1,len(arr)):
            if arr[j] < arr[min]:
                min = j
        arr[i],arr[min] = arr[min],arr[i]


if __name__=="__main__":
    arr = [10,20,30,50,40]
    selection_sort(arr)
    print(arr)
