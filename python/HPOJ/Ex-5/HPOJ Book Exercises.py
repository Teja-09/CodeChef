# -*- coding: utf-8 -*-
"""
Created on Mon Jan 20 14:14:26 2020

@author: teja
"""

n = int(input())
val = []
sub = []
for i in range(n):
    temp = list(input().split())
    #print(temp)
    if(int(temp[0]) !=  -1):
        val.append(int(temp[0]))
        sub.append(temp[1])
        #print(val)
        #print(sub)
    else:
        minval = min(val)
        minind = val.index(minval)
        leng = len(val)
        #print(minind)
        subneed = ""
        for j in range(len(val), minind, -1):
            #val.pop()
            subneed = sub.pop()
            val.pop()
        #print(subneed)
        print(str(leng - minind -1) + " " + str(subneed))
        
    
        
    