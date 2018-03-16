#include <stdio.h>

int main() {

	int a = 0, b = 0;

	printf("두 수 입력 : ");
	scanf_s("%d %d", &a, &b);

	printf("두 수의 합은 %d 입니다.\n", a + b);

	return 0;
}