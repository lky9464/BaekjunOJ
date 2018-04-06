//incomp.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int channel = 100;
	int brokens;
	
	scanf("%d\n", brokens);

	int *brokenBtn = (int*)malloc(sizeof(int)*brokens);

	for (int i = 0; i < brokens; i++)
		scanf("%c", &brokenBtn[i]);




	return 0;
}