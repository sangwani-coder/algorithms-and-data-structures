class Node:
    """
    an object for storing a single node of a linked list
    models two attributes - data and the link to the next node in the list.
    """
    data = None
    next_node = None

    def __init__(self, data):
        self.data = data

    def __repr__(self) -> str:
        return "Node data %s" %self.data


class LinkedList:
    """
    singly linked list
    """
    def __init__(self):
        self.head = 0

    def is_empty(self):
        return self.head == None
    
    def size(self):
        """
        returns the number of nodes in the linked list
        takes O(n) time
        """

        current = self.head
        count = 0

        while current:
            count += 1
            current = current.next_node

        return count

    def add(self, data):
        """
        adds new node with data at the start of the linked list.
        """
        new_node = Node(data)
        new_node.next_node = self.head
        self.head = new_node


    def __repr__(self) -> str:
        """
        Returns the string representation of the list
        takes O(n) time
        """
        nodes = []
        current = self.head

        while current:
            if current is self.head:
                nodes.append("[Head: %s]" % current.data)
            elif current.next_node is None:
                nodes.append("[Tail: %s]" % current.data)
            else:
                nodes.append("[%s]" % current.data)

            current = current.next_node
        return "-> ".join(nodes)