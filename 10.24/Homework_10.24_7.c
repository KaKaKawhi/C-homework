#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {


	
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	// ���˷�����ͨ�������ӡ��������ð�����򣬵�3����û��Ҫ
	/*if (a > b && a > c) {
		if (b > c) {
			printf("%d %d %d", a, b, c);
		}
		else {
			printf("%d %d %d", a, c, b);
		}
	}
	if (b > a && b > c) {
		if (a > c) {
			printf("%d %d %d",b,a,c);
		}
		else {
			printf("%d %d %d",b,c,a);
		}
	}
	if (c > a && c > b) {
		if (a > b) {
			printf("%d %d %d", c,a,b);
		}
		else {
			printf("%d %d %d",c,b,a);
		}
	}*/

	//�𰸷�����λ�õ���ʽ��ʵ�֣�������
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;//��ͬ���������������Ӱ��
		a = c;
		c = tmp;
	}
	if (b < c) {
		int tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);

	return 0;
}

