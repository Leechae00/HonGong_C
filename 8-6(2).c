#include <stdio.h>
#include <string.h>

int main(void) {
	
	char str[30]; //문자열
	int i = 0; // 반복
	int count = 0; // 바뀐 문자수

	printf("문장 입력 : ");
	scanf("%[^\n]", str);
	
	for (i = 0; i <= 30; i++) {
		
		if ((str[i] >= 65)&&(str[i] <= 95)) {
			str[i] += 32;
			count += 1;
		}
		else
			continue;
			
	}
	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d", count);
	
	return 0;
}
