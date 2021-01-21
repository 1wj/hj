#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化数组
void Initboard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
				printf("|");
		}

		printf("\n");

		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---", board[i][j]);
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		
	}
}
//玩家下棋
void PlayerMove(char board[][COL], int row, int col)
{
	int x, y;
	printf("玩家走:\n");
	
	do {
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("该坐标已被占用\n");
		else
				printf("输入错误\n");
			
	} while (1);	
}
//电脑下棋
void ComputerMove(char board[][COL], int row, int col) 
{
	int x,y;
	printf("电脑走：\n");
	while (1)
	{
		x = rand() % 3;
		y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	
}
//判断平局
int IsFull(char board[][COL], int row, int col)
{
	int i, j;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
//判断胜负
char IsWin(char board[][COL], int row, int col)
{
	int i, j;
//判断赢
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//判断列
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}
	//判断左对角线
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	//判断右对脚线
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
//判断平
	if (IsFull(board,row,col) == 1)
		return 'q';
	return 'c';
}
