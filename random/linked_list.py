#! /usr/bin/env python


# Reference: https://stackoverflow.com/questions/280243/python-linked-list

class Node:
    def __init__(self):
        self.data = None # contains the data
        self.next = None # contains the reference to the next node


class LinkedList:
    def __init__(self):
        self.cur_node = None

    def add_node_at_start(self, data):
        new_node = Node() # create a new node
        new_node.data = data
        new_node.next = self.cur_node # link the new node to the 'previous' node.
        self.cur_node = new_node #  set the current node to the new one.

    def add_node_at_end(self, data):
      new_node = Node()
      new_node.data = data
      node = self.cur_node
      while node.next:
        node = node.next
      node.next = new_node

    def list_print(self):
        node = self.cur_node # cant point to ll!
        while node:
            print node.data
            node = node.next



ll = LinkedList()
ll.add_node_at_start(1)
ll.add_node_at_start(2)
ll.add_node_at_start(3)
ll.add_node_at_end(4)

ll.list_print()
