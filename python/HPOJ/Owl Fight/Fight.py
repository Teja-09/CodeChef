# -*- coding: utf-8 -*-
"""
Created on Thu Feb  6 10:19:45 2020

@author: teja
"""

def parent(use, a):
    if(use[a] < 0):
        return use[a]
    else:
        return parent(use, use[a])



l = list(map(int,input().split()))
n = l[0]
m = l[1]
use = []
use.append(0)
for i in range(1, n+1):
    use.append(-i);
#print(use)
for i in range(1, m+1):
    temp = list(map(int, input().split()))
    if(use[temp[0]] < 0 and use[temp[1]] < 0):     
        use[temp[0]] = min(use[temp[0]], use[temp[1]])
        use[temp[1]] = temp[0]
   #     print("use = " + str(use))
    elif(use[temp[0]] > 0 and use[temp[1]] < 0):
        use[use[temp[0]]] = min(use[use[temp[0]]], use[temp[1]])
        use[temp[1]] = use[temp[0]]
  #      print("use = " + str(use))
    else:
        use[use[temp[1]]] = min(use[temp[0]], use[use[temp[1]]])
        use[temp[0]] = use[temp[1]]
 #       print("use = " + str(use))
#print(use)

q = int(input())
fights = []
for i in range(q):
    a,b = list(map(int, input().split()))
    #print("a = " + str(a))
   # print("b = " + str(b))
    pa = abs(int(parent(use, a)))
    pb = abs(int(parent(use, b)))
    #print("pa = " + str(pa))
   # print("pb = " + str(pb))
    if(pa == pb):
        print("TIE")
    elif (pa < pb):
        print(b)
    else:
        print(a)
    