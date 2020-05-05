# -*- coding: utf-8 -*-
"""
Created on Tue May  5 11:33:27 2020

@author: krish
"""

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
        

def preorder(root):
    if(root):
        
        if(root.left):
            preorder(root.left)
        
        print(root.data)
        
        if root.right:
            preorder(root.right)

if __name__=='__main__':
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(10)
    preorder(root)
    