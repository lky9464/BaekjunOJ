#include <stdio.h>

int main() {
	int N = 0, cycle = 0; //0 <= num && num <= 99 
	int front = 0, rear = 0; //front -> 10�� �ڸ���, rear -> 1�� �ڸ���
	int newFront = 0, newRear = 0; //���� ������� 2�ڸ���

	printf("0~99�� �Է��ϼ���. : ");
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