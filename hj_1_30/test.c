#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1. 从键盘中读 用fputs写到文件中    问题：Ctrl+z 无法使EOF无法结束
//int main()
//{
//	FILE* fp;
//	char ch[120] ;
//	fp = fopen("tet.txt", "w");
//	if (fp == NULL)
//		perror("fp:");
//	while (scanf("%s",ch)!=EOF)
//	{
//		fputs(ch, fp);
//		
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//2.从键盘读写到tet1中再从tet1中读文件 然后写到tet2中
//int main()
//{
//	FILE* fp1, * fp2;
//	char ch[120];
//	/*char ch;*/
//	fp1 = fopen("tet.txt", "w+");
//	if (fp1 == NULL)
//		perror("fp1:");
//	fp2 = fopen("tet2.txt", "w");
//	if (fp2 == NULL)
//		perror("fp2:");
//	gets(ch);
//	fputs(ch, fp1);
//	//while ((ch = getchar()) != '\n')
//	//	fputc(ch, fp1);
//	//rewind(fp1);
//	//while (!feof(fp1))
//	//{
//	//	ch = fgetc(fp1);
//	//	fputc(ch, fp2);
//	//}
//	rewind(fp1);
//	while (fgets(ch, 120, fp1) >0)
//	{
//		fputs(ch, fp2);
//		printf("%s",ch);
//	}
//	fclose(fp1);
//	fp1 = NULL;
//	fclose(fp2);
//	fp2 = NULL;
//	return 0;
//}


//3.格式化输入2个自定义类型 并把它输入到文件中
//typedef struct student
//{
//	char name[15];
//	char num[6];
//	float score[2];
//}stu;
//int main()
//{
//	stu s1[2],s2[2];
//	FILE* fp;
//	int i;
//	fp = fopen("tet.txt", "w+");
//	for (i=0;i<2;i++)
//	{
//		scanf("%s %s %f %f", s1[i].name, s1[i].num, &s1[i].score[0], &s1[i].score[1]);
//		fprintf(fp, "%s %s %7.2f %7.2f\n", s1[i].name, s1[i].num, s1[i].score[0], s1[i].score[1]);
//	}
//	
//	rewind(fp);
//	i = 0;
//	while (fscanf(fp, "%s %s %f %f", s2[i].name, s2[i].num, &s2[i].score[0], &s2[i].score[1]) != EOF)
//	{
//		printf( "%s %s %7.2f %7.2f\n", s2[i].name, s2[i].num, s2[i].score[0], s2[i].score[1]);
//		i++;
//	}
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//4.快读写函数的使用 
//#define N 2
// struct student
//{
//	char name[8];
//	int num;
//	int age;
//	float score;
// }s1[N],s2[N];
//void save();
//void open();
//int main()
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		scanf("%s %d %d %f",s1[i].name, &s1[i].num, &s1[i].age, &s1[i].score);
//	}
//	save();
//	open();
//	return 0;
//}
//void save()
//{
//	int i;
//	FILE* pf = fopen("tet.dat", "wb");
//	if (pf == NULL)
//		perror("pfsave:");
//	for (i = 0; i < N; i++)
//	{
//		if (fwrite(&s1[i], sizeof(struct student), 1, pf) == 1)
//		{
//			;
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//}
//void open()
//{
//	int i;
//	FILE* pf = fopen("tet.dat", "rb");
//	if (pf == NULL)
//		perror("pfopen:");
//	for (i = 0; i < N; i++)
//	{
//		if (fread(&s2[i], sizeof(struct student), 1, pf) ==1)
//		{
//			printf("%s %d %d %f", s2[i].name, s2[i].num, s2[i].age, s2[i].score);
//		}
//	}
//	fclose(pf);
//	pf = NULL;
//
//}


//5.fseek使用
//int main()
//{
//	int ch;
//	FILE* pf;
//	pf = fopen("tet.txt","r");
//	//fseek(pf,23,0);
//	ch = fgetc(pf);
//	printf("%d", ftell(pf));
//	printf("%c",ch);
//	fclose(pf);
//	return 0;
//}


int mian()
{

	return 0;
}