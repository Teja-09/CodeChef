# -*- coding: utf-8 -*-
"""
Created on Fri May  1 17:03:30 2020

@author: teja
"""

t = int(input())
while(t):
    n = int(input())
    l = list(map(int,input().split()))
    count = 0
    maxi = 0
    mini = 10000
    size = len(l)
    for i in range(1, size):
        if l[i] - l[i-1] <= 2:
            count+=1
        else:
            count+=1
            if(count < mini):
                mini = count
            
            if(count > maxi):
                maxi = count
            
            count = 0
        
        if i == size-1 and l[i] - l[i-1] > 2:
            count+=1
            if(count < mini):
                mini = count
            
            if(count > maxi):
                maxi = count
            
            count = 0
            
    if(count != 0):
        count+=1;
        if(count < mini):
            mini = count
        
        if(count > maxi):
            maxi = count
    print(str(mini) + " " + str(maxi))
    t-=1
    