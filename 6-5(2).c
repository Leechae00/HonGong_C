#include <stdio.h>
int main(void)
{	
	int prime = 0, i = 0, j = 0;
	printf("2�̻��� ������ �Է��ϼ���. �Ҽ����� �ƴ��� �Ǵ��մϴ� : ");
	scanf("%d", &prime);
	
	for (i = 2; i < prime; i++) {
		if (prime % i == 0) {
			j = 1;
		}
	}
	if (j == 0)
		printf("�Ҽ��̴�");
	else
		printf("�Ҽ��� �ƴϴ�");

}

