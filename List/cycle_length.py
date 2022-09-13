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

    def loop_length(self):
        fast = self.head
        slow = self.head

        cycle = False

        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next

            if fast==slow:
                cycle = True
                break
        
        if cycle:
            c=0
            fast = fast.next
            c+=1

            while fast!=slow:
                fast=fast.next
                c+=1

            return c

        return cycle

if __name__=="__main__":
    l = ListNode()

    l.insert(10)
    l.insert(20)
    l.insert(30)

    if l.loop_length():
        print(f'Length of loop is :- {l.loop_length()}')
    else:
        print('No cycle!')