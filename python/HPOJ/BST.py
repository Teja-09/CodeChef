# -*- coding: utf-8 -*-
"""
Created on Thu Feb  6 11:46:41 2020

@author: teja
"""

class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
 
def insert(root, node):
    if root is None:
        root = node
    else:
        if root.val > node.val:
            if root.left == None:
                root.left = node
            
            else:
                insert(root.left, node)
        else:
            if root.right == None:
                root.right = node
             
            else:
                insert(root.right, node)


def height(node):
    if node == None:
        return 0
    else:
       return 1 + max(height(node.left), height(node.right))


n = int(input())
l = list(map(int,input().split()))
r = Node(int(l[0]))
for i in range(1, n):
    insert(r, Node(int(l[i])))

print(height(r))
