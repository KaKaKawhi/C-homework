#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归求第n个斐波那契数（不考虑溢出）

void Pri_Tab(int n) {
    int i = 0;
    int j = 0;

    // 控制行数
    for (i = 1; i <= n; i++) {
        // 控制每行打印
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
}

int main()
{
    // 打印的行数
    int n = 0;
    scanf("%d", &n);
    Pri_Tab(n);

    return 0;
}