#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void game()
{
	srand((unsigned)time(NULL));
	char mine[ROWS][COLS] = { 0 };   //���׵ľ���
	char show[ROWS][COLS] = { 0 };	 //ɨ�׵ľ���
	//��ʼ����������
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);  һ��������ʾ
	DisplayBoard(show, ROW, COL);
	//����
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);  //һ��������ʾ
	//��ʼɨ��
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
		printf("��ѡ��->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("������Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	
}
int main()
{
	test();
	return 0;
}
