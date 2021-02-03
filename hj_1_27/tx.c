#define _CRT_SECURE_NO_WARNINGS 1
#include"tx.h";

//初始化
void Init(struct Contact* con)
{
	memset(con->data, 0, sizeof(con->data));
	con->size = 0;
 }


//添加好友
void jia(struct Contact* con)
{
	if (con->size == MAX)
		printf("通讯录已满\n");
	else
	{
		printf("请输出要添加的姓名：->");
		scanf("%s", con->data[con->size].name);
		printf("请输出要添加的年龄：->");
		scanf("%d", &con->data[con->size].age);
		printf("请输出要添加的性别：->");
		scanf("%s", con->data[con->size].sex);
		printf("请输出要添加的电话：->");
		scanf("%s", con->data[con->size].tele);
		printf("请输出要添加的地址：->");
		scanf("%s", con->data[con->size].addr);
		con->size++;
		printf("添加成功\n");
	}
	
}

//show好友
void ck(struct Contact* con)
{
	int i;
	if (con->size == 0)
		printf("通讯录为空\n");
	else
	{
		printf("%20s\t%4s\t%4s\t%20s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
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

//删除好友

static int find(struct Contact *con,char* a)		//查找
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
	printf("请输入要删除的好友的姓名：->");
	scanf("%s", a);
	ret=find(con, a);
	if (ret < 0)
		printf("没有此好友\n");
	else
	{
		for (i = ret; i < con->size-1; i++)
		{
			con->data[i] = con->data[i + 1];
		}
		con->size--;
		printf("删除成功！\n");
	}
	return 0;
}

//查找好友
void se(struct Contact* con)
{
	char a[20];
	int  ret;
	printf("输入要查找的姓名->");
	scanf("%s", a);
	//fflush(stdin);
	//gets(a);			//为什么gets不行
	ret = find(con, a);
	if (ret < 0)
		printf("要查找的人不存在\n");
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


//修改好友
void mo(struct Contact* con)
{
	char a[20];
	int  ret;
	printf("输入要修改的姓名->");
	scanf("%s", a);
	ret = find(con, a);
	if (ret < 0)
		printf("要修改的人不存在\n");
	else
	{
		printf("请输出的姓名：->");
		scanf("%s", con->data[ret].name);
		printf("请输出的年龄：->");
		scanf("%d", &con->data[ret].age);
		printf("请输出的性别：->");
		scanf("%s", con->data[ret].sex);
		printf("请输出的电话：->");
		scanf("%s", con->data[ret].tele);
		printf("请输出的地址：->");
		scanf("%s", con->data[ret].addr);
		printf("修改成功\n");
	}
}