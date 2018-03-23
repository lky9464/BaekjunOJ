#include <stdio.h>

int main() {
	
	int howmany, count = 0;
	printf("숫자가 몇개입니까? : ");
	scanf_s("%d", &howmany);

	int *inArr = (int*)malloc(sizeof(int)*howmany);

	for (int i = 0; i < howmany; i++) {
		printf("소수 확인 숫자들 입력 (%d / %d)", i + 1, howmany);
		scanf_s("%d", &inArr[i]);
	}

	for (int i = 0; i < howmany; i++) {
		int flag = 0;
		for (int j = 2; j <= inArr[i]; j++) {

			if (inArr[i] == 2) {
				count++;
				break;
			}
			if (inArr[i] % j == 0 && inArr[i] != j)
				break;
			if (inArr[i] == j && inArr[i] > 2) {
				count++;
				break;
			}
		}
	}

	printf("이 중 소수의 갯수는 %d개\n", count);

	return 0;
}

