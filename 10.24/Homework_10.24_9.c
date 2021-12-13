#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

	int a = 20;
	int b = 40;
	int i = 0;
	int min = 0;
	int ret = 0;
	// 求两个数的较小数，因为他们的最大公约数最大可能为此数，最小可能为1
	if (a < b) {
		min = a;
	}
	else {
		min = b;
	}
	//优化：int min = a < b ? a : b;
	for (i = 1; i <= max; i++) {     //最好从max开始--来算，更简便直接while（1），
		                              //一旦满足就通过break退出，因为从大到小找
		if (a % i == 0 && b % i == 0) {
			ret = i;
		}
	}
	printf("%d\n", ret);

	//整体优化：
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	int min = a < b ? a : b;
	for (i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			printf("%d\n", i);
			break;
		}
	}

	//答案辗转相除法
	/*int a = 20;
	int b = 40;
	int c = 0;

	while (c = a % b) {
		a = b;
		b = c;
	}

	printf("%d\n", b);*/


	//拓展：（a * b）/ 他们的最大公约数 = 他们的最小公倍数！！！！！！！！！！
	return 0;
}

