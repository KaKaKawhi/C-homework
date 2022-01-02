#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 3刷
// 非递归求第n个斐波那契数

int Fib(int n) {

    // 思考：当n小于等于2，斐波那契数都为1，
    // 当n大于2，斐波那契数为Fib(n-1)+Fib(n-2)

    // 表示相邻的三个数，起始都赋值为1以便
    // n<=2时直接输出c,n>2时c=a+b也方便
    int a = 1;
    int b = 1;
    int c = 1;
    if (n <= 2) {
        return c;
    }
    else {
        int i = 0;
        for (i = 3; i <= n; i++) {
            c = a + b;
            // a和b依次向后移动一位
            a = b;
            b = c;
        }
        return c;
    }
}

// 优化：
int Fib(int n) {

    int a = 1;
    int b = 1;
    int c = 1;
    
    while (n > 2) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    // n <= 2时，无需单独输出，只要保证c为1，在最后整体输出即可
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d\n", ret);

    return 0;
}