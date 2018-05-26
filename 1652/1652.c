#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int calcCol(int *a) { // ���� �ڸ� ���
	int temp = *a;
	temp += 1;
	return temp;
}

int calcRow(int *b) { // ���� �ڸ� ���
	int temp = *b;
	temp += 1;
	return temp;
}

int main() {

	int wallLength;
	int colLay = 0, rowLay = 0;
	int colXcount = 0, rowXcount = 0;
	int checkNonBlockC = 0, checkNonBlockR = 0;
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
	for (int i = 0; i < wallLength; i++) {
		for (int j = 1; j < wallLength - 1; j++) {
			if (room[i][j] == '.' && room[i][j - 1] == '.' && room[i][j + 1] == 'X') { //..X
				colLay = calcCol(&colLay);
				colXcount += 1;
			}
			else if (room[i][j] == '.' && room[i][j-1] == 'X' && room[i][j+1] == '.') { // X..
				colLay = calcCol(&colLay);
			}
		}

		if (colXcount >= 2)
			colLay = colLay - (colXcount - 1);
		colXcount = 0;

		for (int k = 0; k < wallLength; k++) {
			if (room[i][k] == 'X')
				checkNonBlockC += 1;
		}
		if (checkNonBlockC == 0)
			colLay = calcCol(&colLay);
		checkNonBlockC = 0;

	}
		
	//����
	for (int i = 0; i < wallLength; i++) {
		for (int j = 1; j < wallLength - 1; j++) {
			if (room[j][i] == '.' && room[j - 1][i] == '.' && room[j + 1][i] == 'X') {
				rowLay = calcRow(&rowLay);
				rowXcount += 1;
			}
			else if (room[j][i] == '.' && room[j - 1][i] == 'X' && room[j + 1][i] == '.') {
				rowLay = calcRow(&rowLay);
			}
		}
		
		if (rowXcount >= 2)
			rowLay = rowLay - (rowXcount - 1);
		rowXcount = 0;

		for (int k = 0; k < wallLength; k++) {
			if (room[k][i] == 'X')
				checkNonBlockR += 1;
		}
		if (checkNonBlockR == 0)
			rowLay = calcRow(&rowLay);
		checkNonBlockR = 0;
	}


	printf("���� >> %d, ���� >> %d\n", colLay, rowLay);

	//����
	free(room);
	
	
	return 0;
}