#include <stdio.h>
#include <string.h>

int main(void) {
	
	char str[30]; //���ڿ�
	int i = 0; // �ݺ�
	int count = 0; // �ٲ� ���ڼ�

	printf("���� �Է� : ");
	scanf("%[^\n]", str);
	
	for (i = 0; i <= 30; i++) {
		
		if ((str[i] >= 65)&&(str[i] <= 95)) {
			str[i] += 32;
			count += 1;
		}
		else
			continue;
			
	}
	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d", count);
	
	return 0;
}
