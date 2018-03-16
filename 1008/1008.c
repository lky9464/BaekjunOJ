#include <stdio.h>

int main() {

	double a = 0, b = 0;

	printf("두 수를 입력하세요.");
	scanf_s("%d %d", &a, &b);

	printf("두 수의 나눈 결과는 %f 입니다.", a / b);
	return 0;
}