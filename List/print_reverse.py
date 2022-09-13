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


    def print_reverse(self):
        stack = []

        tmp = self.head

        while tmp is not None:
            stack.append(tmp)
            tmp = tmp.next
        
        while len(stack) > 0:
            print(stack.pop().data)



if __name__ == "__main__":

    l = ListNode()

    for i in range(5):
        i+=1
        l.insert(i)

    l.print_reverse()
    
