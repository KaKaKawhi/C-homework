#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

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

