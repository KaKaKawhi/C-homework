#define _CRT_SECURE_NO_WARNINGS 1

#include "game1107.h"

void game() {
	//��������
	char arr[ROW][LINE] = { 0 };  //Ϊ��ʹ�����̵���������Ķ���������ͷ�ļ���������
	// ��ʼ������(��ʼ����ʱ��ֻ��ʼ����������ĵط�Ϊ�ո񼴿ɣ�
	// �ڴ�ӡ���̵�ʱ��Ϳ��Խ����������ݣ�ͨ��printf�Ĵ�ӡ��ʽ������
	// ���뵽���̸���)
	int row = ROW;
	int line = LINE;
	initiate(arr, row, line);
	//��ӡ���̲���һ��
	print(arr, row, line);
	//����ģ��(��*��ʾ������ӣ���#��ʾ��������)
	play(arr, row, line);
}

void meun() {
	printf("-------------------\n");
	printf("-----1continue-----\n");
	printf("-----0     end-----\n");
	printf("-------------------\n");

}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		// ��ӡ�˵�
		meun();
		//�����û�������ִ��
		printf("�������Ƿ������Ϸ������������ѡ�");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	

}

//int main() {
//
//	test();
//	
//	return 0;
//}