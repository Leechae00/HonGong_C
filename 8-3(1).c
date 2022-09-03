#include <stdio.h>
int main(void) {

	int A[3] = { 1,2,3 }; //A배열의 초기화
	int B[10];
	int i;

	for (i = 0; i < 10; i++) {
		// (0 1 2 3 4 5 6 7 8 9) % 3 
		// (0 1 2 0 1 2 0 1 2 0)
		B[i] = A[i % 3];
		printf("%5d", B[i]);	
	}
	return 0;
}