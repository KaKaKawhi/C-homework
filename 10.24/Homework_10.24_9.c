#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

	int a = 20;
	int b = 40;
	int i = 0;
	int min = 0;
	int ret = 0;
	// ���������Ľ�С������Ϊ���ǵ����Լ��������Ϊ��������С����Ϊ1
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	//�Ż���int min = a < b ? a : b;
	for (i = 1; i <= max; i++) {     //��ô�max��ʼ--���㣬�����ֱ��while��1����
		                              //һ�������ͨ��break�˳�����Ϊ�Ӵ�С��
		if (a % i == 0 && b % i == 0) {
			ret = i;
		}
	}
	printf("%d\n", ret);

	//�����Ż���
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	int min = a < b ? a : b;
	for (i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d\n", i);
			break;
		}
	}

	//��շת�����
	/*int a = 20;
	int b = 40;
	int c = 0;

	while (c = a % b) {
		a = b;
		b = c;
	}

	printf("%d\n", b);*/


	//��չ����a * b��/ ���ǵ����Լ�� = ���ǵ���С��������������������������
	return 0;
}

