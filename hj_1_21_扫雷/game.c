#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//��ʼ����������
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set) 
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i=0;i<=col;i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
//����
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = LEI;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//��ʼɨ��
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y,j,count=ROW*COL-LEI;
	
	do {
		printf("�������꣺->");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//1.������
			if (mine[x][y]=='1')
			{
				printf("������˼�㱻ը���ˣ�\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2. ������Χ�׵ĸ���
			else 
			{
				j=get_mine_count(mine,x,y);
				show[x][y] = j+'0';
				printf("%c\n", show[x][y]);
				count--;
			}
		}
		else
		{
			printf("�����������,�������룺\n");
		}

	} while (count);
	if (count==0)
	{
		printf("�����ų����е���");
	}

}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	int i=0, j=0;
	int count=0;
	for (i=(x-1);i<=x+1;i++)
	{
		for (j=y-1;j<=y+1;j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	return count ;
}