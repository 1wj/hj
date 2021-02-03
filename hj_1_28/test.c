#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

//课堂随笔
//int main()
//{
//	int* p,i;
//	//p = (int*)malloc(10 * sizeof(int));
//	p = (int*)calloc(10, sizeof(int));
//	for (i=0;i<10;i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i)); 
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//typedef struct s
//{
//	int n;
//	int arr[0];
//
//}s;
//int main()
//{
//	int i;
//
//	s *p=(s*)malloc(sizeof(s) + 20);
//	for(i=0;i<5;i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ",p->arr[i]); 
//	}
//	s* ptr = p;
//	ptr+1;
//	/*s* ptr = realloc(p, 44);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	
//*/
//}




//1. 先不用指针方式写 用指针方式写有问题后面回来改->4
//#define N 30
//struct student
//{
//	char name[20];
//	long num;
//	float score[3];
//	float sum;
//} s[N],temp;
//
//void input()
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s %ld %f %f %f", 
//			s[i].name,
//			&s[i].num,		// &p[i].num
//			&s[i].score[0],
//			&s[i].score[1],
//			&s[i].score[2]);
//		s[i].sum = s[i].score[0] + s[i].score[1] + s[i].score[2];
//	}			 				
//}				 
//
//void sort()
//{
//	
//	int i, j;
//	 
//	for (i = 0; i < N-1; i++)
//	{
//		for(j=0;j<N-1-i;j++)
//			if (s[j].sum < s[j + 1].sum)
//			{
//				temp =s[j];
//				s[j] = s[j + 1];
//				s[j + 1] = temp;
//			}
//	}
//
//}
//void outputdata()
//{
//	int i = 0;
//	for (i = 0; i < N; i++)
//	{
//		printf("%20s %8ld %8.2f %8.2f %8.2f",
//			s[i].name,
//			s[i].num,		// &p[i].num
//			s[i].score[0],
//			s[i].score[1],
//			s[i].score[2],
//			s[i].sum);		
//		printf("\n");
//
//	}
//	
//}
//void outputave()
//{
//	int i ,j= 0;
//	float ave[3] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			ave[i] += s[j].score[i];
//		}
//
//	}
//	printf("\npingjunfen\n");
//
//	for (i = 0; i < 3; i++)
//	{
//
//			printf("%f  " ,ave[i]/N);
//	}
//	
//}
//int main()
//{
//	
//	input();
//	sort();
//	outputdata();
//	outputave();
//	return 0;
//}



//2. 指向结构体变量的指针
//typedef struct student
//{
//	char name[20];
//	char sex;
//	long num;  //学号
//	float score[3];
//}student;
//
//int main()
//{
//	int i;
//	student stu, * p;
//	p = &stu;
//	scanf("%s %c", p->name, &p->sex);
//	scanf("ld", &p->num);
//	for (i=0;i<3;i++)
//	{
//		scanf("%f",&p->score[i]);
//	};
//
//	printf("%-8s %-2c %8ld", p->name, p->sex, p->num);
//	for (i = 0; i < 3; i++)
//	{
//		printf("%-8f",p->score[i]);
//	}
//	return 0;
//}

//3. 结构体数组和结构体指针的应用
//typedef struct student
//{
//	char name[20];
//	char sex;
//	int num;  //学号
//	int age;
//	float score;
//}student;
//int main()
//{
//	student stu[3] = {
//		{"wang",'f',11302,20,483} ,
//		{"liu",'f',11303,19,503},
//		{"song",'m',11304,20,471.5} };
//	student stu1 = { "zhang",'m',11301,19,496.5 }, *p , *q;
//	int i;
//	p = &stu1;
//	printf("%s %c %f \n", p->name, p->sex, p->score);
//	q = stu;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s %c %f \n", q[i].name, (q + i)->sex, (q + i)->score);
//		//q++;
//	}
//	q = stu;
//	return 0;
//}

//4. 1的补充   %s %c 连用比较好  不可一行一个%c 会出问题
//typedef struct student
//{
//	char name[20];
//	char sex;
//	int num;  //学号
//	int age;
//	float score[2];
//}student;
//
//
//
//void sr(student* q)
//{
//	int i;
//	for (i = 0; i < 2; i++)
//	{
//		scanf("%s %c", (q+i)->name, &(q + i)->sex);
//		scanf("%d", &(q + i)->num);
//		scanf("%d", &(q + i)->age);
//		scanf("%f %f", &(q + i)->score[0], &(q + i)->score[1]);
//	}
//
//}
//void po(student* q)
//{
//	int i;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%s %c %d %d %f %f\n", (q + i)->name, (q + i)->sex, (q + i)->num, (q + i)->age, (q + i)->score[0], (q + i)->score[1]);
//		//q++;
//	}
//}
//int main()
//{
//	//student stu[3] = {
//	//	{"wang",'f',11302,20,{483,456}} ,
//	//	{"liu",'f',11303,19,503},
//	//	{"song",'m',11304,20,471.5} };
//	student stu[3];
//	
//	sr(stu);
//	po(stu);
//	return 0;
//}


//5.函数的返回值是结构体类型
//#define N 30
//typedef struct student
//{
//	char name[20];
//	long num;
//	float score[3];
//	float sum;
//}student;
//void inp(student* p,int n)
//{
//	int i;
//	for (i=0;i<n;i++)
//	{
//		scanf("%s %ld %f %f %f",(p+i)->name,&(p+i)->num, 
//			&(p + i)->score[0],
//			&(p + i)->score[1],
//			&(p + i)->score[2]);
//		(p + i)->num = (p + i)->score[0] + (p + i)->score[1] + (p + i)->score[2];
//	}
//}
//student zx(student* p1,student*p2)
//{
//	student max;
//	int i;
//	float ma=p1->sum, mi=p1->sum;
//	for (i = 0; i < N; i++)
//	{
//		if (ma < (p1 + i)->sum)
//		{
//			max= *(p1+i);	
//		}
//		if (mi > (p1 + i)->sum)
//			*p2 = *(p1 + i);
//	}
//	return max;
//}
//void po(student* p)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		printf("%s %ld %f %f %f",
//			(p + i)->name,
//			(p + i)->num,
//			(p + i)->score[0],
//			(p + i)->score[1],
//			(p + i)->score[2]);
//		printf("\n");
//	}
//}
//int main()
//{
//	
//	student stu[N],maxi,mini;
//	inp(stu,N);
//	maxi = zx(stu,&mini);
//	po(stu);
//	return 0;
//}


//6.