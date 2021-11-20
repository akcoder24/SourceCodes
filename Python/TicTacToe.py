# -*- coding: utf-8 -*-
"""
Created on Mon Aug 16 15:36:24 2021

@author: akila
"""

board = [ ]  
winner = 0
for row in range(0,3) :
    board.append ([])
    for col in range ( 0 , 3 ) :
        board[row].append(int(input()))
for row1 in range(0,3):
    if(board[row1][0]== 1 and board [row1][1]== 1 and board [row1][2]==1 ): 
        winner=1
    elif(board[row1][0]== 2 and board[row1][1]== 2 and board[row1][2]==2 ):
        winner=2
for col1 in range(0,3):
    if(board[0][col1]==1 and board [1] [col1]==1 and board [2] [col1]== 1):  
        winner = 1
    elif(board[0][col1]==2 and board [1] [col1]==2 and board [2] [col1]== 2):
        winner=2
for col1 in range(0,3):
    if(board[0][0]==1 and board[1][1]==1 and board[2][2]==1):  
        winner=1
    elif(board[0][0]==2 and board[1][1]==2 and board[2][2]==2) :
        winner=2
for col1 in range ( 0 , 3 ) :
    if ( board [ 0 ] [ 2 ] == 1 and board [ 1 ] [ 1 ] == 1 and board [ 2 ] [ 0 ] == 1 ) :  
        winner=1
    elif( board [ 0 ] [ 2 ] == 2 and board [ 1 ] [ 1 ] == 2 and board [ 2 ] [ 0 ] == 2 ) :
        winner=2

print('The winner is',winner)
