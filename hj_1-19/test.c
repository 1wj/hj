#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include"add.h"

//int mys(char* a)
//{
//	if (*a != '\0')
//	{
//		return 1+mys(++a);
//	}
//	else return 0;
//}
//
//int main()
//{
//	char a[] = "bit";
//	int i;
//	i = mys(a);
//	printf("%d", i);
//}


//课堂随笔
//int main()
//
//{
//	char arr[] = "hello bit";
//	memset(arr, 'a', 5);
//	printf("%s\n",arr);
//	printf("%d", add(1, 2));
//}




//1.分段函数
//int main()
//{
//
//	int i,n;
//	scanf("%d", &n);
//	i = n < 1 ? n : ((n < 10 && n >= 1) ? (2 * n - 11) : (3 * n - 11));
//	printf("%d",i);
//	return 0;
//}


//2.3个数找最小
//int main()
//{
//	int i, j,t=0 ,k;
//	scanf("%d%d%d",&i,&j,&k);
//	if (i<=j)
//	{
//		t = i;
//		i = j;
//		j = t;
//	}
//	if (i <= k)
//	{
//		t = i;
//		i = k;
//		k = t;
//	}
//	if (j <= k)
//	{
//		t = j;
//		j = k;
//		k = t;
//	}
//	printf("%d %d %d",i,j,k);
//	return 0;
//}


//3.输入年月日判断是这年的第几天
//int main() 
//{
//	int y, m, d ,date=0;
//	scanf("%d%d%d",&y,&m,&d);
//	switch (m-1) 
//	{
//		case 1:
//			date = date + 31;
//			break;
//		case 2:
//			date = date + 31 + 28;
//			break;
//		case 3:
//			date = date + 31 + 28 + 31;
//			break;
//		case 4:
//			date = date + 31 + 28 + 31 + 30;
//			break;
//		case 5:
//			date = date + 31 + 28 + 31 + 30 + 31;
//			break;
//		case 6:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30;
//			break;
//		case 7:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30 + 31;
//			break;
//		case 8:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
//			break;
//		case 9:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
//			break;
//		case 10:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
//			break;
//		case 11:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
//			break;
//		case 12:
//			date = date + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30+31;
//			break;
//
//	}
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		if (m > 2)
//			date += 1;
//	printf("%d",date+d);
//	return 0;
//}


//4. 一串字符串中小写变大写
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (ch <= 'z' && ch >= 'a')
//			ch -= 32;
//		printf("%c",ch);
//	}
//	return 0;
//}



//5.一个正整数的所有素因子
//int main()
//{
//	int i, j, n,y=0;
//	scanf("%d",&n);
//	for(j=2;j<n;j++)
//	{
//		if (n % j == 0)
//		{	 
//			for (i = 2; i <= sqrt(j); i++)
//			{
//				if (j % i == 0)
//					break;
//			}
//			if (i > sqrt(j)&&j>1)
//				printf(" %d ",j);
//		}
//	}
//	return 0;
//}


//6. a+aa+aaa+...
//int main()
//{
//	int a, i, sum = 0,p;
//	scanf("%d", &a);
//	p = 0;
//	for (i=0;i<a;i++)
//	{	
//		p = p * 10 + a;
//		sum += p;	
//	}
//	printf(" %d ",sum);
//	return 0;
//}


//7.九头鸟 百头百脚
//int main()
//{
//	int i, j, k, sum = 0;
//	int a, b, c;
//	for (a=1;a<=10;a++)
//	{
//		for (b=1;b<=47;b++)
//		{
//			for (c=1;c<=24;c++)
//			{
//				if ((9 * a + b + c == 100) && (2 * a + 2 * b + 4 * c == 100))
//					printf("%d %d %d\n",a,b,c);
//			}		
//		}
//	}	
//	return 0;
//}

// 8. 求值 p106 10  第一项不会求               厉害多看看很强
//int main()
//{
//	int n=2, i, s =-1,x;
//	double sum = 0,p ,q,eps,f;
//	scanf("%d%lf", &x,&eps);
//	q = x;
//	do
//	{
//		q = q * (2 * (n - 1) - 1) / (2 * (n - 1)) *x * x;
//		p =  q/( 2 * n);
//		sum = sum +  p * s;
//		n++;
//	} while (q*p>=eps);
//	sum += x;
//	return 0;
//}

//9. 一个数字的所有奇数数字按原来的顺序组成一个新的数     强
//int main()
//{
//	int i, j=0,sum = 0,p=1;
//	scanf("%d", &i);
//	while (i)
//	{
//		j = i % 10;
//		if (j%2==1)
//		{			
//			sum = sum+j*p;				//6666    sum=j*p+sum 看的舒服点
//			p = p * 10;					//666666
//		}
//		i = i / 10;
//	}
//	printf("%d",sum);
//	return 0;
//}




//--------------------函数 ---------------------------------------------------------------------
//10.4个数求最大公约数
//int gcd(int x,int y)
//{
//	int i=0;
//	do
//	{
//		i = x % y;
//		x = y;
//		y = i;
//	}while (i);
//	return x;
//}
//int main()
//{
//	int a, b, c, d,m;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	m=gcd(d,gcd(c,gcd(a,b)));
//	printf("%d",m);
//	return 0;
//}


//11.版本不同 进入的也不同
//int l(int x,int y)
//{
//	int i,p=1;
//	for (i=0;i<y;i++)
//	{
//		p = p * x;
//	}
//	return p;
//}
//int main()
//{
//	int n,d;
//	scanf("%d", &n);
//	d = l(n--, n);
//	printf("%d",d);
//}


//12.迭代
//double ld(int x, double e)
//{
//	double x0 = 1;
//	while (fabs(x0 * x0 - x) >= e)
//	{
//		x0 = (x0 + x / x0) / 2;
//	}
//	return x0;
//}
//int main()
//{
//	int x;
//	double e,x0;
//	scanf("%d%lf",&x,&e);
//	x0=ld(x,e);
//	printf("%lf",x0);
//	return 0;
//}


//13.递归求阶乘
//int mul(int x)
//{
//	if (x > 1)
//		return x* mul(x - 1);
//	else  return 1;
//}
//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	m=mul(n);
//	printf("%d", m);
//}


//14.汉诺塔										数据结构比掌握的
//void han(int x, char a, char b, char c);
//void yd(int x, char a, char c);
//void han(int x,char a,char b,char c) 
//{
//	if (x == 1)
//		yd(x,a,c);
//	else 
//	{
//		han(x - 1, a, c, b);
//		yd(x, a, c);
//		han(x - 1, b, a, c);
//	}
//	
//}
//void yd(int x,char a,char c)
//{
//	printf("%d:%c->%c\n",x,a,c);
//}
//int main()
//{
//	int x, i, n;
//	scanf("%d",&n);
//	han(n,'A','B','C');
//	return 0;
//}