// Incomp.

#include <stdio.h>

void print_minDistance(int w, int h, int x, int y) {

	int minDistance = 0;

	if (x > w && y > h) { // 1영역								
		int xVar = x - w, yVar = y - h;
		minDistance = xVar * xVar + yVar * yVar;
	}
	else if (x > w && 0 < h) { // 2영역

	}
	else if (x < 0 && y < 0) { // 3영역

	}
	else if (x < 0 && y > h) { // 4영역

	}
	else if (x > w && 0 <= y && y <= h) { // 5영역

	}
	else if (0 <= x && x <= w && y < 0) { // 6영역

	}
	else if (x < 0 && 0 <= y && y <= h) { // 7영역

	}
	else if (0 <= x && x <= w && y > h) { // 8영역

	}
	else { // 9영역

	}

	printf("%d\n", minDistance);
}
int main() {

	int w, h; // 1000 > w > 0, 1000 > h > 0
	int x, y; // 한수의 위치
	int minDistance; // 한수와 사각형 사이 최단거리

	printf("사각형 오른쪽 위 꼭지점 좌표(w,h)를 입력하시오.(단, 왼쪽 아래 꼭지점은 원점, 1000 > w > 0, 1000 > h > 0) : ");
	scanf_s("%d %d", &w, &h);
																// 4 | 8 | 1
	printf("한수의 좌표(x,y)를 입력하시오. : ");				// ----------
	scanf_s("%d %d", &x, &y);									// 7 | 9 | 5		-->영역
																// ----------
																// 3 | 6 | 2
	print_minDistance(w, h, x, y);
	
	return 0;
}
