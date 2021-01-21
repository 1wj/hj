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



//猜数字
//void menu()
//{
//	printf("********************************\n");
//	printf("*****猜数字***1.开始*****0.结束**\n");
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
//		printf("请输入你猜测得数 ");
//		scanf("%d", &guess);
//		if (guess < get)
//			printf("小了");
//		else if (guess > get)
//			printf("大了");
//		else
//		{
//			printf("猜对了 为 %d", get);
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play();
//			break;
//		case 0:
//			printf("游戏结束！\n");
//			break;
//		default:
//			printf("输入错误！重新选择\n");
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
//		printf("字母");
//	else if (ch >= '0' && ch <= '9')			//注意 要加'' 数字字符 和ascll码区别
//		printf("shuzi");						//不加''表示ASCLL码 加了表示值
//	else if (ch < 32 )
//		printf("kongzhi");
//	else printf("qita");
//
//	return 0;
//}



//算日期  （日期+每月第一天是周几-1）%7
//int main()
//{
//
//	int i = 0,t,oridate=3;
//	printf("请输入日期：");
//	scanf("%d", &i);				//注意日期输入的正确与否
//	if (i < 1 || i>31)
//	{
//		printf("日期有误");
//			exit(0);
//	}
//	t = (i+oridate-1) % 7;
//	printf("2010年12月日历\n");
//	printf("---------------------------------\n");
//	printf("sun  mon  tue  wed  thu  fri  sat\n");
//	printf("---------------------------------\n");
//	switch(t)
//	{
//		case 0:
//			printf("%2d", i);			//注意间隔
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
//			printf("日期有误");
//			break;
//
//	}
//	return 0;
//}


//是否是闰年
//int main() 
//{
//	int a, b, c;
//	scanf("%d", &a);
//	if (a <= 0)
//	{
//		printf("年份有误");
//		exit(0);
//	}
//	if (a % 4 == 0 && a % 400 != 0 || a % 400 == 0)
//		printf("润年");
//	else printf("不是闰年");
//	return 0;
//}


//一元二次函数求值
//int main()
//{
//	int a, b, c, d = 0;
//	double x1, x2,p,q;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a == 0)
//	{
//		printf("不是一元二次函数");
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
//		x1 = ((-b) + sqrt(d)) / (2 * a);			//2a是分母要加（）
//		x2 = ((-b) - sqrt(d)) / (2 * a);
//		printf("%.2lf %.2lf", x1, x2);
//	}
//	else
//	{
//		p = (-b) / (2 * a);
//		q=sqrt(-d) / (2 * a);				//注意是-的
//	
//		printf("x1=%.2lf+%.2lfi", p, q);
//		printf("x2=%.2lf-%.2lfi", p, q);
//	}
//	return 0;
//}