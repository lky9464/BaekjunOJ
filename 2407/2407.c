#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	
	int n, m;
	long long int result, tmp1 = 1, tmp2 = 1;
	//printf("nCm찾기, n, m 차례로 입력 >> ");

	scanf("%d %d", &n, &m);

	for (int i = m ; i > 0; i--) {
		tmp1 *= i;
	}
	for (int i = n; i > n - m; i--) {
		tmp2 *= i;
	}

	printf("%d\n", tmp2/tmp1);

	return 0;
}