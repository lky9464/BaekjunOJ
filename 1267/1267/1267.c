#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	//���� : 30�ʸ��� 10��
	//�ν� : 60�ʸ��� 15��
	

	int times;
	int callTime[20];
	int Y = 0, M = 0;

	printf("��ȭ Ƚ�� �Է�(0 ~ 20ȸ) >> ");
	scanf("%d", &times);

	for (int i = 0; i < times; i++) {
		scanf("%d", &callTime[i]);
	}

	for (int i = 0; i < times; i++) {
		if (callTime[i] %  30 == 0) {
			Y += (callTime[i] / 30) * 10;
		}
		else {
			Y += (callTime[i] / 30 + 1) * 10;
		}

		if (callTime[i] % 60 == 0) {
			M += (callTime[i] / 60) * 15;
		}
		else {
			M += (callTime[i] / 60 + 1) * 15;
		}
	}

	if (Y > M) {
		printf("M, %d\n", M);
	}
	else if (Y < M) {
		printf("Y, %d\n", Y);
	}
	else {
		printf("�����ϴ�. %d\n", Y);
	}
	
	return 0;
}