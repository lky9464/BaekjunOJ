#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define MAX_STRING_SIZE 100000 //자릿수

int main() {
	double set = 0;
	int sum = 0;
	double maxElement = 0;
	
	char roomNum[MAX_STRING_SIZE];
	float classify[9]; //각 숫자별(0~9) 갯수
	for (int i = 0; i < 9; i++)
		classify[i] = 0;

	printf("방번호를 입력하세요 : ");
	scanf("%s", roomNum);


	//한자리 씩 비교

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
		printf("필요한 세트 >> %d\n", (int)set);
	}
	else {
		set = maxElement + 0.5;
		printf("필요한 세트 >> %d\n", (int)set);
	}
	

	return 0;
}