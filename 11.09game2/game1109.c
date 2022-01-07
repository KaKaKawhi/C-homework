#define _CRT_SECURE_NO_WARNINGS 1

#include "game1109.h"

// ����ʼ����Ϊ*��
void Init(char board[ROW][LINE]) {
	
	int i = ROW;
	int j = LINE;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			board[i][j] = '*';
		}
	}

}


// ��ӡ���̣�����ӡ�������̵���Ч��Χ����Ȧ����(���������Ż��������к�Ҳ��Ӧ��ӡ)
void Print(char board[ROW][LINE]) {

	int i = ROW;
	int j = LINE;
	for (i = 1; i < ROW - 1; i++) {
		for (j = 1; j < LINE - 1; j++) {
			if (LINE - 1 == j) {
				printf("| %c |", board[i][j]);
			}
			else {
				printf("| %c ", board[i][j]);
			}
		}// �ڲ�ѭ����β
		printf("\n");
		for (j = 1; j < LINE - 1; j++) {
			printf("����");
		}
		printf("\n");
	}//���ѭ����β

}


// ��������Ϊ'@'��
void LayThu(char board[ROW][LINE]) {

	// ��¼���������
	int n = 0;

	// ѭ���������λ�ã�ֱ��num���׶��Ϸ����ú�
	while (1) {

		// �����������ԭ��Ϊ   x:0 ~ (ROW-2-1)  y:0 ~ (LINE-2-1)
		//           +1��Χ��x:0 ~ ROW-2      y:0 ~ LINE-2
		// +1 ��ԭ������Ϊ�����ӡ��һȦ����ֻ��������Ȧ
		// ���� ROW LINE��Ϊ11�������±�Ϊ0~8���±����1����Ϊ��1~9����������Ȧ

		int x = rand() % (ROW - 2) + 1;
		int y = rand() % (LINE - 2) + 1;

		// �ж�λ�úϷ���
		if ('*' == board[x][y]) {
			if (n <= THUNUM) {
				board[x][y] = '@';
				n++;
			}
			else {
				printf("���Ѳ������\n");
				break;
			}
		}
		else {
			printf("����ɸ����...\n");
		}

	}// ��ѭ�������׽�β
	
}


// �Ų��λ����Χ����������Χ�м����ף��ͷ���'��'��
// ������ķ�������int��char�����ԣ���Ϊ�ں�����%c��ӡ��
// �ڴ��еĶ����ƽ���ȡ���7������λ����ӡ��ӦASCII�����ַ���
char Judge(char board[ROW][LINE], int x, int y) {

	int sum = 0;
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++) {	
		for (j = y - 1; j <= y + 1; j++) {
			// ����϶������ף������൱���һ��0����
			if ('@' == board[i][j]) {
				sum++;
			}
		}// �ڲ�ѭ����β
	}// ���ѭ����β

	char ret = sum + '0';
	// sum + '0' ���ڴ����൱��sum����'0'��Ӧ��ASCII��ֵ48��
	// ���磺sumΪ2���ڵײ㣬sum + '0'��sum��'0'�ֱ���תΪ�����ƣ�
	//      ��CPU�����Ϊ50��Ӧ�Ķ��������У�Ȼ��д���ڴ���ret��
	//      �ٵ�char���Ϳռ䷢���ضϣ��������Ȩֵλ��8������λ��
	//      ����ӡ����ʱ��ÿ��Ԫ������%c��ӡ�����������ӡ���ö�����
	//      ����Ӧ��ʮ���ƶ�Ӧ��ASCII���ַ�����Ϊ'sum'
	return ret;
}
// ���������Ż���
// ������ײ���Ϊ'1'�������̳�ʼ��Ϊ'0'�����������ֱ�ӷ��أ�
// һȦ���ַ�Ԫ��֮�ͼ�ȥ8*'0'���õ�һȦ������