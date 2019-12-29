# -*- coding: utf-8 -*-
"""
Created on Sun Dec 15 15:48:49 2019

@author: teja
"""

import socket
request = b"GET / HTTP/1.1\nHost: stackoverflow.com\n\n"
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("stackoverflow.com", 80))
s.send(request)
result = s.recv(10000)
while (len(result) > 0):
    print(result)
    result = s.recv(10000)   