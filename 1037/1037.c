
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num; // ��¥ ����� ����

	printf("��¥ ����� ���� : ");
	scanf("%d", &num);

	int *divisorArr = (int*)malloc(sizeof(int)*num); // ��¥ ����� ��� �迭

	printf("%d���� ����� �Է��ϼ��� : ", num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &divisorArr[i]);
	}

	int *result = divisorArr[0] * divisorArr[num-1];

	printf("N�� %d\n", result);

	return 0;
}