#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1

// 思考：方法1：打印顺序不变为abc，a最大，将abc中的值交换
//       方法2：不交换，按从大到小打印abc

// 方法1：
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    int tmp = 0;
//    if (b > a) {
//        tmp = b;
//        b = a;
//        a = tmp;
//    }
//    if (c > a) {
//        tmp = c;
//        c = a;
//        a = tmp;
//    }
//    if (c > b) {
//        tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d %d %d", a, b, c);
//
//    return 0;
//}


// 方法2：
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if ((a > b) && (a > c)) {
		if (b > c) {
			printf("%d %d %d", a, b, c);
		}
		else {
			printf("%d %d %d", a, c, b);
		}
	}

	if ((b > a) && (b > c)) {
		if (a > c) {
			printf("%d %d %d", b, a, c);
		}
		else {
			printf("%d %d %d", b, c, a);
		}
	}

	if ((c > a) && (c > b)) {
		if (a > b) {
			printf("%d %d %d", c, a, b);
		}
		else {
			printf("%d %d %d", c, b, a);
		}
	}

	return 0;
}

// 冒泡数组倒也咩必要