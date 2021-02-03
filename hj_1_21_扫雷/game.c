#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

//初始化两个矩阵
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
//打印矩阵
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
//布雷
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
//开始扫雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y,j,count=ROW*COL-LEI;
	
	do {
		printf("输入坐标：->");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//1.踩雷了
			if (mine[x][y]=='1')
			{
				printf("不好意思你被炸死了！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2. 计算周围雷的个数
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
			printf("坐标输入错误,重新输入：\n");
		}

	} while (count);
	if (count==0)
	{
		printf("您已排除所有的雷");
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