#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//���������������������������Լ��
//���磺
//���룺20 40
//�����20

int main() {

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	// ˼���������������Լ����С����Ϊ1��������Ϊ�����еĽ�С��
	int max = a < b ? a : b;
	int min = 1;
	int i = 0;
	// С���ɣ��Ӵ���С�ң�һ���ҵ��������Լ����ֱ���˳���ӡѭ��
	for (i = max; i >= min; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}