#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {


	//答案用的是换位置的形式来实现
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
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
	}

	return 0;
}

