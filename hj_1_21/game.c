#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//��ʼ������
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
//��ӡ����
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
//�������
void PlayerMove(char board[][COL], int row, int col)
{
	int x, y;
	printf("�����:\n");
	
	do {
		printf("���������꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�������ѱ�ռ��\n");
		else
				printf("�������\n");
			
	} while (1);	
}
//��������
void ComputerMove(char board[][COL], int row, int col) 
{
	int x,y;
	printf("�����ߣ�\n");
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
//�ж�ƽ��
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
//�ж�ʤ��
char IsWin(char board[][COL], int row, int col)
{
	int i, j;
//�ж�Ӯ
	//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//�ж���
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}
	//�ж���Խ���
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж��ҶԽ���
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
//�ж�ƽ
	if (IsFull(board,row,col) == 1)
		return 'q';
	return 'c';
}
