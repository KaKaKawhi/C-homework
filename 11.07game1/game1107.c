#define _CRT_SECURE_NO_WARNINGS 1

#include "game1107.h"

void initiate(char arr[ROW][LINE], int row, int line) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < line; j++) {
			arr[i][j] = ' ';
		}
	}
}

void print(char arr[ROW][LINE], int row, int line) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < line; j++) {
			printf(" %c ", arr[i][j]);
			if (j < line - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			//printf("---|---|--"); ����
			for (j = 0; j < line; j++) {
				printf("---");
				if (j < line - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void player(char arr[ROW][LINE], int row, int line) {
	while (1) { // ���Ҫ�������룬ֱ������һ���Ϸ���λ��
		printf("�����������Ҫ�����λ��(x y):");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);                              // ����%d,%d����ִ���
		//���û�ֱ�۸��ܣ��ӵ�һ�У���һ�п�ʼ
		if (x - 1 >= 0 && x - 1 <= line - 1 && y - 1 >= 0 && y - 1 <= row - 1) {
			if (arr[x - 1][y - 1] == ' ') {
				arr[x - 1][y - 1] = '*';
				//print(arr, row, line);
				break;
			}
			else {
				printf("�˴��������ӣ�����������\n");
				continue;
			}
		}
		else {
			printf("�����������������\n");
			continue;
		}
	}
}

void computer(char arr[ROW][LINE], int row, int line) {
	while (1) {   //����Ҫ�������룬ֱ������һ���Ϸ���λ��
		int x = rand() % line; //0 - line-1
		int y = rand() % row;
		if (x >= 0 && x <= line - 1 && y >= 0 && y <= row - 1) {
			if (arr[x][y] == ' ') {
				arr[x][y] = '#';
				break;
			}
		}
	}
}

int is_full(char arr[ROW][LINE], int row, int line) {
	int index = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < line; j++) {
			if (arr[i][j] == ' ') {
				index = 1;
			}
		}
	}
	return index;
}

char judge(char arr[ROW][LINE], int row, int line) {
	// ���ж��У�ֻҪ��һ��������3������λ�ö���ͬһ�����ӣ���һ��ʤ��
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 1; j < line - 1; j++) {
			//Ҫ���ж���������Ϊ�ո�
			if (arr[i][j - 1] == arr[i][j] && arr[i][j] == arr[i][j + 1] && arr[i][j] != ' ') {
				return arr[i][j];
			}
		}
	}

	// �ж��У�ֻҪ��һ��������3������λ�ö���ͬһ�����ӣ���һ��ʤ��
	for (i = 0; i < line; i++) {
		for (j = 1; j < row - 1; j++) {
			if (arr[j - 1][i] == arr[j][i] && arr[j][i] == arr[j + 1][i] && arr[j][i] != ' ') {
				return arr[j][i];
			}
		}
	}

	// �ж϶Խ��ߣ�ֻҪ��һб��������3������λ�ö���ͬһ�����ӣ���һ��ʤ��
	

	// �ж�ƽ�ֺ���Ϸ����
	int index = is_full(arr, row, line);
	if (0 == index) {
		return '2';
	}
	if(1 == index){
		return '1';
	}
}

void play(char arr[ROW][LINE], int row, int line) {
	char ret = '0';
	//Ҫ�������壬ֱ������
	while (1) { 
		
		// ������壺
		player(arr, row, line);
		//print(arr, row, line);//�ȵ��������һ��
		
		ret = judge(arr, row, line);// ˫��ÿ��һ����Ҫ�ж�һ�Σ�
								    // ������������º����ˣ����ڵ�����������һ��
		// ����ѭ�����ⶼ���ԣ�ѭ�������ж���break��ѭ������break��ѭ�����жϣ�
		// ѭ����ȽϺã���Ϊ����������if���ֻ��Ҫһ�鼴��
		if (ret != '1') {
			break;
		}

		// �������壺
		computer(arr, row, line);
		print(arr, row, line);
		// �ж���֣���������(1)���ǽ���(0)����ƽ�֣�2��
		// ����������գ�����0��ȷ��˭Ӯ��������÷�������������������ַ���Ϊ����
		// int ret = judge(arr, row, line);       ����
		// ���Լ�����'1'
		//     ���Ӯ��'*'
		//     ����Ӯ��'#'
		//	   ƽ�֣�  '2'
		ret = judge(arr, row, line);
		if (ret != '1') {
			break;
		}	
	}

	if ('*' == ret) {
		printf("��Ϸ��������һ�ʤ\n");
	}
	else if ('#' == ret) {
		printf("��Ϸ���������Ի�ʤ\n");
	}
	else if ('2' == ret) {
		printf("��Ϸ������˫��ƽ��\n");
	}
}