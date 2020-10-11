#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	printf("enter an interger\n") ;
	scanf_s("%d", &a);

	if (a % 2 == 0)
	{
		printf("it is an even interger\n");
	}
	else
	{
		printf("it is an odd interger\n");
	}
	system("pause");
	return 0;
}