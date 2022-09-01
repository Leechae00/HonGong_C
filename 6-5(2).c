#include <stdio.h>
int main(void)
{	
	int prime = 0, i = 0, j = 0;
	printf("2이상의 정수를 입력하세요. 소수인지 아닌지 판단합니다 : ");
	scanf("%d", &prime);
	
	for (i = 2; i < prime; i++) {
		if (prime % i == 0) {
			j = 1;
		}
	}
	if (j == 0)
		printf("소수이다");
	else
		printf("소수가 아니다");

}

