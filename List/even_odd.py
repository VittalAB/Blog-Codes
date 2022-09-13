class node:
    def __init__(self, data):
        self.data = data
        self.next = None


class ListNode:

    def __init__(self):
        self.head = None

    def insert(self, val):
        if self.head is None:
            self.head = node(val)
        else:
            temp = self.head

            while temp.next is not None:
                temp = temp.next

            temp.next = node(val)

    def display(self):
        temp = self.head

        while temp is not None:
            print(temp.data)
            temp = temp.next

    def find_length(self):
        fast = self.head
        slow = self.head

        while fast and fast.next:
            fast=fast.next.next
        
        if fast is None:
            return 'Even Length'
        else:
            return 'Odd Length'

        


if __name__ == "__main__":

    l = ListNode()

    for i in range(4):
        i+=1
        l.insert(i)

    l.display()

    print(l.find_length())
    

