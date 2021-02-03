#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1. 指针与一位数组
//从键盘输入10个数，以数组的不同引用形式输入输出数组各元素
//int main()
//{
//	int i, a[10], * p = a;
//	for (i=0;i<10;i++)
//	{
//		scanf("%d",/*&a[i]*/ /*&p[i]*/ /*p+i */ /* a+i*/);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",/*a[i]*/  /**(a+ i)*/ /*p[i]*/);
//	}
//	return 0;
//}


//2.利用指针输入输出数组
//int main()
//{
//	int i, a[10], * p = a;
//	for (i=0;i<3;i++)
//	{
//		scanf("%d",/*&a[i]*/ /*&p[i]*/ p++ /*p+i */ /* a+i*/);
//	}
//	p = a;   //输入完之后指针已经指向了第四个元素的让他回来
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",/*a[i]*/  /**(a+ i)*/*p++ /*p[i]*/);
//	}
//	return 0;
//}

//指针与二维数组
//3. 3个学生4门课 用指针输出某个学生的成绩
//#define N 3
//#define M 4
//int main()
//{
//	float a[N][M] = { {65,67,79,60},{80,87,90,81},{90,99,100,98} };
//	int i, j, k;
//	float (*p)[M] = *a;	
//	scanf("%d", &j);
//	for (i=0;i<M;i++)
//	{
//		printf("%6.2lf ", *(*(p + (j - 1)) + i));
//	}
//	return 0;
//}

//4. 利用指针法输入，输出二维数组各元素
//#define N 3
//#define M 4
//int main()
//{
//	int a[N][M] = { 0 };
//	int* p=a[0], i, j;
//	
//	for (i = 0; i < N; i++)
//	{
//		for (j=0;j<M;j++)
//		{
//			scanf("%d", p++);
//		}	
//	}
//	p = a[0];
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			printf("%d ", *p++);
//		}
//	}
//	return 0;
//}

//5.为了减少一次比较的次数用指针找最大值
//int max(int* p)
//{
//	int i,max = *p;
//	for (i=0;i<5;i++)
//	{
//		if (max < *p)
//		{
//			max = *p;
//		}
//		*p++;
//	}
//	return max;
//}
//int main()
//{
//	int a[5] = {1,2,3,4,5}, i;
//	int* p = a;
//	printf("%d ", max(p));
//	return 0;
//}


//6.  用指向数组的指针变量实现一位数组的由大到小的冒泡排序
//void sc(int *p)
//{
//	int i;
//	for (i=0;i<6;i++)
//	{
//		scanf("%d", p+i);
//	}
//}
//void sort(int *p)
//{
//	int i, j, te;
//	for (i = 0; i < 6-1; i++)
//	{
//		for (j = 0; j < 5 - i; j++)
//		{
//			if (*(p + j) > *(p + 1 + j))
//			{
//				te = *(p + j);
//				*(p + j) = *(p + 1 + j);
//				*(p + 1 + j) = te;
//			}
//		}
//	}
//}
//void out(int *p)
//{
//	int i;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int a[6];
//	sc(a);
//	sort(a);
//	out(a);
//	return 0;
//}

//7.m个学生n门成绩
//#define M 3
//#define N 4
//void sum(float(*p)[N], float* s)
//{
//	int i, j;
//	double sum=0;
//	for (i = 0; i < M; i++)
//	{
//		sum = 0;
//		for (j = 0; j < N; j++)
//		{
//			sum += *(*(p + i) + j);
//		}
//		*(s + i) = sum;
//		//*s++ = sum;
//	}
//}
//float ave(float *p)
//{
//	int i;
//	double eav=0;
//	for (i=0;i<M;i++)
//	{
//		eav += *(p + i);
//	}
//	return eav / M;
//}
//void pr(float(*p)[N], int a)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("%lf ",*(*(p+a)+i));
//	}
//	printf("\n");
//}
//int main()
//{
//	float a[M][N] = { {65,75,54,80},{78,90,89,76},{66,76,87,90} };
//	float sore[M],ret;
//	int i;
//	sum(a,sore);
//	ret=ave(sore);
//	for (i = 0; i < M; i++)
//	{
//		if (ret<=sore[i])
//		{
//			pr(a, i);
//		}
//	}
//	return 0;
//}


//8.  有问题
//#include<string.h>
//void sort(char * ptr[])
//{
//	int i, j;
//	/*char * temp=NULL;*/
//	char *temp;
//	temp = (char*)malloc(30);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3 - i; j++)
//		{
//			if (strcmp(*(ptr + j), *(ptr + 1 + j)) > 0)
//				/*	if (strcmp(ptr[j],ptr[j+1]) < 0)*/
//			{
//				//strcpy(temp, *(ptr+j));					//有问题不知道出在那
//				//strcpy(*(ptr + j), *(ptr + 1 + j));
//				//strcpy(*(ptr + 1 + j), temp);
//				strcpy(temp, ptr[j]);					//有问题不知道出在那
//				strcpy(*ptr[j], *ptr[j + 1]);
//				strcpy(ptr[j + 1], temp);
//				/*temp = *(ptr + j);
//				*(ptr + j) = *(ptr + j + 1);
//				*(ptr + j + 1) = temp*/;
//
//			}
//		}
//	}
//}
//int main()
//{
//	char* a[] = { "c program","c++ objiec","operating","data structure" };
//	int i;
//	sort(a);
//	for (i = 0; i < 4; i++)
//	{
//		printf("%s\n",*(a+i));
//	}
//	return 0;
//}


//9.
//int main()
//{
//	char* p1, * p2, * temp;
//	p1 = (char*)malloc(30);
//	p2 = (char*)malloc(30);
//	temp = (char*)malloc(30);
//	gets(p1);
//	gets(p2);
//	strcpy(temp, p1);
//	strcpy(p1, p2);
//	strcpy(p2, temp);
//	puts(p1);
//	puts(p2);
//	return 0;
//}

//10.字符串查找
//void sort(char* p[])
//{
//	char* temp;
//	int i, j,k;
//	for (i = 0; i < 4 - 1; i++)
//	{
//		k = i;
//		for (j = i; j < 4 - 1; j++)
//		{
//			if (strcmp(p[j],p[k])< 0)
//				k= j;
//		}
//		if (k != i)
//		{
//			temp = p[i];
//			p[i] = p[k];
//			p[k] = temp;
//		}
//	}
//}
//
//char* b_ser(char* a[], char* t)
//{
//	int le, ri, mid;
//	le = 0;
//	ri = 3;
//	while (le <= ri)
//	{
//		mid = (le + ri) / 2;
//		if (strcmp(a[mid], t) == 0)
//		{
//			return a[mid];
//		}
//		else if (strcmp(a[mid], t) < 0)
//		{
//			le = mid + 1;
//		}
//		else
//			ri = mid - 1;
//	}
//	return 0;
//}
//int main()
//{
//	char* a[4];
//	int i;
//	for (i=0;i<4;i++)
//	{
//		a[i] = (char*)malloc(20);
//		gets(a[i]);
//	}
//
//	printf("\n");
//	//排序
//	sort(a);
//	for (i = 0; i < 4; i++)
//	{
//		
//		printf("%s\n",a[i]);
//	}
//	//查找
//	char* t;
//	t = (char*)malloc(20);
//	printf("shuru :");
//	while (strcmp(gets(t), "end") != 0)
//	{
//		t = b_ser(a, t);
//		if (t)
//			printf("ok");
//		else
//			printf("no");
//		printf("\n");
//		printf("shuru :");
//		t = (char*)malloc(20);
//	}
//	return 0;
//}


//11. 用二级指针对二维数组的访问
//int main()
//{
//	char c[][30] = { "c program","c++ objiec","operating","data structure" };
//	char* cp[] = { c[0],c[1],c[2],c[3] };
//	char** cpp = cp;
//	int i;
//	for(i=0;i<4;i++)
//	{
//		printf("%s\n",*(cpp+i));
//	}
//	for (i = 0; i < 4; i++)
//	{
//		cpp = cp[i];
//		printf("%s\n", cpp);
//	}
//	return 0;
//}

//12 回调函数
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	return y;
//}
//int min(int x, int y)
//{
//	if (x > y)
//		return y;
//	return x;
//}
//int add(int x, int y)
//{
//	return x+y;
//}
//int pro(int a, int b, int(*p)(int, int))
//{
//	return (*p)(a, b);
//
//}
//int main()
//{
//	int i,a,b;
//	scanf("%d%d", &a, &b);
//	printf("max:%d\n", pro(a, b, max));
//	printf("min:%d\n", pro(a, b, min));
//	printf("add:%d\n", pro(a, b, add));
//	return 0;
//}


//13.定义三个整以及指向整数的指针仅用指针方法按有小到大的顺序输出
//int main()
//{
//	int a = 3, b = 1, c = 2;
//	int *pa=&a,*pb=&b,*pc=&c;
//	int i;
//	if (*pa > *pb)
//	{
//		i = *pa;
//		*pa = *pb;
//		*pb = i;
//	}
//	if (*pa > *pc)
//	{
//		i = *pa;
//		*pa = *pc;
//		*pc = i;
//	}
//	if (*pb > *pc)
//	{
//		i = *pb;
//		*pb = *pc;
//		*pc = i;
//	}
//	printf("%d%d%d", *pa, *pb, *pc);
//	return 0;
//}


//14. 输入10个数将最小值与第一个数对换最大值与最后一个数对换 函数都用指针
//void input(int* p)
//{
//	for ()
//	{
//		a;
//	}
//}
//void sort(int* a)
//{
//	int i, max = *a,min=*a;
//	int p1=0,  p2,t;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < *(a + i))
//		{
//			max = *(a + i);
//			p1 =  i;
//		}
//			
//		if (min > *(a + i))
//		{
//			min = *(a + i);
//			p2 =  i;
//		}		
//	}
//	if (p1 != 0)
//	{
//		t = *(p1 + a);
//		*(p1 + a) = *a;
//		*a = t;
//
//	}
//	if (p2 != 0)
//	{
//		t = *(p2 + a);
//		*(p2 + a) = *(a + 9);
//		*(a + 9) = t;
//	}
//	
//}
//int main()
//{
//	int i, a[10] = { 9,1,8,7,6,5,4,3,10,2};
//	//input(a);
//	sort(a);
//	for (i=0;i<10;i++)
//	{
//		printf("%d  ", a[i]);
//	}
//
//	return 0;
//}


//15.求字符串长度
//int  st(char *a)
//{
//	int count = 0;
//	while (*a++)
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = 0;
//	char a[81];
//	gets(a);
//	ret = st(a);
//	printf("%d",ret);
//	return 0;
//}


//16.参数用指针将一个3*3矩阵转置
//void sore(int (*p)[3],int(*t)[3])
//{
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			*(*(t + j) + i) = *(*(p + i) + j);
//		}
//	}
//}
//int main()
//{
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} },t[3][3];
//	int i, j;
//	sore(a,t);
//	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d",t[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

////16.用指针重构strcmp函数
//int st(char *s1,char* s2)
//{
//	/*while (*s1&&*s2)
//	{
//		if (*s1++ > *s2++)
//			return 1;
//		else if (*s1++ < *s2++)
//			return -1;
//	}
//	if (*s1 == 0 && *s2 == 0)
//		return 0;
//	if (*s1 == 0 && *s2 != 0)
//		return -1;
//	if (*s1 != 0 && *s2 != 0)
//		return 1;*/

//	while (*s1&&*s2&&(*s1==*s2))
//	{
//		s1++;
//		s2++;
//	}
//	return *s1 - *s2;
//}
//
//int main()
//{
//	int ret = 0;
//	char s1[] = "fsafb";
//	char s2[] = "fsafds";//da
//	ret = st(s1, s2);
//	//ret=strcmp(s1, s2);
//	if (ret < 0)
//		printf("s2");
//	else if (ret > 0)
//		printf("s1");
//	else
//		printf("yiyang");
//}

//17.指针验证回文数 level 是 123321不是
//int bj(char* a)
//{
//	int sz = strlen(a), i;
//	if (sz % 2 == 0)
//		return 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		if (*(a + i) != *(a + sz - 1 - i))
//			return 0;
//	}
//}
//	return 1;
//}
//int bj(char* a)
//{
//	char *p,*q;
//	p = a;
//	while (*a)
//		a++;
//	q = a;
//	q = q - 1;
//	while (p <= q)
//	{
//		if (*p != *q)
//			return 0;
//		p++;
//		q--;
//	}
//	return 1;
//}
//int main()
//{
//	int ret=0;
//	char a[30];
//	gets(a);
//	ret=bj(a);
//	if ( ret )
//		printf("shi");
//	else 
//		printf("bushi");
//	
//	return 0;
//}


//17.指针去星 ****A*BC*DEF*G*****  结果为****ABCDEFG
//void qx(char* s)
//{
//	char* p;
//	p = s;
//	while (*s == '*')
//		s++;
//	p = s;
//	while (*p )
//	{
//		if(*p!='*')
//		*s++ = *p;
//		p++;
//	}
//	*s = '\0';
//	
//}
//int main()
//{
//	char s[] = "****A*BC*DEF*G*****";
//	qx(s);
//	puts(s);
//	return 0;
//}
#include<string.h>
int main()
{
	char a[20];
	gets(a);
	puts(a);
}