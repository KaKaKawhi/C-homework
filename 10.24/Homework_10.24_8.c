#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//дһ�������ӡ1-100֮������3�ı���������

int main() {

	int a = 1;
	int b = 100;
	int times = 3;
	int i = 0;
	for (i = a; i <= b; i++) { //Ҳ���Դ�3��ʼÿ�μ�3
		if (i % times == 0) {
			printf("%d ",i);
		}
	}

	return 0;
}


// ��ˢ������ˢ���ʼǣ�
int main() {

	int n = 3;
	int start = 1;
	int end = 100;
	int i = 0;
	for (i = start; i <= end; i++) {
		if (i % n == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}