#include <stdio.h>

int main(void) {

	int score[5];			//������ ������ �迭�� �޴�
	int total = 0;			//��� ������ �հ�
	int i;					//�ݺ� ����
	double avg;				//����� ����� ����

	for (i = 0; i < 5; i++) {		// i�� 0���� 4���� 5�� �ݺ�
		scanf("%d", &score[i]);		// �� �迭�� ���� �Է�
	}
	for (i = 0; i < 5; i++) {		// i�� 0���� 4���� 5�� �ݺ�
		total += score[i];			// total������ ������ ������
	}
	avg = total / 5.0;				// ��� ���

	for (i = 0; i < 5; i++) {		// i�� 0���� 4���� 5�� �ݺ�
		printf("%5d", score[i]);		// score�� �ִ� ���� ���
	}
	printf("\n");		

	printf("��� : %.1lf\n",avg);			// ��� ���

	return 0;
}	