
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	int multitab, concent;
	int computer;

	printf("��Ƽ�� ���� : ");
	scanf("%d", &multitab);
	if (multitab != 0) {
		printf("��Ƽ�� �ϳ��� �ܼ�Ʈ ���� : ");
		scanf("%d", &concent);
	}
	
	if (multitab == 0) {
		computer = 1;
	}
	else if(multitab > 0){
		computer = multitab * concent - multitab*1 + 1;
	}
	else {
		printf("�ùٸ��� ���� �� �Է��Դϴ�.\n");
		return 0;
	}

	printf("���� ������ ��ǻ�� ���� : %d\n", computer);

	


	return 0;
}