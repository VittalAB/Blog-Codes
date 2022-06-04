import heapq

# built in heap sort functionality in python

numbers = [10,20,40,30,25,10]
print(heapq.nsmallest(len(numbers),numbers))
print(heapq.nlargest(len(numbers),numbers))



