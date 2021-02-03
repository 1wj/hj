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

//初始化
void Init(struct Contact* con);
//添加好友
void jia(struct Contact * con);
//show好友
void ck(struct Contact* con);
//删除好友
void sc(struct Contact* con);
//查找好友
void se(struct Contact* con);
//修改好友
void se(struct Contact* con);