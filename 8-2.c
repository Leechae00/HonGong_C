#include <stdio.h>

int main(void) {

	int score[5];			//각각의 점수를 배열로 받는
	int total = 0;			//모든 점수의 합계
	int i;					//반복 변수
	double avg;				//평균을 계산할 변수

	for (i = 0; i < 5; i++) {		// i가 0부터 4까지 5번 반복
		scanf("%d", &score[i]);		// 각 배열에 성적 입력
	}
	for (i = 0; i < 5; i++) {		// i가 0부터 4까지 5번 반복
		total += score[i];			// total변수에 성적이 누적됨
	}
	avg = total / 5.0;				// 평균 계산

	for (i = 0; i < 5; i++) {		// i가 0부터 4까지 5번 반복
		printf("%5d", score[i]);		// score에 있는 성적 출력
	}
	printf("\n");		

	printf("평균 : %.1lf\n",avg);			// 평균 출력

	return 0;
}	