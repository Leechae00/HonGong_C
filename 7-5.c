#include <stdio.h>

void fruit();

int main(void) {
	fruit();
	
	return 0;
}
void fruit() {
	printf("apple\n");
	fruit();
}