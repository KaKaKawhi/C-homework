#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

// дһ�����룺��ӡ100~200֮�������

// �ж��������������������1�����򷵻�0
int Is_Prime(int n) {
	int i = 0;
	for (i = 2; i <= sqrt(n); i++) {
		if (0 == (n % i)) {
			// �ܱ����������1����������˵��������������
			return 0;
		}
	}
	return 1;
}

int main()
{
	int start = 100;
	int end = 200;
	int i = 0;
	// ����2��3��û�������������ڣ�ÿ�ο�������һ����������Ҫע����ʼ������Ϊ����
	for (i = 101; i <= 200; i += 2) {
		if (Is_Prime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}