# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
        
def insertLevelOrder(arr, root, i, n): 
      
    if i < n: 
        temp = Node(arr[i])  
        root = temp  
  
        root.left = insertLevelOrder(arr, root.left, 
                                     2 * i + 1, n)  
  
        root.right = insertLevelOrder(arr, root.right, 
                                      2 * i + 2, n) 
    return root 

def inOrder(root): 
    if root != None: 
        inOrder(root.left)  
        print(root.data,end=" ")  
        inOrder(root.right) 

if __name__ == '__main__':
    l = [1, 2, 3, 4, 5, 6, 6, 6, 6]
    n = len(l)
    root = None
    root = insertLevelOrder(l, root, 0, n) 
    inOrder(root)
