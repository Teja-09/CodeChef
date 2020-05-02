# -*- coding: utf-8 -*-
"""
Created on Sat May  2 17:35:38 2020

@author: teja
"""

class Node:
    
    def __init__(self, data):
        self.data = data
        self.next = None
        
class LL:
    def __init__(self, data):
        node = Node(data)
        self.head = node
        
    def attachLink(self,data):
        temp = self.head
        while(temp.next!=None):
            temp = temp.next
        node = Node(data)
        temp.next = node
        
    def printLL(self):
        temp = self.head
        while(temp):
            print(temp.data,end=" -> ")
            temp = temp.next
            
    def remove(self, n, l):
        if n > len(l):
            n = n % len(l)
        
        if n == len(l):
            self.head = self.head.next
        else:
            temp = self.head
            for i in range(0, len(l)-n-1):
                temp = temp.next
            temp.next = temp.next.next
        
        
if __name__ == '__main__':
    l = [1,2,3,4,5]
    
    llist = LL(l[0])
    for i in range(1, len(l)):
        llist.attachLink(l[i])
    
    llist.printLL()
    
    
    # remove nth Node from end
    n = int(input())
    llist.remove(n,l)
    llist.printLL()
        