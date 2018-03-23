#include <stdio.h>

int main() {

	int howmany, maxSum = 0;;
	printf("몇 개의 인자입니까? : ");
	scanf_s("%d", &howmany);

	int *intArr = (int*)malloc(sizeof(int)*howmany);

	printf("%d개의 수를 입력하세요. ", howmany);
	for (int i = 0; i < howmany; i++) {
		scanf_s("%d", &intArr[i]);
	}

	for (int i = 0; i < howmany - 1; i++) {
		if (i == 0)
			maxSum = intArr[i] + intArr[i + 1];
		else {
			if (maxSum < intArr[i] + intArr[i + 1])
				maxSum = intArr[i] + intArr[i + 1];
		}
	}

	printf("연속된 수 합의 최대값은 %d입니다.\n", maxSum);

	return 0;
}