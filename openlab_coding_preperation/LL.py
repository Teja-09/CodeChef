# -*- coding: utf-8 -*-
"""
Created on Sat May  2 17:11:19 2020

@author: teja
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LL:
    
    def __init__(self):
        self.head = None
        
    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data)
            temp = temp.next

if __name__=='__main__':
    llist = LL()
    
    llist.head = Node(1)
    llist.head.next = Node(2)
    llist.head.next.next = Node(3)
    
    llist.printLL()
    
    
    
    