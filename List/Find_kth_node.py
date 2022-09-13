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

    def find_kth_node(self, k):
        tmp = self.head
        kth_node = self.head


        for i in range(0,k-1):
            tmp = tmp.next

        while tmp.next is not None:
            tmp = tmp.next
            kth_node = kth_node.next

        if kth_node:
            return kth_node.data
        else:
            return -1


if __name__ == "__main__":

    l = ListNode()

    for i in range(5):
        i+=1
        l.insert(i)

    l.display()

    k = int(input('Enter the value for k :- '))

    print(f'Value of kth node from end :- {l.find_kth_node(k)}')
