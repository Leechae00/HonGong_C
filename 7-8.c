#include <stdio.h>

int rec_func(int n);

int main(void) {

	rec_func(10);
	return 0;
}
int rec_func(int n) {
	int i, res = 0;
	for (i = 1; i <= n; i++) {
		res += i;
		if (i == n) {
			printf("%d", res);
			return;
		}
	}
	
}

