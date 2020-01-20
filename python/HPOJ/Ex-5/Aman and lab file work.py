# -*- coding: utf-8 -*-
"""
Created on Mon Jan 20 15:06:01 2020

@author: teja
"""

n = int(input())
t = []
d = []
ans = []
for i in range(n):
    temp = list(input().split())
    t.append(temp[0])
    d.append(temp[1])
for i in range(len(t)):     
    minval = min(t)
    minind = t.index(minval)
    ans.append()
    for i in range(minind):
        t.append(t.pop(0))
        d.append(d.pop(0))
    t.pop(0)
    d.pop(0)
    

        
    
    