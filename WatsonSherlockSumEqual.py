# -*- coding: utf-8 -*-
"""
Created on Mon Aug 16 18:25:11 2021

@author: akila
"""

lst=[]
n=int(input('Enter the limit'))
sumf=0
sumb=0
has_equal=0;
for i in range (0,n):
    ele=int(input())
    lst.append(ele)
if n > 2:
    for i in range(n):
        sumleft = sum(lst[:i])
        sumright = sum(lst[(i+1):])
        if sumleft == sumright:
            has_equal = True
            break
if has_equal:
    print("The sum is equal at position "+ str(i) +" and value "+str(lst[i]))
else:
    print("No such value found")