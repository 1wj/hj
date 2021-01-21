#include<stdio.h>

enum sex {
	male,
	female,
	securee
};
extern int sum(int, int);
int main()
{
	extern int g_al;
	int a =0;
	int num1 = 0,num2=10;
	int num3 = sum(num1,num2);
	printf("%d\n",num3);

	//int b = ~a;
	//printf("%d\n",a++);
	//printf("%d",a);
	//enum sex s = male;
	//printf("s =%s",s);
	//return 0;
}