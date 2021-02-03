#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//struct node
//{
//	char te[15];
//	char te1[15];
//};
//int main()
//{
//	int i = 0,j=1;
//	FILE* fp1, * fp2, *fp3;
//	char temp[4][15], temp1[15], temp2[15];
//	fp1 = fopen("addr.txt", "r");
//	fp2 = fopen("tel.txt", "r");
//	fp3 = fopen("addtel.txt", "w");
//	if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
//		perror("hehe:");
//	while (fscanf(fp1, "%s", temp1 )!= EOF)//姓名
//	{
//		fscanf(fp1, "%s", temp2);		//地址
//		fprintf(fp3,"%s ",temp1);		//往文件输入姓名
//		fprintf(fp3,"%s\n",temp2);		//往文件输入地址
//		strcpy(temp[i],temp1);					//
//		i++;
//	}
//	i = 0;
//	do 
//	{
//		fscanf(fp2, "%s", temp1);  //姓名
//		fscanf(fp2, "%s", temp2);	//地址
//		fseek(fp3,sizeof(struct node)*j,0);
//		fprintf(fp3 ,"%s",temp2);  //输入地址
//		j++;
//	} while (strcmp(temp[i++], temp1) == 0);
//	rewind(fp2);
//	fprintf(fp3,"%20s\n",temp2);
//
//	fclose(fp1);
//	fclose(fp2);
//	fclose(fp2);
//	return 0;
//}


