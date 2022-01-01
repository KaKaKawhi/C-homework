#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20

int main() {

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	// 思考：两个数的最大公约数最小可能为1，最大可能为两数中的较小数
	int max = a < b ? a : b;
	int min = 1;
	int i = 0;
	// 小技巧：从大往小找，一旦找到就是最大公约数，直接退出打印循环
	for (i = max; i >= min; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			printf("%d\n", i);
			break;
		}
	}

	return 0;
}