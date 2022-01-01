#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写一个代码打印1-100之间所有3的倍数的数字

int main() {

	int a = 1;
	int b = 100;
	int times = 3;
	int i = 0;
	for (i = a; i <= b; i++) { //也可以从3开始每次加3
		if (i % times == 0) {
			printf("%d ",i);
		}
	}

	return 0;
}


// 三刷：（二刷见笔记）
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