#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
int Isfull(char board[ROW][COL],int row,int col);
char Win(char board[ROW][COL], int row, int col);