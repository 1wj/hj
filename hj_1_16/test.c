#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//int main()
//{
//	/*char ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		putchar(ch);
//	}*/
//
//	printf("%c", 97);
//	return 0;
//}



//������
//void menu()
//{
//	printf("********************************\n");
//	printf("*****������***1.��ʼ*****0.����**\n");
//	printf("********************************\n");
//
//}
//void play()
//{
//	int get = 0;
//	int guess = 0;
//	get = rand()%100+1;
//	while (1) 
//	{
//		printf("��������²���� ");
//		scanf("%d", &guess);
//		if (guess < get)
//			printf("С��");
//		else if (guess > get)
//			printf("����");
//		else
//		{
//			printf("�¶��� Ϊ %d", get);
//			break;
//		}
//	}
//}
//int main()
//{
//	srand(time(NULL));
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play();
//			break;
//		case 0:
//			printf("��Ϸ������\n");
//			break;
//		default:
//			printf("�����������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}
//int main()
//{
//	char ch = getchar();
//	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
//		printf("��ĸ");
//	else if (ch >= '0' && ch <= '9')			//ע�� Ҫ��'' �����ַ� ��ascll������
//		printf("shuzi");						//����''��ʾASCLL�� ���˱�ʾֵ
//	else if (ch < 32 )
//		printf("kongzhi");
//	else printf("qita");
//
//	return 0;
//}



//������  ������+ÿ�µ�һ�����ܼ�-1��%7
//int main()
//{
//
//	int i = 0,t,oridate=3;
//	printf("���������ڣ�");
//	scanf("%d", &i);				//ע�������������ȷ���
//	if (i < 1 || i>31)
//	{
//		printf("��������");
//			exit(0);
//	}
//	t = (i+oridate-1) % 7;
//	printf("2010��12������\n");
//	printf("---------------------------------\n");
//	printf("sun  mon  tue  wed  thu  fri  sat\n");
//	printf("---------------------------------\n");
//	switch(t)
//	{
//		case 0:
//			printf("%2d", i);			//ע����
//			break;
//		case 1:
//			printf("%7d", i);
//			break;
//		case 2:
//			printf("%12d", i);
//			break;
//		case 3:
//			printf("%17d", i);
//			break;
//		case 4:
//			printf("%22d", i);
//			break;
//		case 5:
//			printf("%27d", i);
//			break;
//		case 6:
//			printf("%32d", i);
//			break;
//		default:
//			printf("��������");
//			break;
//
//	}
//	return 0;
//}


//�Ƿ�������
//int main() 
//{
//	int a, b, c;
//	scanf("%d", &a);
//	if (a <= 0)
//	{
//		printf("�������");
//		exit(0);
//	}
//	if (a % 4 == 0 && a % 400 != 0 || a % 400 == 0)
//		printf("����");
//	else printf("��������");
//	return 0;
//}


//һԪ���κ�����ֵ
//int main()
//{
//	int a, b, c, d = 0;
//	double x1, x2,p,q;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a == 0)
//	{
//		printf("����һԪ���κ���");
//		exit(0);
//	}
//	d = b * b - 4 * a * c;
//	if (d == 0)
//	{
//		x1 = x2 = (-b) / (2 * a);
//		printf("%.2lf  %.2lf", x1, x2);
//	}
//	else if (d > 0)
//	{
//		x1 = ((-b) + sqrt(d)) / (2 * a);			//2a�Ƿ�ĸҪ�ӣ���
//		x2 = ((-b) - sqrt(d)) / (2 * a);
//		printf("%.2lf %.2lf", x1, x2);
//	}
//	else
//	{
//		p = (-b) / (2 * a);
//		q=sqrt(-d) / (2 * a);				//ע����-��
//	
//		printf("x1=%.2lf+%.2lfi", p, q);
//		printf("x2=%.2lf-%.2lfi", p, q);
//	}
//	return 0;
//}