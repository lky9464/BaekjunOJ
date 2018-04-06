#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int kang[3], jump; 

	for(int i = 0; i < 3; i++)
		scanf("%d", &kang[i]);

	int tmpMax = (kang[0] < kang[1]) ? kang[1] : kang[0];
	int tmpMin = (kang[0] < kang[1] ? kang[0] : kang[1]);

	int max = (tmpMax < kang[2]) ? kang[2] : tmpMax;
	int min = (tmpMin < kang[2]) ? tmpMin : kang[2];
	int middle = kang[0] + kang[1] + kang[2] - min - max;

	//printf("max : %d, middle : %d, min : %d\n", max, middle, min);

	if (max - middle > middle - min) {
		jump = max - middle - 1;
	}
	else {
		jump = middle - min - 1;
	}
	printf("%d\n", jump);
	





	return 0;
}