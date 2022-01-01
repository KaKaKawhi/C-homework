#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//打印1000年到2000年之间的闰年

int main() {

	int a = 1000;
	int b = 2000;
	int i = 0;
	for (i = a; i <= b; i++) {
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {  //前两项应该大括号扩在一起
			printf("%d ", i);                                      //也可以分成两个if语句
		}
	}

	return 0;
}

// 三刷（二刷见笔记）
int main() {

	int start = 1000;
	int end = 2000;
	int i = 0;
	for (i = start; i <= end; i++) {
		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) {
			printf("%d ", i);
		}
	}

	return 0;
}
