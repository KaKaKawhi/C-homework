#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

// дһ�����룺��ӡ100~200֮�������

int Is_Prime(int i) {
	int j = 0;
	for (j = 2; j <= sqrt(i); j++) {
		// һ���г��������1�ܳ������������������������ֱ�ӷ���0
		if (i % j == 0) {
			return 0;
		}
	}
	// �������������������1
	return 1;
}

// ���˴��Ż�һ�£�
int Is_Prime(int i) {
	int j = 0;
	// ��Ϊ����2��3֮�⣬�����������������ڵ�����ͬʱΪ����
	for (j = 2; j <= sqrt(i); j += 2) {
		// һ���г��������1�ܳ������������������������ֱ�ӷ���0
		if (i % j == 0) {
			return 0;
		}
	}
	// �������������������1
	return 1;
}

int main() {

	int start = 100;
	int end = 200;
	int i = 0;
	for (i = start; i <= end; i++) {
		// �������������������1���������ʽֱ�ӣ����ü��㣩�õ��߼������Ȼ���ж�Ϊ��
		if (Is_Prime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}