#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 三刷：（二刷见笔记手写）
//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1

// 方法1：最后还是按照a b c顺序打印，通过交换来排序      也太笨！！！
//int main() {
//
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    
//    // 首先得到a b中的较大数
//    // a = a > b ? a : b;
//    // 再得到a b c中的最大数，放入a
//    // a = a > c ? a : c;
//    // 最后找到
//    // 上段代码错误，不能直接赋值，否则有些值会被覆盖，而且无法实现目的
//
//    if ((a > b) && (a > c)) {
//        // 最大值已为a，无需交换a
//        if (c > b) {
//            int tmp = c;
//            c = b;
//            b = tmp;
//        }
//    }
//    if ((b > a) && (b > c)) {
//        // ab交换
//        int tmp = a;
//        a = b;
//        b = tmp;
//        if (c > b) {
//            int tmp = c;
//            c = b;
//            b = tmp;
//        }
//    }
//    if ((c > a) && (c > b)) {
//        // ac交换
//        int tmp = a;
//        a = c;
//        c = tmp;
//        if (c > b) {
//            int tmp = c;
//            c = b;
//            b = tmp;
//        }
//    }
//    printf("%d %d %d\n", a, b, c);
//    
//    return 0;
//}

// 方法2：找出最大值打印，找出。。。之后打印          太笨！！！！
int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (b > c) {
			printf("%d %d %d\n", a, b, c);
		}
		else {
			if (a > c) {
				printf("%d %d %d\n", a, c, b);
			}
			else {
				printf("%d %d %d\n", c, a, b);
			}
		}	
	}
	else {
		if (a > c) {
			printf("%d %d %d\n", b, a, c);
		}
		else {
			if (b > c) {
				printf("%d %d %d\n", b, c, a);
			}
			else {
				printf("%d %d %d\n", c, b, a);
			}
		}
	}

	return 0;
}