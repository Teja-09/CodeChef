# -*- coding: utf-8 -*-
"""
Created on Sun Dec 15 15:27:51 2019

@author: teja
"""

class Node:
    def __init__(self, new_data):
        self.data = new_data
        self.next = None

class Linkedlist:
    def __init__(self):
        self.head = None
        self.tail = None
        self.len = 0
        
    def push(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node
        
    def append(self,data):
        new_node = Node(data)
        if self.len == 0:
            new_node.next = None
            self.head = new_node
            self.tail = new_node
            self.len = self.len + 1
        else:
            self.tail.next = new_node
            self.tail = new_node
            new_node.next = None
        
    def printlist(self):
        temp = self.head
        while(temp):
            print(temp.data, end=' -> ')
            temp = temp.next



llist = Linkedlist()
#llist.push(20)
#llist.push(2)
#llist.push(1)
#llist.push(5)
#llist.push(9)

llist.append(20)
llist.append(2)
llist.append(1)
llist.append(5)
llist.append(9)
llist.printlist()