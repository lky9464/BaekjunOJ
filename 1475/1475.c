#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 100000 //�ڸ���

int main() {
	double set = 0;
	int sum = 0;
	double maxElement = 0;
	
	char roomNum[MAX_STRING_SIZE];
	float classify[9]; //�� ���ں�(0~9) ����
	for (int i = 0; i < 9; i++)
		classify[i] = 0;

	printf("���ȣ�� �Է��ϼ��� : ");
	scanf("%s", roomNum);


	//���ڸ� �� ��

	for (int i = 0; i < strlen(roomNum); i++) {

		switch (roomNum[i]) {

		case '0':
			classify[0] += 1;
			break;
		case '1':
			classify[1] += 1;
			break;
		case '2':
			classify[2] += 1;
			break;
		case '3':
			classify[3] += 1;
			break;
		case '4':
			classify[4] += 1;
			break;
		case '5':
			classify[5] += 1;
			break;
		case '6':case '9':
			classify[6] += 0.5;
			break;
		case '7':
			classify[7] += 1;
			break;
		case '8':
			classify[8] += 1;
			break;
		default:
			break;
		}
	}
	
	for (int i = 0; i < 9; i++) {
		if (classify[i] > maxElement) {
			maxElement = classify[i];
		}
	}
	
	double tmp = maxElement - (int)maxElement;

	if (tmp == 0) {
		set = maxElement;
		printf("�ʿ��� ��Ʈ >> %d\n", (int)set);
	}
	else {
		set = maxElement + 0.5;
		printf("�ʿ��� ��Ʈ >> %d\n", (int)set);
	}
	

	return 0;
}