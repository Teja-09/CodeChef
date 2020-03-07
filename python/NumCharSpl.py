# -*- coding: utf-8 -*-
"""
Created on Sat Mar  7 10:17:36 2020

@author: teja
"""

s = '12asdbkFWS(#@!qde'
cn = 0
ca = 0
cspl = 0
for i in range(len(s)):
    if s[i].isalpha():
        ca+=1
    elif s[i].isnumeric():
        cn+=1
    else:
        cspl+=1
print(str(cn) + " " + str(ca) + " " + str(cspl) + " ")