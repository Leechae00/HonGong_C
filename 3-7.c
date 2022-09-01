#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana"); // char배열에 새로운 문자열을 추가하는 방법
	printf("%s\n", fruit);

	return 0;
}
