# implementation of merge sort in python

def merge_sort(arr):
    
    if len(arr)>1:

        mid = len(arr)//2

        l = arr[:mid]
        r = arr[mid:]
        # print(l)
        # print(r)
        merge_sort(l)
        merge_sort(r)

        i = j = k = 0

        while i<len(l) and j<len(r):
            if l[i]<r[j]:
                arr[k] = l[i]
                i=i+1
            else:
                arr[k] = r[j]
                j+=1
            k+=1
        
        while i<len(l):
            arr[k]=l[i]
            i+=1
            k+=1
        
        while j<len(r):
            arr[k]=r[j]
            j+=1
            k+=1

if __name__=="__main__":
    arr = [10,30,20,40,50]
    print(arr)
    merge_sort(arr)
    print(arr)
