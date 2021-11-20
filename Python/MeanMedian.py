# -*- coding: utf-8 -*-
"""
Created on Mon Aug 16 15:14:50 2021

@author: akila
"""

l1=[]
sum=0
mean=0
n=int(input('Enter the limit'))
for i in range (0,n):
    ele=int(input())
    l1.append(ele)
for i in range (0,n):
    sum=sum+l1[i]
print (sum/n) #mean
l1.sort()

print(l1[int(n/2)]) #median
