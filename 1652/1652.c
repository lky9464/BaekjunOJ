#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main() {

	int wallLength;
	int colLay = 0, rowLay = 0;
	printf("���簢�� �� ����or���� ���� �Է� : ");
	scanf("%d", &wallLength);

	//��
	char **room;
	room = (char**)malloc(sizeof(char*)*wallLength);
	for (int i = 0; i < wallLength; i++) {
		room[i] = (char*)malloc(sizeof(char)*wallLength);
	}
	for (int i = 0; i < wallLength; i++) {
		printf("%d�� ����(X or .) :", i + 1);
		scanf("%s", room[i]);
	}
	/*
	printf("\n�׸�\n");
	for (int i = 0; i < wallLength; i++) {
		for (int j = 0; j < wallLength; j++) {
			if (room[i][j] == 'X')
				printf("��");
			else
				printf("��");
		}
		printf("\n");
	}
	*/
	//if wallLength == 5


	//���η� ����

	for (int i = 1; i < wallLength - 1; i++) {
		for (int j = 0; j < wallLength; j++) {

			
			if (room[j][i] == '.') {
				if (room[j][i + 1] == '.' && room[j][i - 1] == '.')
					colLay += 1;
			}
		}
	}
	//����
	for (int i = 1; i < wallLength - 1; i++) {
		for (int j = 0; j < wallLength; j++) {

			if (room[i][j] == '.') {
				if (room[i+1][j] == '.' && room[i-1][j] == '.')
					rowLay += 1;
			}



		}
	}

	printf("���� >> %d, ���� >> %d\n", colLay, rowLay);
	//����
	free(room);
	

	return 0;
}