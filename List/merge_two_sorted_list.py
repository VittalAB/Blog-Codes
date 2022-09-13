from re import L


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

    def display(self, s):
        temp = s

        while temp is not None:
            print(temp.data)
            temp = temp.next
    
    def merge(self, start1, start2):
        tmp = node(0)
        s = node(0)

        if start1.data < start2.data:
            s = start1
            tmp = start1
            start1 = start1.next
        else:
            s = start2
            tmp = start2
            start2 = start2.next


        while start1 and start2:

            if start1.data < start2.data:
                tmp.next = start1
                tmp = tmp.next
                start1 = start1.next
            else:
                tmp.next = start2
                tmp = tmp.next
                start2 = start2.next
        
        if start1:
            tmp.next = start1
        else:
            tmp.next = start2

        self.display(s)


if __name__=="__main__":
    l1 = ListNode()
    l2 = ListNode()

    l1.insert(10)
    l1.insert(20)
    l1.insert(30)

    l2.insert(15)
    l2.insert(25)

    l1.merge(l1.head,l2.head)


# /* This code is contributed by Vittal AB*/