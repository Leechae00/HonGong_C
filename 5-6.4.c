#include<stdio.h>

int main(void)
{
	int a = 0, b = 0;
	char plus;
	printf("사칙연산 입력(정수) : ");
	scanf("%d%c%d", &a, &plus, &b);
	if (plus == '+') {
		printf("%d+%d=%d", a, b, a + b);
	}
	else if (plus == '-') {
		printf("%d-%d=%d", a, b, a - b);
	}
	else if (plus == '/') {
	printf("%d/%d=%d", a, b, a / b);
	}
	else if (plus == '*') {
		printf("%d*%d=%d", a, b, a * b);
	}
	return 0;
}