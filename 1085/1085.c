// Incomp.

#include <stdio.h>

void print_minDistance(int w, int h, int x, int y) {

	int minDistance = 0;

	if (x > w && y > h) { // 1����								
		int xVar = x - w, yVar = y - h;
		minDistance = xVar * xVar + yVar * yVar;
	}
	else if (x > w && 0 < h) { // 2����

	}
	else if (x < 0 && y < 0) { // 3����

	}
	else if (x < 0 && y > h) { // 4����

	}
	else if (x > w && 0 <= y && y <= h) { // 5����

	}
	else if (0 <= x && x <= w && y < 0) { // 6����

	}
	else if (x < 0 && 0 <= y && y <= h) { // 7����

	}
	else if (0 <= x && x <= w && y > h) { // 8����

	}
	else { // 9����

	}

	printf("%d\n", minDistance);
}
int main() {

	int w, h; // 1000 > w > 0, 1000 > h > 0
	int x, y; // �Ѽ��� ��ġ
	int minDistance; // �Ѽ��� �簢�� ���� �ִܰŸ�

	printf("�簢�� ������ �� ������ ��ǥ(w,h)�� �Է��Ͻÿ�.(��, ���� �Ʒ� �������� ����, 1000 > w > 0, 1000 > h > 0) : ");
	scanf_s("%d %d", &w, &h);
																// 4 | 8 | 1
	printf("�Ѽ��� ��ǥ(x,y)�� �Է��Ͻÿ�. : ");				// ----------
	scanf_s("%d %d", &x, &y);									// 7 | 9 | 5		-->����
																// ----------
																// 3 | 6 | 2
	print_minDistance(w, h, x, y);
	
	return 0;
}
