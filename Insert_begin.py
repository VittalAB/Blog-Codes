# define the class node for storing data and next pointers

class node:
    def __init__(self, val):
        self.data = val
        self.next = None

# define the list node for implementing the insert function 


class ListNode:
    def __init__(self):
        self.head = None
    
    def insert(self, x):                # insert function
        if self.head is None:
            self.head = node(x)
        temp = node(x)
        temp.next = self.head
        self.head = temp
    
    def display(self):
        temp = self.head               # traverse function 
        while temp.next is not None:
            print(temp.data)
            temp = temp.next

if __name__=="__main__":              # main function 
    L = ListNode()
    
    for i in range(0,5):
        L.insert(i)                   # trial entries
    
    L.display()
