#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1. ��3�����������ɵ������Ϊ ���������ַ���������
//#define N 3
//#define M 10
//void sort(char arr[][M], int x);
//int main()
//{
//	int  i;
//	char arr[N][M] = { 0 };
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s", arr[i]);
//	}
//	sort(arr, N);
//	for (i = 0; i < N; i++)
//	{
//		printf("%s", arr[i]);
//	}
//	return 0;
//}
//void sort(char arr[][M], int x)
//{
//	int i,j;
//	char a[M] = {0};
//	for (j = 0; j < x-1; j++)
//	{
//		for (i = 0; i < x - 1 - j; i++)
//		{
//			if (strcmp(arr[i], arr[i + 1]) < 0)
//			{
//				strcpy(a, arr[i]);
//				strcpy(arr[i], arr[i + 1]);
//				strcpy(arr[i + 1], a);
//			}
//		}
//	}
//}

//2. ��ѭ����a[3][4]�ĵ�һ��������жԵ�
//#define M 3
//#define N 4
//int main()
//{
//	int a[M][N] = { 0,2,9,7,5,13,6,8,27,11,1,3 }, i,j,t;
//	for (i=0,j=0;j<N;j++)
//	{
//		t = a[i][j];
//		a[i][j]=a[i+2][j];
//		a[i+2][j] = t;
//	}
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3. �ñ����ʾ������
//#define N 6
//int main()
//{
//	int i, j, a[N][N] = { 0 };
//
//	for (i=0;i<N;i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i >= j)
//			{
//				a[i][j] = i+1-j;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4. ���Ϲվ���
//#define N 5
//#include<stdlib.h>
//int main()
//{
//	int a[N][N], i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i <= j)
//				a[i][j] = i + 1;
//			else 
//				a[i][j] = j + 1;
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}


//5.���ξ���
//int main() 
//{
//	int a[6][6], n, t, f, i, j;
//	scanf("%d", &n);
//	f = -1; 
//	i = 1;
//	j = n;
//	for (t = 1; t <= n * n; t++)
//	{
//		a[i][j] = t;
//		i = i + f;
//		j = j + f;
//		if (i<1 || i>n || j<1 || j>n)
//			f = -f;
//		if (j < 1)		//���Խ��
//		{
//			i = i + 2;
//			j = 1;
//		}
//		else if (i < 1)		//�ϱ�Խ��
//		{
//			i = 1;
//		}
//		else if (i > n)		//�±�Խ��
//		{
//			i = n;
//			j = j - 2;
//		}
//		else if (j > n)		//�ұ�Խ��
//		{
//			j = n;
//		}
//
//	}
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <=n; j++)
//		{
//			printf("%10d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//6. ���뼸�������������ֵ����Сֵ��λ�� ����ӡ
//int main()
//{
//	int max=0, min=100, a[5],i,j,k;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &a[i]);
//		if (max < a[i])
//		{
//			max = a[i];
//			j = i;
//		}
//		if (min > a[i])
//		{
//			min = a[i];
//			k = i;
//		}
//	}
//	i = a[j];
//	a[j] = a[k];
//	a[k] = i;
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//7.  һ��������ͳ��ָ���ַ��ĸ���   ����Ҫ*******************
//#define M 81
//#define N 8
//int main()
//{
//	int  i, j,k,count=0;
//	char a[M], b[N];
//	gets(a);
//	gets(b);
//		for (i = 0; i < M; i++)
//		{
//			j = i;
//			for (k = 0; a[j] == b[k] && k < sizeof(b); k++)
//				j++;
//			if (b[k] == '\0')
//				count++;
//		}
//		printf("%d", count);
//	return 0;
//}



//8.ɾ****sdfsdf*sdfds*****  �ý��Ϊ****sdfsdf*sdfds
//int main()
//{
//	int i=0, j=0;
//	char a[81];
//	gets(a);
//
//	while (a[i] == '*')
//	{
//		a[j++] = a[i++];
//	}
//	while (a[i])
//	{
//		if (a[i] != '*')
//			a[j++] = a[i];
//		i++;
//	}
//	a[j] = '\0';
//	for (j = 0; a[j] != 0; j++)
//	{
//		printf("%c", a[j]);
//	}
//
//	return 0;
//}


//9. �Ƚ�һ��������ascll����ֵ
//int main()
//{
//	int i, count = 0, b[20],k;
//	char a[81], t[1] = {0};
//	gets(a);
//	k = strlen(a);
//	for (i = 0; i < k; i++)
//	{	
//		if (strcmp(t[0], a[i]) <= 0)
//		{
//			strcpy(t[0], a[i]);
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		if (strcmp(t, a[i]) == 0)
//		{
//			b[count++] = i;
//			
//		}
//	}
//	printf("cishuy:%d\n", count);
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i, count = 0, b[20], k;
//	char a[81], t = 0;
//	gets(a);
//	k = strlen(a);
//	for (i = 0; i < k; i++)
//	{
//		if (t< a[i])
//		{
//			t=a[i];
//		}
//	}
//	for (i = 0; i < k; i++)
//	{
//		if (t==a[i])
//		{
//			b[count++] = i;
//
//		}
//	}
//	printf("cishuy:%d\n", count);
//	for (i = 0; i < count; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}


int main()
{
	int i = 0,j=100;
	for (i = 0; i < j; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 0; i < j; i++)
	{
		printf("%d ", 10 - i);
	}
	printf("dsfsf");

	return 0;
}