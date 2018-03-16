#include <stdio.h>

int main() {
	int N = 0, cycle = 0; //0 <= num && num <= 99 
	int front = 0, rear = 0; //front -> 10의 자리수, rear -> 1의 자리수
	int newFront = 0, newRear = 0; //새로 만들어진 2자리수

	printf("0~99중 입력하세요. : ");
	scanf_s("%d", &N);
	int temp = N;

	do {
		rear = N % 10;
		front = (N - rear) / 10;

		newRear = (front + rear) % 10;
		newFront = rear * 10;

		N = newFront + newRear;
		cycle += 1;

	} while (temp != N);
	printf("%d\n", cycle);

	return 0;

}