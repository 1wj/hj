#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//�������
//int main() {
//	/*int a = 0, b = 1, c = 3, d;
//	d = (a>b,b=b+3,c=b+2);*/
//	char a = 60;
//	char c, b = 5;
//	c = a + b;
//	printf("%c",  c);
//}

//1. ����������¼��10���������
//int main()
//{
//	int i, j[10];
//	for (i=0;i<10;i++)
//	{
//		scanf("%d", &j[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", j[i]);
//	}
//	return 0;
//}


//2. 10��������Լ������������
//int main()
//{
//	int arr[30];
//	int i, j,count=0;
//	for (i=2;i<10;i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			if (i % j == 0)
//				arr[count++]=j;
//		}		
//	}
//	for (i = 0; i <count; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}


//3. ������װͶƱ
//int main()
//{
//	int j[10] = {0}, arr[51] = { 0 }, i = 0, flag = 1;
//	while (flag)
//	{
//		for (i = 0; i < 10; i++)
//		{
//			scanf("%d", &j[i]);
//			if (j[i] == -1)
//			{
//				flag = 0;
//				break;
//			}	
//			arr[j[i]]++;
//		}
//		flag = 0;
//	}
//	for (i = 1; i < 51; i++)
//	{
//		if(arr[i]>0)
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}


//4. ��N�����������ֵ����Сֵ
//#define N 10
//int main()
//{
//	int i, min ,max, arr[N];
//	for(i=0;i<N;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	min = max = arr[0];
//	for (i = 0; i < N; i++)
//	{
//		if (max < arr[i]) max = arr[i];
//		if (min > arr[i]) min = arr[i];
//	}
//		printf("���ֵ��%d",max);
//		printf("��Сֵ��%d", min);
//	return 0;
//}



//5.������ ����쳲�������ǰ20��Ӵ�С���
//void fib(int arr[], int x)
//{
//	int i = 1, j = 0;
//	arr[0] = 1;
//	arr[1] = 1;
//	for (i=2;i<x;i++)
//	{
//		arr[i] = arr[i - 2] + arr[i - 1];
//	}
//
//	//���̫������  û������ļ�
//	//while (i <= x)
//	//{
//	//	if (i == 1)
//	//		arr[j++] = 1;
//	//	else if (i == 2)
//	//		arr[j++] = 1;
//	//	else
//	//		arr[j++] = arr[j - 2] + arr[j - 1];
//	//	i++;
//	//}
//}
//int main()
//{
//	int i, arr[20] = { 0 };
//	fib(arr, 20);
//	for (i = 19; i >= 0; i--)
//	{
//		printf(" %d ", arr[i]);
//		if ((20-1-i)% 6 == 5)
//			printf("\n");
//	}
//	return 0;
//}


//6. ����ָ��Ԫ��
//int sec(int arr[], int x, int i)
//{
//	int j;
//	for (j=0;j<x;j++)
//	{
//		if (arr[j] == i)
//			return j;
//	}
//	return -1;
//
//}
//int main()
//{
//	int i, y,arr[5] = { 1,2,3,4,5 };
//	scanf("%d", &i);
//	y=sec(arr, 5,i);
//	if (y == -1)
//		printf("������\n");
//	else
//		printf("%d",y);
//	return 0;
//}


//7.��һ��������β��ת�洢�����
//void inv(int arr[], int x)
//{
//	int i,temp=0;
//	for (i = 0; i < x / 2; i++)
//	{
//		temp = arr[i];
//		arr[i] = arr[x - i-1];
//		arr[x - i - 1] = temp;
//	}
//		
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 }, i;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	inv(arr, 5);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}


//8. �������ǰ10����ѡ��
//void mp(int arr1[], int x);
//int main()
//{
//	int arr[10] = { 0 }, arr1[51] = { 0 }, i,flag=1;
//
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] == -1)
//		{
//			break;
//		}
//		arr1[arr[i]]++;
//	}
//	mp(arr1, 51);
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ",arr1[i]);
//	}
//	return 0;
//}
//void mp(int arr1[], int x)
//{
//	int i, j,temp=0;
//	for (i = 0; i < x-1; i++)
//	{
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (arr1[j] < arr1[j + 1])
//			{
//				temp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = temp;
//			}
//		}
//	}
//}


//9.�ϲ��ɼ��������鲢����
//void sort(int arr[], int x);
//void hb(int arr1[], int arr2[], int arr3[], int x, int y);
//int main()
//{
//	int i, arr1[5] = { 98,64,75,91,55 }, arr2[4] = { 90,58,84,61 }, arr3[9] = {0};
//	printf("δ����֮ǰ\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf(" %d ",arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf(" %d ", arr2[i]);
//	}
//	printf("\n");
//	sort(arr1, 5);
//	sort(arr2, 4);
//	printf("����֮��\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf(" %d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf(" %d ", arr2[i]);
//	}
//	printf("\n");
//
//	hb(arr1, arr2, arr3, 5, 4);
//
//	printf("�ϲ�֮��\n");
//	for (i = 0; i < 9; i++)
//	{
//		printf(" %d ", arr3[i]);
//	}
//	return 0;
//}
//void sort(int arr[], int x)
//{
//	int i, j,temp=0;
//	for (i = 0; i < x-1; i++)
//	{
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//
//}
//void hb(int arr1[], int arr2[], int arr3[], int x, int y)
//{
//	int i=0, j=0,k=0;
//	while (i<x && j<y)
//	{
//
//			if (arr1[i] >= arr2[j])
//				arr3[k++] = arr1[i++];
//			else 
//				arr3[k++] = arr2[j++];
//
//	}
//	while (i < x)
//		arr3[k++] = arr1[i++];
//	while (j < y)
//		arr3[k++] = arr2[i++];
//}


//10. ʵ�־�������������
//int main()
//{
//	int i,j,a[3][4] = { 0 };
//	for (i=0;i<3;i++)
//	{
//		for (j=0;j<4;j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//11.ʵ�־���ļӷ��˷�����ת��
//#define M 3
//#define N 2
//void add(int a[][N], int b[][N], int c[][N]);
//void transpose(int a[][N], int s[][M]);
//void product(int a[M][N], int s[N][M], int t[M][M]);
//int main()
//{
//	int i,j,a[M][N] = { 1,2,3,4,5,6 }, b[M][N] = { 1,2,3,4,5,6 }, c[M][N],s[N][M],t[M][M];
//	add(a,b,c);
//	transpose(a, s);
//	product(a, s, t);
//
//	printf("��\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%4d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	printf("ת��\n");
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			printf("%4d ", s[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	printf("��\n");
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < M; j++)
//		{
//			printf("%4d ", t[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//
//}
//void add(int a[][N], int b[][N], int c[][N])  //�ӷ�
//{
//	int i, j;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//	}
//
//}
//void transpose(int a[][N], int s[][M])  //ת��
//{
//	int i, j;
//	for (i=0;i<M;i++)
//	{
//		for (j=0;j<N;j++)
//		{
//			s[j][i] = a[i][j];
//		}
//	}
//}
//void product(int a[M][N], int s[N][M], int t[M][M])
//{
//	int i, j, k;
//	for (i=0;i<M;i++)
//	{
//		for(k=0;k<M;k++)
//		{
//			for (j=0;j<N;j++)
//			{
//				t[i][k] = a[i][j] * s[j][k];
//			}
//		}
//
//	}
//
//}



//12. ͶƱ�������棩
//px(int a[][2], int x);
//int main()
//{
//	int a[51][2] = {0}, b[10];
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &b[i]);
//		if (b[i] == -1)
//			break;
//		a[b[i]][0] = b[i];
//		a[b[i]][1]++;
//	}
//	px(a, 51);
//	for (i = 0; i < 10; i++)
//	{
//		if(a[i][2]>0)
//			printf("��ţ�%d Ʊ����%d", a[i][0], a[i][1]);
//		printf("\n");
//	}
//	return 0;
//}
//px(int a[][2], int x)
//{
//	int i, j, b[1][2] = {0};
//	int d;
//	for (i = 0; i < x - 1; i++)
//	{
//		for (j = 0; j < x - 1 - i; j++)
//		{
//			if (a[j][1] < a[j + 1][1])
//			{
//				b[0][0] = a[j][0];
//				a[j][0] = a[j + 1][0];
//				a[j + 1][0] = b[0][0];
//
//				b[0][1] = a[j][1];
//				a[j][1] = a[j + 1][1];
//				a[j + 1][1] = b[0][1];
//				/*d = a[j][0];
//				a[j][0] = a[j + 1][0];
//				a[j + 1][0] = d;
//
//				d = a[j][1];
//				a[j][1] = a[j + 1][1];
//				a[j + 1][1] = d;*/
//			}
//		}
//	}
//}


//13.ͳ��һ�������м���Ӣ�ĵ���   //������ ����ȿո�Ͷ���һ��
//int main()
//{
//	char a[81],c;
//	int count=0,i=0,j,flag=1;
//	while ((a[i++] = getchar()) != '\n');
//		a[i-1] = '\0';
//	for (i = 0; (c=a[i])!='\0'; i++)
//	{	
//		if (a[i] == ' ')
//			flag = 0;
//		else if (flag == 0)
//		{
//			flag = 1;	
//			count++;
//		}
//	}
//	printf("%d",count+1);
//	return 0;
//}


//14.  ɾ��ǰ���*
//int main()
//{
//	char a[] = { "****A*BC*DEF*G*******" };
//	int i=0,j;
//	while (a[i] == '*')
//	{
//		i++;
//	}
//	j = i;
//	for (i=0; a[i] != '\0'; i++)
//	{
//		a[i] = a[j++];
//	}
//	printf("%s", a);
//}


//15.����mѧ��n�γ̵��ܳɼ�ÿ���˵�ƽ���� ��߷� ��ͷ� �;���
//#define M 100
//#define N 3
//int main()
//{
//	int a[M][N+1] = { 0 };
//	int i, j,min=100,max=0,count=0;
//	double avg=0;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", a[i][j]);
//			a[i][N] += a[i][j];
//			if (min > a[i][j]) min > a[i][j];
//			if (max < a[i][j]) max = a[i][j];
//		}
//	}
//	for (i = 0; i < M; i++)
//	{
//		avg += a[i][N];
//	}
//	avg = avg / M;
//	for (i = 0; i < M; i++)
//	{
//		if (a[i][N] > avg)
//			count++;
//	}
//	printf("%d %d", avg, count);
//	printf("%d %d", max, min);
//	return 0;
//}


//16. ��֤ɸ��6������ֵĸ�����ͬ
//int main()
//{
//	int i, a[6][2] = {0}, x;
//	srand((unsigned)time(NULL));
//
//
//	for (i=0;i<200;i++)
//	{
//		x = rand() % 6 + 1;
//		a[x-1][0] = x;
//		a[x-1][1]++;
//	}
//	for (i = 0; i < 6; i++)
//	{
//		printf(" %d %d %.2lf\n",a[i][0], a[i][1], a[i][1]/200.0);
//	}	
//	return 0;
//}


//17.ͳ���Ӵ�b��ĸ���г��ֵĴ���    //���ݽṹ
//int main()
//{
//	char a[50], b[5];
//	int i,j,k,count = 0;
//	/*printf("����ĸ����");
//	scanf("%s", a);
//	printf("�����Ӵ���");
//	scanf("%s", b);*/
//	gets(a);
//	gets(b);
//	for (i = 0; a[i] !=0; i++)
//	{
//		j = i;
//		for (k = 0; b[k] == a[j++] && k < strlen(b); k++);	//k���ִ�
//			//j++;
//		if (b[k] == '\0')
//			count++;
//	}
//	printf("%d",count);
//	return 0;
//}

//18.��ת N*N�ľ���
//#define N 3
//void vort(int a[N][N], int b[][N], int x);
//int main()
//{
//	int a[N][N] = { 0 },b[N][N] = {0};
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	vort(a,b, N);
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void vort(int a[][N], int b[][N],int x)
//{
//	int i, j;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < x; j++)
//		{
//			b[i][j] = a[x - 1 - j][i];
//		}
//	}
//}
