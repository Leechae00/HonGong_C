#include <stdio.h>

int sum(int a);

int main(void) {

	sum(10);
	sum(100);
	return 0;
}
int sum(int a) {
	int res = 0, i = 0;
	for (i = 1; i <= a; i++) {
		res += i;
	}
	printf("1���� %d������ ���� %d�Դϴ�\n", a, res);
	return;
}