#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归求n的阶乘，不考虑溢出

int Fac(int n) {
    
    // 思考：当n大于1，n!=(n-1)!*n，当n为1，阶乘直接为1

    if (n > 1) {
        return n * Fac(n - 1);
    }
    else {
        return 1;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fac(n);
    printf("%d\n", ret);

    return 0;
}