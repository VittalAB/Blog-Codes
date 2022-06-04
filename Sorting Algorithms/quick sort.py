# Quick sort sorting algorithm in python

def quicksort(arr):
    
    if len(arr)<=1:
        return arr

    pivot = arr[len(arr)//2]
    left = [x for x in arr if x<pivot]
    middle = [x for x in arr if x==pivot]
    right = [x for x in arr if x>pivot]

    return quicksort(left) + middle + quicksort(right)

if __name__=="__main__":
    arr = input().split()
    arr = [int(ele) for ele in arr]
    # print(len(arr))
    print(quicksort(arr))


'''
Algorithm analysis 
                    Best case           Worts case              Avg case

Time complexity : -  O(nlog n)           O(n^2)                  O(nlog n)

Space complexity: - O(log n)

Stability :- NO

Adaptbility :- Yes
'''