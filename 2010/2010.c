
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int multitab, concent;
	int computer;

	printf("멀티탭 갯수 : ");
	scanf("%d", &multitab);
	if (multitab != 0) {
		printf("멀티탭 하나당 콘센트 갯수 : ");
		scanf("%d", &concent);
	}
	
	if (multitab == 0) {
		computer = 1;
	}
	else if(multitab > 0){
		computer = multitab * concent - multitab*1 + 1;
	}
	else {
		printf("올바르지 않은 수 입력입니다.\n");
		return 0;
	}

	printf("연결 가능한 컴퓨터 갯수 : %d\n", computer);

	


	return 0;
}