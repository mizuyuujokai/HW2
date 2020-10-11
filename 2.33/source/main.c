#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e;
	printf("一天的總里程數\n");
	scanf_s("%f", &a);
	printf("汽油一公升多少錢\n");
	scanf_s("%f", &b);
	printf("平均一公升能行駛多少公里\n");
	scanf_s("%f", &c);
	printf("一天的停車費\n");
	scanf_s("%f", &d);

	e = (b / c) * a + d;

	printf("一天的通行費為 %f元\n", e);

	system("pause");
	return 0;

}