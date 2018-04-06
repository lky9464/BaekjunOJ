#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {

	char userColor[3][10];
	char *resColors[10] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	int resNum[3], times = 1;
	

	printf("3색 순서대로 입력 : ");

	for (int i = 0; i < 3; i++) {
		scanf("%s", userColor[i]);
	}

	int temp = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
			temp = strcmp(userColor[i], resColors[j]);
			if (temp == 0) {
				resNum[i] = j;
				break;
			}
		}
	}
	for (int i = 0; i <= resNum[2]; i++) {
		if (i != 0)
			times *= 10;
	}
	printf("%d\n", (resNum[0]*times*10) + (resNum[1]*times));
	
	return 0;
}