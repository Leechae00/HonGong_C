#include <stdio.h>

int main(void)
{
	float ft = 1.23456789023456789; // float�� 7�ڸ�
	double db = 1.23456789023456789; // double�� 15�ڸ�

	printf("float�� ������ �� : %.20f\n", ft);
	printf("double�� ������ �� : %.20lf\n", db);
	
	return 0;

}