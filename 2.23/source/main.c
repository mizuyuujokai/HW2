#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, b=0, c=0;

	printf("enter three intergers\n");

	scanf_s("%d %d %d",&a,&b,&c);

	if (a > b && a > c)
	{
		printf("%d is the largest interger\n", a);
	}
	if (b > a && b > c)
	{
		printf("%d is the largest interger\n", b);
	}
	if (c > b && c > a)
	{
		printf("%d is the largest interger\n", c);
	}
	if (a<b && a<c)
	{
		printf("%d is the smailest interger\n", a);
	}
	if (b < a && b < c)
	{
		printf("%d is the smailest interger\n", b);
	}
	if (c < b && c < a)
	{
		printf("%d is the smailest interger\n", c);
	}

	system("pause");
	return 0;
}

