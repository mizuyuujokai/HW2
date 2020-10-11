#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b;

	printf("enter  two intergers\n");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
	{
		printf("%d is %d`s multiple\n",a,b);
	}
	else
	{
		printf("%d isn`t %d`s multiple\n", a, b);
	}
	system("pause");
	return 0;
}