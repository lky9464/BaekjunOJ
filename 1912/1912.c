#include <stdio.h>

int main() {

	int howmany, maxSum = 0;;
	printf("�� ���� �����Դϱ�? : ");
	scanf_s("%d", &howmany);

	int *intArr = (int*)malloc(sizeof(int)*howmany);

	printf("%d���� ���� �Է��ϼ���. ", howmany);
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

	printf("���ӵ� �� ���� �ִ밪�� %d�Դϴ�.\n", maxSum);

	return 0;
}