#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void game()
{
	srand((unsigned)time(NULL));
	char mine[ROWS][COLS] = { 0 };   //布雷的矩阵
	char show[ROWS][COLS] = { 0 };	 //扫雷的矩阵
	//初始化两个矩阵
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//打印矩阵
	//DisplayBoard(mine, ROW, COL);  一般雷阵不显示
	DisplayBoard(show, ROW, COL);
	//布雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);  //一般雷阵不显示
	//开始扫雷
	FindMine(mine,show,ROW,COLS);	
}
void menu()
{
	printf("****************************\n");
	printf("********    1. game  ********\n");
	printf("********    0. end   ********\n");
	printf("****************************\n");
}
void test() 
{
	int input;
	menu();	
	do {
		printf("请选择：->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("结束游戏\n");
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
