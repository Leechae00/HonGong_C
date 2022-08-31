#include <stdio.h>

int main(void)
{
	printf("Be happy\n");				// "Be happy"를 출력하고 줄을 바꿈(\n)
	printf("1234567890123456789\n");	// 화면에 열 번호를 출력하고 줄을 바꿈
	printf("My\tfriend\n");		
	// "My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄을 바꿈(\n)
	printf("goot\bd\tchance\n");	// "Goot"을 출력하고 한 칸 왼쪽으로 이동 (\b)
	// t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈 (\n)
	printf("Cow\rW\a\n");
	// 맨 앞으로 이동 (\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)

	return 0;
}