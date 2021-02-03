#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<search.h>
//1.qsort函数的使用  
//2.通过自制一个qsort函数来达到qsort函数的效果     66666
//void mt_qsrt(void* base, int num, int width, int (*cmp)(void* e1, void* e2));
//void swap(void* x1, void* x2, int width);
//int cmp_int(void * e1,void *e2)
//{
//	return * (int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int i;
//	int a[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	mt_qsrt(a,sz,sizeof(a[0]),cmp_int);
//	for (i=0;i<sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//}
//int cmp_float(void* e1, void* e2)
//{
//	return (int)(*(int*)e1 - *(int*)e2);
//}
//void test2()
//{
//	int i;
//	float a[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	mt_qsrt(a, sz, sizeof(a[0]), cmp_float);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", a[i]);
//	}
//
//}
//struct stu {
//	char na[20];
//	int age;
//};
//int cmp_age(void* e1, void* e2)
//{
//	return ((struct stu *)e1)->age - ((struct stu *)e2)->age;
//}
//int cmp_na(void* e1, void* e2)
//{
//	return strcmp(((struct stu*)e1)->na , ((struct stu*)e2)->na);
//}
//void test3()
//{
//	int i;
//	struct stu a[] = { {"zhangs",20},{"lisi",10},{"wangw",30} };
//	int sz = sizeof(a) / sizeof(a[0]);
//	//mt_qsrt(a, sz, sizeof(a[0]), cmp_age);
//	mt_qsrt(a, sz, sizeof(a[0]), cmp_na);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//}
//int main()
//{
//	
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//自制my_qsrt函数来达到qsort 函数的效果
//void swap(void *x1,void* x2,int width)
//{
//	int i = 0;
//	char temp;
//	while (i++ < width)
//	{
//		temp = *(char*)x1;
//		*(char*)x1 = *(char*)x2;
//		*(char*)x2 = temp;
//		((char*)x1)++;
//		((char*)x2)++;
//
//	}
//}
//void mt_qsrt(void * base,int num ,int width ,int (*cmp)(void* e1,void *e2))
//{
//	int i, j;
//	for (i=0;i<num-1;i++)
//	{
//		for (j=0;j<num-1-i;j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}