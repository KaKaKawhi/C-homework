#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

// 写一个代码：打印100~200之间的素数

int Is_Prime(int i) {
	int j = 0;
	for (j = 2; j <= sqrt(i); j++) {
		// 一旦有除了自身和1能除尽的数，则该数不是素数，直接返回0
		if (i % j == 0) {
			return 0;
		}
	}
	// 如果该数是素数，返回1
	return 1;
}


int main() {

	int start = 100;
	int end = 200;
	int i = 0;

	//for (i = start; i <= end; i++) {
	//	// 如果该数是素数，返回1，条件表达式直接（不用计算）得到逻辑结果，然后判定为真
	//	if (Is_Prime(i)) {
	//		printf("%d ", i);
	//	}
	//}

	// 看了答案优化一下：
	// 因为出了2和3之外，不会有两个连续相邻的数据同时为素数
	// 优化：（除了2，3，没有任何两个素数会相邻），但是用此优化需注意：！！！！！
	// 首先，所求的素数范围不能包括2和3，其次，起始的第一个判定数必须为素数
	
	for (i = start + 1; i <= end; i += 2) {
		// 如果该数是素数，返回1，条件表达式直接（不用计算）得到逻辑结果，然后判定为真
		if (Is_Prime(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}