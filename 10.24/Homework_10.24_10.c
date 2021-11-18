#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

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

