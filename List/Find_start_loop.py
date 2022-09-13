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

    def start_loop(self):
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
            fast = self.head
            
            while fast!=slow:
                fast=fast.next

            return fast

        return cycle

if __name__=="__main__":
    l = ListNode()

    l.insert(10)
    l.insert(20)
    l.insert(30)

    if l.start_loop():
        print(f'Start of loop is :- {l.start_loop()}')
    else:
        print('No cycle!')


        

# /* This code is contributed by Vittal AB*/