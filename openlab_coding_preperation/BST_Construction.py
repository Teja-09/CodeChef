# -*- coding: utf-8 -*-
"""
Created on Tue May  5 11:52:19 2020

@author: krish
"""

class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None
        

def addNode(root, data):
    node = Node(data)
    temp = root
    while(temp):
        if(data < temp.data):
            if temp.left == None:
                temp.left = node
                break
            else:
                temp = temp.left
            
        elif(data > temp.data):
            if temp.right == None:
                temp.right = node
                break
            else:
                temp = temp.right
                        
def inorder(node):
    if(node):
        
        if node.left:
            inorder(node.left)
            
        print(node.data, end=" ")
        
        if node.right :
            inorder(node.right)
    


if __name__ == '__main__':
    
    l = [1, 2, 5, 7, 8, 3]
    root = Node(l[0])
    for i in range(1, len(l)):
        addNode(root, l[i])
            
    inorder(root)