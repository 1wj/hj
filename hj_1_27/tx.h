#pragma once
#include<stdio.h>
#include<string.h>
enum s
{
	exit,
	add,        
	del,
	search,     
	modify,
	show,       
	sort,
};

#define MAX 1000
//struct PeoInfo
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char tele[12];
//	char addr[30];
//};
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
}pe;
typedef struct Contact
{
	pe data[MAX];
	int size;
}co;

//��ʼ��
void Init(struct Contact* con);
//��Ӻ���
void jia(struct Contact * con);
//show����
void ck(struct Contact* con);
//ɾ������
void sc(struct Contact* con);
//���Һ���
void se(struct Contact* con);
//�޸ĺ���
void se(struct Contact* con);