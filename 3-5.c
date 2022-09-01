#include <stdio.h>

int main(void)
{
	float ft = 1.23456789023456789; // float는 7자리
	double db = 1.23456789023456789; // double은 15자리

	printf("float형 변수의 값 : %.20f\n", ft);
	printf("double형 변수의 값 : %.20lf\n", db);
	
	return 0;

}