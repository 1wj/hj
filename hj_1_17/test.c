#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//1.银行利率
//int main()
//{
//	int year, money,rate=0;
//	double total=0;
//	scanf("%d%d", &year,&money);
//	switch (year)
//	{
//	case 1:
//		rate = 2.25;
//		break;
//	case 2:
//		rate = 2.79;
//		break;
//	case 3:
//		rate = 3.33;
//		break;
//	case 5:
//		rate = 3.60;
//		break;
//	case 8:
//		rate = 4.14;
//		break;
//	default:
//		break;
//	}
//	total = rate * money * year + money;
//	printf("%lf", total);
//	return 0;
//}


//2.输入年份和月份，求该月天数
//int main()
//{
//	int year,month;
//	int day = 0;
//	scanf("%d%d", &year,&month);
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//		day = 31;
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		day = 30;
//		break;
//	case 2 :
//			day = 28;
//	}
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		day += 1;
//	printf("%d", day);
//	return 0;
//}


//3.统计最低分 最高分
//int main()
//{
//	int grade = 0,min=100,max=0,count=0;
//	double sum = 0,avg=0;
//	
//	while (1) 
//	{
//		scanf("%d", &grade);
//		if (grade < 0)
//			break;
//		sum += grade;
//		count++;
//		if (max < grade)
//			max = grade;
//
//		if (min > grade)
//			min = grade;
//		
//	}
//	avg = sum / count;
//	printf("%d  %.2lf   %d", max, avg, min);
//	return 0;
//}


//4.反位数
//int main()
//{
//	int i,g;
//	double sum = 0;
//	scanf("%d", &i);
//	if (i < 0)
//	{
//		printf("cuowu");
//		exit(0);
//	}
//	while (i)
//	{
//		g = i % 10;
//		sum = sum * 10 + g;
//		i = i / 10;
//	}
//	printf("%.0lf", sum);
//	return 0;
//}


//5.辗转相除法
//int main()
//{
//	int i,j=1,k;
//	scanf("%d%d", &i,&k);
//	while (j)
//	{
//		j = i % k;
//		i = k;
//		k = j;
//
//	}
//	printf("%d", i);
//}


//6.求阶乘和
//int main()
//{
//	int i, j=1,n;
//	double sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = j * i;
//		sum += j;
//	}
//	printf("%.0lf",sum);
//	return 0;
//}



//7.素数
//int main()
//{
//	int i,j=0;
//	scanf("%d", &j);
//	for (i = 2; i < sqrt(j);i++)
//	{
//		if (j % i == 0)
//			
//			break;
//	}
//	if (i >= sqrt(j) && j > 1)
//		printf("是素数");
//	else printf("不是素数");
//	return 0;
//}




//8.水仙花
//int main()
//{
//	int i, j,k,l,n;
//	
//	for(i=100;i<=999;i++)
//	{
//		j = i % 10;			//个位
//		k = (i / 10)%10;
//		l = (i / 100);
//		if (i == j * j*j +k* k * k +l* l * l)
//			printf("  %d  ",i);
//	}
//	return 0;
//}




//9. 99乘法表
//int main()
//{
//	int i, j;
//	printf("----------------------------------------\n");
//	printf(" ");
//	for (i = 1; i <=9; i++)
//	{
//		
//		printf("%4d",i);
//	}
//	printf("\n--------------------------------------\n");
//	for (i=1;i<=9;i++) 
//	{
//		printf("%d", i);
//		for (j=1;j<=9;j++) 
//		{
//			printf("%4d",i*j);
//
//		}
//		printf("\n");
//	}
//}



//10.百元买百鸡
//int main()
//{
//	int i, j, k=0;
//	for (i=1;i<=19;i++)
//	{
//		for (j=1;j<=31;j++)
//		{
//			k =100-i-j;
//			if (i+j+k==100&&5*i+3*j+0.5*k==100)
//				printf("%d %d %d \n",i,j,k);
//		}
//	}
//
//	return 0;
//}


//11.不能被3整除的数
//int main() 
//{
//	int i, j=0;
//	for (i=100;i<=200;i++)
//	{
//		if (i%3==0)
//			continue;
//		j++;
//		printf("%d  ",i);
//		if (j % 16 == 0)
//			printf("\n");
//	}
//}


//12.求圆面积
//int main()
//{
//	int r, i;
//	double s = 0;
//	for (i=1;i<10;i++)
//	{
//		s = 3.14 * i * i;
//		if (s > 100)
//			break;
//		printf("%6.2lf  ",s);
//	}
//	return 0;
//}


//13.哥巴赫猜想
//int main()
//{
//	int n,p=2,q=0,i,j=0;
//	int f1 ,f2 ;
//	scanf("%d", &n);
//	
//	while (p < n)
//	{
//		f1 = 1;
//		for (i = 2; i <= sqrt(p); i++)			//判断p是否是素数
//		{
//			if (p % i == 0)
//			{
//				f1 = 0;
//				break;
//			}
//		}
//
//		q = n - p;
//		if (f1 == 1)							//	如果p是素数再看q是否是素数
//		{
//
//			f2 = 1;
//			for (j = 2; j <= sqrt(q); j++)
//			{
//				if (q % j == 0)
//				{
//					f2 = 0;
//					break;
//				}
//
//			}
//			if (f2 == 1&&q>1)
//			{
//				printf("%d=%d+%d  ", n, p, q);
//			}
//		}
//		p++;
//
//	}
//	return 0;
//}


//14.斐波那契数列
//void f()
//{
//	int i,f1=1,f2=1,j=0;
//	for (i=1;i<=20;i++)
//	{
//		printf("%12d  %12d", f1, f2);
//		if (i % 2 == 0)
//			printf("\n");
//		f1 = f1 + f2;
//		f2 = f2 + f1;
//	}
//}
//int main() 
//{
//	f();
//}



//15.判断回文数
//int main() 
//{
//	int k, i, j=0,sum=0;
//	scanf("%d",&i);
//	if (i < 0)
//	{
//		printf("数据错误");
//		exit(0);
//	}
//	k = i;
//	while (i)
//	{
//		j = i % 10;
//		sum = sum * 10 + j;
//		i = i / 10;
//	}
//	if (k == sum)
//		printf("%d是回文数",k);
//	else
//		printf("%d不是回文数", k);
//	return 0;
//}



//16.分数数列求和
//int main()
//{
//	int i, s = 1, f1=2,f2=1,t;
//	double p=0, sum = 0;
//	for (i=0;i<20;i++)
//	{
//		//t = f1;  中间变量也行
//		p=f1*1.0 / f2;
//		sum = sum + s*p;
//		s = -s;	
//		f1 = f1 + f2; 
//		f2 = f1-f2;  //点睛之笔
//	}
//	printf("%.4lf",sum);
//	return 0;
//}


//17.牛顿迭代求高次方程的根   不会  abs 是对整数 fabs 是对浮点数 不然就没有后面小数了
//int main()
//{
//	double x1 = 1.5,x0,f1,f2;
//	double e;
//	scanf("%lf",&e);
//	do {
//		x0 = x1;
//		f1 = 2 * x0 * x0 * x0 - 4 * x0 * x0 + 3 * x0 + 6;
//		f2 = 6 * x0 * x0 - 8 * x0 + 3;
//		x1 = x0 - f1 / f2;
//	} while (fabs(x1 - x0) >=e);
//	printf("%.4lf",x1);
//	return 0;
//}
//


//18.小偷  很好玩的一提
//int main()
//{
//	int a, b, c, d, n;
//	for (a=0;a<=1;a++)
//	{
//		for (b=0;b<=1;b++)
//		{
//			for (c=0;c<=1;c++)
//			{
//				for (d=0;d<=1;d++)
//				{
//					if (a+b+c+d==1 && ((!b&&d)||(b&&!d))==1 && ((!b&&c)||(b&&!c))==1 && ((!a&&b)||(a&&!b))==1 && (d||!d)==1 )
//					{
//						if (a == 1)
//							printf("甲");
//						else if (b == 1)
//							printf("乙");
//						else if (c== 1)
//							printf("丙");
//						else if (d == 1)
//							printf("丁");
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
