#include <stdio.h>

int main() {

	int threeBag = 0, fiveBag = 0;
	int sugar = 0;
	int bags = 0;


	printf("���� ���Ը� �Է��ϼ���.(3~5000kg) : ");
	scanf_s("%d", &sugar);
	int temp = sugar;

	for (int i = temp; i == i; i -= 5) {
		if (i == 3 || i == 6 || i == 9 || i == 12) {
			threeBag += i/3;
			break;
		}
		else if (i < 0) {
			bags = -1;
			printf("�ʿ��� �ּ����� ������ %d�� �Դϴ�.\n", bags);
			return 0;
		}
		else {
			if (i == 0) break; 
			fiveBag += 1;
			
		}
	}
	bags = fiveBag + threeBag;

	printf("�ʿ��� �ּ����� ������ %d�� �Դϴ�.\n", bags);
	// printf("3 -> %d, 5 -> %d\n", threeBag, fiveBag);
	return 0;
}