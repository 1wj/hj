#pragma once
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
void Initboard(char board[ROW][COL], int row , int col);
void DisplayBoard(char board[][COL], int row, int col);
void PlayerMove(char board[][COL], int row, int col);
void ComputerMove(char board[][COL], int row, int col);
char IsWin(char board[][COL], int row, int col);