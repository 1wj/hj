#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	srand((unsigned)time(NULL));
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Initboard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board ,ROW,COL);
	while (1)
	{
	//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	//�ж�ʤ��
		if (IsWin(board, ROW, COL) !='c')
			break;
	//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	//�ж�ʤ��
		if (IsWin(board, ROW, COL) !='c')
			break;
	}
	if (IsWin(board, ROW, COL) == '*')
		printf("���Ӯ\n");
	else if (IsWin(board, ROW, COL) == '#')
		printf("����Ӯ\n");
	else if (IsWin(board, ROW, COL) == 'q')
		printf("ƽ��\n");
}
void menu() 
{
	
	printf("-------------------------\n");
	printf("----1.��ʼ     0.����-----\n");
	printf("-------------------------\n");
	
}
void test()
{
	int input;
	
	do {
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
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