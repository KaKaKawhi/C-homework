#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1

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

// ð�������õ����飩

int main() {

	int arr[3] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < len; i++) {
		scanf("%d", &arr[i]);
	}
	int j = 0;
	for (i = 0; i < len - 1; i++) {
		for (j = 0; j < len - 1 - i; j++) {
			if (arr[j] < arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
 }