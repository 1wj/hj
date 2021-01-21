#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	srand((unsigned)time(NULL));
	char board[ROW][COL] = { 0 };
	//初始化数组
	Initboard(board,ROW,COL);
	//打印数组
	DisplayBoard(board ,ROW,COL);
	while (1)
	{
	//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	//判断胜负
		if (IsWin(board, ROW, COL) !='c')
			break;
	//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	//判断胜负
		if (IsWin(board, ROW, COL) !='c')
			break;
	}
	if (IsWin(board, ROW, COL) == '*')
		printf("玩家赢\n");
	else if (IsWin(board, ROW, COL) == '#')
		printf("电脑赢\n");
	else if (IsWin(board, ROW, COL) == 'q')
		printf("平局\n");
}
void menu() 
{
	
	printf("-------------------------\n");
	printf("----1.开始     0.结束-----\n");
	printf("-------------------------\n");
	
}
void test()
{
	int input;
	
	do {
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}