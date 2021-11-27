#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 编代码实现求一个整数存储在内存中的二进制中1的个数

int main() {

    int n = 0;
    scanf("%d", &n);
    int count = 0;
    while (n) {
        if (n & 1 == 1) {
            count++;
        }
        n >>= 1;
    }
    printf("该整数在内存中的二进制中1的个数是%d位", count);

    return 0;
}
