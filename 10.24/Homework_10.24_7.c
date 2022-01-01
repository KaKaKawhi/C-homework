#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1

int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	// 个人方法：通过排序打印，可以用冒泡排序，但3个数没必要
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

	//答案法：换位置的形式来实现，更清晰
	if (a < b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c) {
		int tmp = a;//不同代码块重名变量不影响
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

// 冒泡排序（用到数组）

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