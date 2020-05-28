# -*- coding: utf-8 -*-
"""
Created on Sat May  2 13:09:56 2020

@author: teja
"""

t = int(input())
while(t):
    n, q = map(int, input().split())
    li = list(input())
    se = set(li)
    dic = {}
    for i in se:
        dic[i] = li.count(i)
    for i in range(q):
        c = int(input())
        ans = 0
        for val in dic.values():
            if val > c:
                ans = ans + (val - c)
        print(ans)
    t-=1
    