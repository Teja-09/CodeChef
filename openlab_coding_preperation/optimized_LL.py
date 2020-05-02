# -*- coding: utf-8 -*-
"""
Created on Sat May  2 17:25:17 2020

@author: teja
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LinkedList:
    
    def __init__(self, data):
        self.head = Node(data)
    
    def attachNode(self, data):
        node = Node(data)
        node.next = self.head
        self.head = node
        
    def attachBack(self, data):
        node = Node(data)
        temp = self.head
        while(temp.next!=None):
            temp = temp.next
        temp.next = node
        
        
    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data, end = " -> ")
            temp = temp.next

if __name__ == '__main__':
    l = [1, 2, 3, 4, 5]
    llist = LinkedList(l[0])
    for i in range(1, len(l)):
        llist.attachNode(l[i])
    
    llist.printLL()
    
    print()
    
    l = [1, 2, 3, 4, 5]
    llist = LinkedList(l[0])
    for i in range(1, len(l)):
        llist.attachBack(l[i])
    
    llist.printLL()
        
    