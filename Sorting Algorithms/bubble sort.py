# improved bubble sort algorithm in python

from matplotlib.pyplot import step
from sqlalchemy import false


def bubble_sort(arr):
    swapped = True
    for n in range(len(arr)-1,0,-1):
        if swapped:
            swapped=False
            for i in range(len(arr)-1):
                if arr[i]>arr[i+1]:
                    arr[i],arr[i+1]=arr[i+1],arr[i]
                    swapped = True
                print(arr)
        else:
            break
    return arr

if __name__=="__main__":
    arr = input().split()
    arr = [int(ele) for ele in arr]

    print(bubble_sort(arr))


'''
Algorithm analysis
                        Best case           Avg case        worst case
Time complexity : -     O(n)                O(n^2)             O(n^2)
Space complexity : -    O(1)
Stable :- Yes
Adaptible :- Yes

'''