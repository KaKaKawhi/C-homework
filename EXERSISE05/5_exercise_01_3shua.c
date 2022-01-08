#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 求一个整数储存在内存中的二进制的1的个数

//int main(){
//
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (n & (1 << i)) {
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//
//    return 0;
//}


// 看了答案后的其他方法：

// 方法2（类似于十进制数对10取余，得到最低位，对10取商，抛弃最低位）
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n) {
//		if (1 == (n % 2)) {
//			sum++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

// 方法3（n & (n - 1) 会将n最右边的第一个1抛弃，需记住！！！）
int main() {

	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	while (n) {
		sum++;
		n = n & (n - 1);
	}
	printf("%d\n", sum);

	return 0;
}