#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e;
	printf("�@�Ѫ��`���{��\n");
	scanf_s("%f", &a);
	printf("�T�o�@���ɦh�ֿ�\n");
	scanf_s("%f", &b);
	printf("�����@���ɯ��p�h�֤���\n");
	scanf_s("%f", &c);
	printf("�@�Ѫ������O\n");
	scanf_s("%f", &d);

	e = (b / c) * a + d;

	printf("�@�Ѫ��q��O�� %f��\n", e);

	system("pause");
	return 0;

}