#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////1. ����
//typedef struct Node
//{
//	char name[20];
//	long num;
//	struct Node* next;
//}node;
//
////����Ĵ���
//node* create(node* head)
//{
//	node* newnode, *q;
//	newnode = (node*)malloc(sizeof(node));
//	if (newnode == NULL)
//	{
//		printf("ָ�봴��������\n");
//		exit(0);
//	}
//	scanf("%s %ld ", newnode->name, &newnode->num);
//	head = q = newnode;
//	while (newnode->num > 0)
//	{
//		newnode = (node*)malloc(sizeof(node));
//		if (newnode == NULL)
//		{
//			printf("ָ�봴��������\n");
//			exit(0);
//		}
//		scanf("%s %ld ", newnode->name, &newnode->num);
//		q->next = newnode;
//		q = q->next;
//	}
//	q->next = NULL;
//	return head;
//}
//
////����Ĳ���
//node* insert(node* head, node* nod)
//{
//	node* p = head;
//	node* prep=p;
//	if (head == NULL || nod == NULL)
//		return head;
//	while (p->next)
//	{
//		if (p->num < nod->num)
//		{
//			nod->next = p;
//			prep->next = nod;
//			break;
//		}
//		else if (p->num == nod->num)
//			printf("�Ѿ����ڡ�\n");
//		else
//		{
//			prep = p;
//			p = p->next;
//		}
//		
//	}
//	if (head == nod)
//	{
//		nod->next = p;
//		head = nod;
//	}
//	return head;
//}
////�����ɾ��
//node* dele(node* head, long num)
//{
//	node* p;
//	node* pre=p;
//	p = head;
//	if (head == NULL)
//		return head;
//	while (p->next)
//	{
//		if (p->num != num)
//		{
//			pre = p;
//			p = p->next;
//		}
//
//	}
//	if (head == p)
//		head = p->next;
//}
//
//int main()
//{
//	node* head=NULL ,*p=NULL;
//	head = create(head);
//	if (head == NULL)
//	{
//		printf("ָ�봴��������\n");
//		exit(0);
//	}
//	p = head;
//	while (p->next)
//	{
//		printf("%10s %4ld",p->name,p->num);
//		p = p->next;
//	}
//	return 0;
//}
//typedef struct Node
//{
//	int c;
//	
//	struct Node* next;
//}node;
//int main()
//{
//	int a = 1, b = 2;
//	node* p, s[3] = { {1,&a},{3,&b} ,{4,&b} };
//	p = s;
//	printf("%d %d\n",(++p)->c,(p++)->c);
//	//printf("%d\n", p->c);
//}

int main()
{

	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}