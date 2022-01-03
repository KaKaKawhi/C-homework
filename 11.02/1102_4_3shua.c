#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

// 递归：当n大于1，n!=n*(n-1)!；当n小于1，阶乘为1

//int Fac(int n) {
//    if (n > 1) {
//        return n * Fac(n - 1);
//    }
//    else {
//        return 1;
//    }
//}


// 非递归：
int Fac(int n) {
    int ret = 1;
    int i = 0;
    for (i = 2; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fac(n);
    printf("%d\n", ret);

    return 0;
}