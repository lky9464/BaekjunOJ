
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int num; // 진짜 약수의 갯수

	printf("진짜 약수의 갯수 : ");
	scanf("%d", &num);

	int *divisorArr = (int*)malloc(sizeof(int)*num); // 진짜 약수를 담는 배열

	printf("%d개의 약수를 입력하세요 : ", num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &divisorArr[i]);
	}

	int *result = divisorArr[0] * divisorArr[num-1];

	printf("N은 %d\n", result);

	return 0;
}