#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_ARRAY_LENGTH 101

int perf[MAX_ARRAY_LENGTH];
int index = 0;

void needs(int e) {
	perf[index] = e;
	index++;
}
int main() {

	int m, n, value = 0, loop = 0, sum = 0;
	scanf("%d", &m); //Ω√¿€
	scanf("%d", &n); //≥°


	for (int i = 0; i <= 100; i++) {
		value = i * i;
		if (m <= value && value <= n) {
			needs(value);
			loop++;
		}
		else if (value > n) {
			break;
		}
	}

	for (int i = 0; i < loop;i++) { 
		sum += perf[i];
	}

	if (loop == 0) {
		printf("%d\n", -1);
	}
	else {
		printf("%d\n", sum);
		printf("%d\n", perf[0]);
	}

	return 0;
}