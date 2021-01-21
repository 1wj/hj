#define _CRT_SECURE_NO_WARNINGS 1

#include"file.h"

int main() {
	int arr[3][5] = { 0 };

}


//1.全局变量的使用
//void sub();
//int a, b;
//int main()
//{
//	a = 3;
//	b = 4;
//	printf("全局变量：a=%d,b=%d\n", a, b);
//	sub();
//	int a = 1, b = 2;
//	printf("main函数：a=%d,b=%d\n", a, b);
//	return 0;
//}
//void sub()
//{
//	int a, b;
//	a = 6; b = 7;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
//	printf("sub函数：a=%d,b=%d\n",a,b);
//}


//2.静态局部变量的使用
//int fun(int, int);
//int main()
//{
//	int x = 5, y = 3, s, j;
//	for (j=0;j<3;j++)
//	{
//		s = fun(x, y);
//		printf("%d",s);
//	}
//	return 0;
//}
//int fun(int a,int b)
//{
//	static int n = 0, i = 2;
//	i = n + 1;
//	n = i + a - b;
//	return (n);
//}


//3.extern 声明外部变量
//void gx();
//void gy();
//int main()
//{
//	extern int x, y;
//	printf("1:x=%d,y=%d\n", x, y);
//	y = 246;
//	gx();
//	gy();
//	return 0;
//}
//
//void gx()
//{
//	extern int x, y;
//	x = 135;
//	printf("2:x=%d,y=%d\n", x, y);
//}
//int x, y;
//void gy()
//{
//	printf("3:x=%d,y=%d\n",x,y);
//}


//4.全局/外部函数和内部函数的使用
//int main()
//{
//	int a, b;
//	int result;
//	scanf("%d,%d",&a,&b);
//	result = multiply(a, b);
//	printf("两个数的乘积是：%d",result);
//	result = sum(a, b);
//	printf("两个数的和是:%d", result);
//	return 0;
//}



//5.判断绝对素数
//int prime(int x)
//{
//	int i, j;
//	for (i = 2; i < sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int rev(int x)
//{
//	int i, j=0;
//	while (x)
//	{
//		i = x % 10;
//		j = j * 10 + i;
//
//		x = x / 10;
//	}
//	return j;
//}
//int main()
//{
//	int i,j,flag1=1,flag2=1;
//	scanf("%d",&i);
//	flag1=prime(i);
//	if (flag1 == 1)
//	{
//		j = rev(i);
//		flag2 = prime(j);
//		if (flag2 == 1)
//			printf("%d是绝对素数", i);
//	}
//	printf("%d不是绝对素数", i);
//	return 0;
//}


//6.求两个正整数的最小公倍数
//int gcd(int x, int y);
//int hcd(int x, int y, int j);
//int main()
//{
//	int x, y, i,j;
//	scanf("%d%d", &x, &y);
//	i = gcd(x,y);		//最大公约数
//	j = hcd(x, y,i);		//最小公倍数
//	printf("最小公倍数是%d", j);
//	return 0;
//}
//int gcd(int x,int y)
//{
//	int r = 1;
//	while (r)
//	{
//		r = x % y;
//		x = y;
//		y = r;
//	}
//	return x;
//}
//int hcd(int x, int y, int j)
//{
//	return x * y / j;
//}


//7.求数列和 p134(4.17)
//double fsum(int n);
//int main()
//{
//	int  n;
//	double sum = 0;
//	scanf("%d", &n);
//	sum = fsum(n);
//	printf("%lf", sum);
//	return 0;
//}
//double fsum(int n)
//{
//	int i,j,s = 1;
//	double sum = 0, p = 0;
//	for (i=1;i<=n;i++)
//	{
//-----------------------------------------------  1. 二者选其一
//		p =0;
//		for (j=0;j<i;j++)
//		{
//			p = i*pow(10,j) +p; 
//		}
//------------------------------------------------ 2.
	//	p = i;
	//	for (j = 1; j <= i - 1; j++)
	//	{
	//		p = i * pow(10, j) + p;
	//	}
//------------------------------------------------
//		sum = sum + s*1.0/p;
//		s = -s;
//	}
//	return sum;
//}


//8.数位之和
//int h(int x)
//{
//	int i, j=0, k;
//	while (x)
//	{
//		i = x % 10;
//		j = j + i;
//		x = x / 10;
//	}
//	return j;
//}
//int main()
//{
//	int i, s;
//	scanf("%d",&i);
//	s = h(i);
//	printf("%d", s);
//	return 0;
//}

//9.一元二次方程
//void f1(int a,int b,int c)
//{
//	double x1, x2;
//	x1 = x2 = -b / (2 * a);
//	printf("%lf %lf", x1, x2);
//}
//void f2(int a, int b, int c,int i)
//{
//	double x1, x2;
//	x1 = (-b + sqrt(i)) / (2 * a);
//	x2 = (-b - sqrt(i)) / (2 * a);
//	printf("%.2lf %.2lf", x1, x2);
//	//写法不对
//	//double x1, x2;
//	//x1 = -b / (2 * a) + sqrt(i) / (2 * a);
//	//x2 = -b / (2 * a) - sqrt(i) / (2 * a);
//	//printf("%.2lf %.2lf", x1, x2);
//}
//void f3(int a, int b, int c,int i)
//{	
//	double p, q;
//	p = -b / (2 * a);
//	q = sqrt(-i) / (2 * a);
//	printf("%.2lf+%.2lfi ", p, q);
//	printf("%.2lf-%.2lfi ", p, q);
//}
//int main()
//{
//	int a, b, c, i;
//	scanf("%d%d%d", &a, &b, &c);
//	i = b * b - 4 * a * c;
//	if (i == 0)
//		f1(a,b,c);
//	else if (i>0)
//		f2(a, b, c,i); 
//	else if (i<0)
//		f3(a, b, c,i);
//	return 0;
//}


//10.勒让德多项式递归
//int p(int , int );
//int main()
//{
//	int i, n,x;
//	scanf("%d%d", &n,&x);
//	i=p(n,x);
//	printf("%d", i);
//	return 0;
//}
//int p(int n,int x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else if (n > 1)
//		return ((2 * n - 1) * x * p(n - 1,x) - (n - 1) * p(n - 2,x)) / n;
//}


//11.银行利息       利滚利滚利滚利  ------------------*********重要*********----------
//void rp(int m, int ju);
//int li(int m, int ju);
//int main()
//{
//	int m,ju;
//	scanf("%d %d", &m,&ju);
//	rp(m,ju);		
//	return 0;
//}
//void rp(int m,int ju)
//{
//	int i;
//	double a=0, b;
//	printf("-------------------------------\n");
//	printf("----季度------利息------余额----\n");
//	for (i=0;i<ju;i++)
//	{
//		a = li(m+a, ju);
//		printf("%4d %4.2lf %4.2lf", ju, a, a + m);
//		printf("-------------------------------\n");
//	}
//	
//}
//int li(int m,int ju)
//{
//	int i;
//	i = m * 5.3 * ju;
//	return i;
//}



//12.求值
//double he();
//int main()
//{	
//	printf("%lf", he());
//	return 0;
//}
//double he()
//{
//	int i=1;
//	double sum=0, p;
//	while (fabs((2 * i - 1) / (pow(2 * i, 2)))>1e-4)
//	{
//		p = (2 * i - 1) / (pow(2 * i, 2));
//		sum = sum + p;
//		i++;
//	}
//	return sum;
//}



//13. 给个数如5932 输入932
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fun(n));
//	return 0;
//}
//int fun(int n)
//{
//	int x, sum=0, p=1,i;
//	i = n;
//	while (n>9)
//	{
//	//	i = n % 10;
//		//sum = sum + p*i;
//		n = n / 10;
//		p = p * 10;	
//	}
//	return i%p;
//}

