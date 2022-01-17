#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

// 写一个代码：打印100~200之间的素数

// 判定素数，如果是素数返回1，否则返回0
int Is_Prime(int n) {
	int i = 0;
	for (i = 2; i <= sqrt(n); i++) {
		if (0 == (n % i)) {
			// 能被除了自身和1的数整除，说明此数不是素数
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
	// 除了2和3，没有两个素数相邻，每次可以跳过一个数，但是要注意起始数必须为素数
	for (i = 101; i <= 200; i += 2) {
		if (Is_Prime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}