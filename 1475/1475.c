#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 1000000 //�鸸

int main() {

	char roomNum[MAX_STRING_SIZE];

	printf("���ȣ�� �Է��ϼ��� : ");
	scanf("%s", roomNum);

	//printf("%s\n", roomNum);

	int length = strlen(roomNum);
	double set = 0;
	int overlap = 0;

	for (int i = 0; i < strlen(roomNum); i++) {

		switch (roomNum[i]) {

		case '0':case '1':case '2':case '3':case '4':case '5':case '7':case '8':
			set += 1;
			break;
		case '6':case '9':
			overlap += 1;
			break;
		default:
			printf("�߸��� �����Դϴ�.\n");
			return 0;
		}
	}
	if (overlap % 2 == 1) {
		set = set + 0.5*overlap + 0.5;
	}
	else if(overlap % 2 == 0) {
		set += (double)overlap / 2;
	}

	printf("�ʿ��� ��Ʈ ���� : %d\n", (int)set);

	return 0;
}