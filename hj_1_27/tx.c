#define _CRT_SECURE_NO_WARNINGS 1
#include"tx.h";

//��ʼ��
void Init(struct Contact* con)
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;
 }


//��Ӻ���
void jia(struct Contact* con)
{
	if (con->size == MAX)
		printf("ͨѶ¼����\n");
	else
	{
		printf("�����Ҫ��ӵ�������->");
		scanf("%s", con->data[con->size].name);
		printf("�����Ҫ��ӵ����䣺->");
		scanf("%d", &con->data[con->size].age);
		printf("�����Ҫ��ӵ��Ա�->");
		scanf("%s", con->data[con->size].sex);
		printf("�����Ҫ��ӵĵ绰��->");
		scanf("%s", con->data[con->size].tele);
		printf("�����Ҫ��ӵĵ�ַ��->");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("��ӳɹ�\n");
	}
	
}

//show����
void ck(struct Contact* con)
{
	int i;
	if (con->size == 0)
		printf("ͨѶ¼Ϊ��\n");
	else
	{
		printf("%20s\t%4s\t%4s\t%20s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		for (i = 0; i < con->size; i++)
		{

			printf("%20s\t%4d\t%4s\t%20s\t%20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].sex,
				con->data[i].tele,
				con->data[i].addr);

		}
	}

}

//ɾ������

static int find(struct Contact *con,char* a)		//����
{
	int i = 0;
	for(i=0;i<con->size;i++)
	{ 
		if (0==strcmp(con->data[i].name, a))
		{
			return i;
		}
	}
	return -1;
	
}
void sc(struct Contact* con)
{
	char a[20];
	int i,ret = 0;
	printf("������Ҫɾ���ĺ��ѵ�������->");
	scanf("%s", a);
	ret=find(con, a);
	if (ret < 0)
		printf("û�д˺���\n");
	else
	{
		for (i = ret; i < con->size-1; i++)
		{
			con->data[i] = con->data[i + 1];
		}
		con->size--;
		printf("ɾ���ɹ���\n");
	}
	return 0;
}

//���Һ���
void se(struct Contact* con)
{
	char a[20];
	int  ret;
	printf("����Ҫ���ҵ�����->");
	scanf("%s", a);
	//fflush(stdin);
	//gets(a);			//Ϊʲôgets����
	ret = find(con, a);
	if (ret < 0)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%20s\t%4d\t%4s\t%20s\t%20s\n",
			con->data[ret].name,
			con->data[ret].age,
			con->data[ret].sex,
			con->data[ret].tele,
			con->data[ret].addr);
	}
}


//�޸ĺ���
void mo(struct Contact* con)
{
	char a[20];
	int  ret;
	printf("����Ҫ�޸ĵ�����->");
	scanf("%s", a);
	ret = find(con, a);
	if (ret < 0)
		printf("Ҫ�޸ĵ��˲�����\n");
	else
	{
		printf("�������������->");
		scanf("%s", con->data[ret].name);
		printf("����������䣺->");
		scanf("%d", &con->data[ret].age);
		printf("��������Ա�->");
		scanf("%s", con->data[ret].sex);
		printf("������ĵ绰��->");
		scanf("%s", con->data[ret].tele);
		printf("������ĵ�ַ��->");
		scanf("%s", con->data[ret].addr);
		printf("�޸ĳɹ�\n");
	}
}