#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	// 控制行数
	int i = 0;
	// 控制每行打印
	int j = 0;
	// 打印上半个：
	for (i = 1; i <= n; i++) {
		// 打印每行的空格
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		// 打印每行的*
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	// 打印下小半个
	for (i = 1; i <= n - 1; i++) {
		// 打印每行的空格
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		// 打印每行的*
		for (j = 1; j <= n - i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}


// 优化：
