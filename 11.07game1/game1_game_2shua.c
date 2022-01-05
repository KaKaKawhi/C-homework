#define _CRT_SECURE_NO_WARNINGS 1
// gameԴ�ļ�ʵ�ֺ�������

#include "game1_game_2shua.h"

void Init(char board[ROW][LINE]) {

	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			board[i][j] = ' ';
		}
	}
}


void Print(char board[ROW][LINE]) {

	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			if (LINE - 1 == j) {
				printf("| %c |", board[i][j]);
			}
			else {
				printf("| %c ", board[i][j]);
			}
		}
		printf("\n");
		for (j = 0; j < LINE; j++) {
			printf("����");
		}
		printf("\n");
	}
}


void Player(char board[ROW][LINE]) {

	// �������壬ֱ���ҵ�һ���Ϸ�λ�ã������Ѿ��ж���������
	while (1) {
		// ��������������λ�ã�������ӣ�*��
		int x = 0;
		int y = 0;
		// ���ѡ������ֱ�Ӹ��ݴ�0��ʼ��
		printf("��ѡ����Ҫ�µ�λ��(x y)\n");

		//��%d,%d����ʱ��С�Ķ��Ÿ�ʽ����ҲΪӢ�ĵģ���Ӧ����
		scanf("%d %d", &x, &y);

		// �жϸ�λ���Ƿ�Ϸ�
		if (x > 0 && y > 0 && x <= ROW && y <= LINE && ' ' == board[x - 1][y - 1]) {
			board[x - 1][y - 1] = '*';
			break;
		}
		else if ('=' == Judge(board)) {
			// �������˳����ɣ���Ϸ���������ź�������ж�
			break;
		}
		else {
			printf("��λ�ò��Ϸ�������������\n");
		}
	}
	
}


void Robot(char board[ROW][LINE]) {

	// �������壬ֱ���ҵ�һ���Ϸ�λ�ã������Ѿ��ж���������
	while (1) {
		// ����ȷ�������λ�ã��������ӣ�#��
		// x��y�ֱ�Ϊ0-ROW �� 0-LINE������
		int x = rand() % ROW;
		int y = rand() % LINE;

		// �жϸ�λ���Ƿ�Ϸ���������ж��±��е�����
		if (x >= 0 && y >= 0 && x < ROW && y < LINE && ' ' == board[x][y]) {
			board[x][y] = '#';
			break;
		}
		else if('=' == Judge(board)) {
			// �������˳����ɣ���Ϸ���������ź�������ж�
			break;
		}
		else {
			printf("��λ�ò��Ϸ���������ɸѡ\n");
		}
	}
	
}

int Is_Full(char board[ROW][LINE]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			if (' ' == board[i][j]) {
				// ˵��δ����ֱ�ӷ���0
				return 0;
			}
		}
	}
	// �������˷���1
	return 1;
}

// �ж����������ˣ��Լ�д�������⣡������������������������������
// ֻҪ��һ��������3������λ�ö���ͬһ�����ӣ���һ��ʤ��
// ���ʤ������*
// ����ʤ������#
// ƽ�֣�������������=
// ��������+��ֱ���ں���������return '+'��
char Judge(char board[ROW][LINE]) {

	// �ж���
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		//�Լ�д�ģ�for (j = 0; j < LINE; j++) {
		for (j = 1; j < LINE - 1; j++) {
			// ���һ�����ж�������������������ͬ����ֱ�ӷ��ظ����Ӷ�Ӧ�ַ�
			// �Լ�д��û���жϲ�Ϊ��
			if (board[i][j - 1] == board[i][j] && board[i][j] == board[i][j + 1] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}


	// �ж���
	for (j = 0; j < LINE; j++) {
		//�Լ�д�Ĵ�0��ʼ
		for (i = 1; i < ROW - 1; i++) {
			// ���һ�����ж�������������������ͬ����ֱ�ӷ��ظ����Ӷ�Ӧ�ַ�
			// �Լ�д��û���жϲ�Ϊ��
			if (board[i - 1][j] == board[i][j] && board[i][j] == board[i + 1][j] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// �ж����Խ���
	for (i = 0; i < ROW; i++) {
		//�Լ�д�Ĵ�0��ʼ
		for (j = 1; j < LINE - 1; j++) {
			// ������Խ������ж�������������������ͬ����ֱ�ӷ��ظ����Ӷ�Ӧ�ַ�
			// �Լ�д��û���жϲ�Ϊ��
			if (board[i - 1][j - 1] == board[i][j] && board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// �ж��ζԽ���
	for (i = 0; i < ROW; i++) {
		//�Լ�д�Ĵ�0��ʼ
		for (j = 1; j < LINE - 1; j++) {
			// ����ζԽ������ж�������������������ͬ����ֱ�ӷ��ظ����Ӷ�Ӧ�ַ�
			// �Լ�д��û���жϲ�Ϊ��
			if (board[i + 1][j - 1] == board[i][j] && board[i][j] == board[i - 1][j + 1] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// ���ж��Ƿ����ĺ�������1ʱΪ��������0ʱ����
	// �൱if (1 == Is_full(board))
	if (Is_Full(board)) {
		return '=';
	}
	else {
		// �ж�ƽ��
		return '+';
	}
}