#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

	int a = 20;
	int b = 40;
	int i = 0;
	int max = 0;
	int ret = 0;
	if (a < b) {
		max = a;
	}
	else {
		max = b;
	}
	for (i = 1; i <= max; i++) {     //��ô�max��ʼ--���㣬�����ֱ��while��1����
		                              //һ�������ͨ��break�˳�����Ϊ�Ӵ�С��
		if (a % i == 0 && b % i == 0) {
			ret = i;
		}
	}
	printf("%d\n", ret);

	//��շת�����
	/*int a = 20;
	int b = 40;
	int c = 0;

	while (c = a % b) {
		a = b;
		b = c;
	}

	printf("%d\n", b);*/


	//��չ����a * b��/ ���ǵ����Լ�� = ���ǵ���С������
	return 0;
}

