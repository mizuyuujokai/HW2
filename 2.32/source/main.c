#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void)
{	
	float w, h, bmi;
	printf("enter your weight(kg)\n");
	scanf_s("%f", &w);
	printf("enter your high(m)\n");
	scanf_s("%f", &h);

	bmi = w / (h * h);

	printf("your BMI vaulue is %f \n", bmi);
	printf("\nUnderweight :<18.5\nNormal:18.5~24.9\nOverweight:25~29.9\nObese:>30\n");

	system("pause");
	return 0;
}