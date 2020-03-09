# -*- coding: utf-8 -*-
"""
Created on Mon Mar  9 17:44:54 2020

@author: teja
"""

ex_str = "God has created the universe so beautiful that the description of it can be represented in lisp."
ex_str = ex_str[:-1]

print(ex_str)

ex_list = list(map(lambda x: x.lower(), ex_str.split()))
ex_list.sort(key=lambda x: len(x))
ex_list[0] = ex_list[0].title()
res = " ".join(ex_list) + "."
print(res)