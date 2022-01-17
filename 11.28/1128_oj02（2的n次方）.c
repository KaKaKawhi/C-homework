#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 不使用累计乘法的基础上，通过移位运算（ << ）实现2的n次方的计算。

// << 无法实现负数！！！
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        printf("%d\n", 1 << n);
    }
    return 0;
}