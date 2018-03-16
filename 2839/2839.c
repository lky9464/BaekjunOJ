#include <stdio.h>

int main() {

	int threeBag = 0, fiveBag = 0;
	int sugar = 0;
	int bags = 0;


	printf("설탕 무게를 입력하세요.(3~5000kg) : ");
	scanf_s("%d", &sugar);
	int temp = sugar;

	for (int i = temp; i == i; i -= 5) {
		if (i == 3 || i == 6 || i == 9 || i == 12) {
			threeBag += i/3;
			break;
		}
		else if (i < 0) {
			bags = -1;
			printf("필요한 최소한의 봉지는 %d개 입니다.\n", bags);
			return 0;
		}
		else {
			if (i == 0) break; 
			fiveBag += 1;
			
		}
	}
	bags = fiveBag + threeBag;

	printf("필요한 최소한의 봉지는 %d개 입니다.\n", bags);
	// printf("3 -> %d, 5 -> %d\n", threeBag, fiveBag);
	return 0;
}