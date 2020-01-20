# -*- coding: utf-8 -*-
"""
Created on Mon Jan 20 15:17:03 2020

@author: teja
"""

n=int(input())
a=[]
for i in range(0,n):
    lk,pk=input().split()
    lis=[i+1,int(lk)+int(pk)]
    a.append(lis)
a.sort(key=lambda i:i[1])
for i in a:
    print(i[0],end=" ")
print()