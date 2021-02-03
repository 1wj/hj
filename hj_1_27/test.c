#define _CRT_SECURE_NO_WARNINGS 1
#include"tx.h";

void menu()
{
	printf("********************************\n");
	printf("*****1.add        2.del*********\n");
	printf("*****3.search     4.modify******\n");
	printf("*****5.show       6.sort********\n");
	printf("*****0.exit             ********\n");
}

int main()
{
	co con;
	Init(&con);
	int input=0;
	do 
	{
		menu();
		printf("«Î—°‘Ò£∫->");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			//printf("add");
			jia(&con);
			break;
		case del:
			//printf("del");
			sc(&con);
			break;
		case search:
			//printf("search");
			se(&con);
			break;
		case modify:
			//printf("modify");
			mo(&con);
			break;
		case show:
			//printf("show");
			ck(&con);
			break;
		case sort:
			printf("sort°¢\n");
			break;
		case exit:
			printf("exit");
			break;
		default:
			printf(" ‰»Î¥ÌŒÛ\n");
			break;
		}

	} while (input);

}