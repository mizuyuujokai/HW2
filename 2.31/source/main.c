#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	int i;

	printf("number square cube\n");

	for (i = 0; i <= 10; i++)
	{	
		if (i <= 3)
		{
			printf("%d      %d      %d\n", i, i * i, i * i * i);
		}
		if (i > 3 && i <= 9)
		{
			printf("%d      %d     %d\n", i, i * i, i * i * i);
		}
		if (i > 9)
		{
			printf("%d     %d    %d\n", i, i * i, i * i * i);
		}
	}
	system("pause");
	return 0;
}