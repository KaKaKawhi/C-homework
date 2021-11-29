#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//输入描述：
//输入包含一个整数n(1 ≤ n ≤ 30)
//输出描述：
//输出一个整数，即小乐乐可以走的方法数。
// 列举出几个典例就会发现：他是以斐波那契数列排的

int fib(int n) {
    if (1 == n) {
        return 1;
    }
    if (2 == n) {
        return 2;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {

    int n = 0;
    if (scanf("%d", &n) >= 1 && scanf("%d", &n) <= 30) {
        int ret = fib(n);
        printf("%d\n", ret);
    }

    return 0;
}