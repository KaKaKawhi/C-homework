#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��ӡ1000�굽2000��֮�������

int main() {

	int a = 1000;
	int b = 2000;
	int i = 0;
	for (i = a; i <= b; i++) {
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {  //ǰ����Ӧ�ô���������һ��
			printf("%d ", i);                                      //Ҳ���Էֳ�����if���
		}
	}

	return 0;
}

// ��ˢ����ˢ���ʼǣ�
int main() {

	int start = 1000;
	int end = 2000;
	int i = 0;
	for (i = start; i <= end; i++) {
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
			printf("%d ", i);
		}
	}

	return 0;
}
