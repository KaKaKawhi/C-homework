#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//  递归迭代
// 递归求第n个斐波那契数（不考虑溢出）

int fib(int n) {
    if (n <= 2) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d\n", ret);

    return 0;
}


// 三刷：
int Fib(int n) {

    // 思考：当n小于等于2，斐波那契数都为1，
    // 当n大于2，斐波那契数为Fib(n-1)+Fib(n-2)

    if (n <= 2) {
        return 1;
    }
    else {
        return Fib(n - 1) + Fib(n - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d\n", ret);

    return 0;
}


// 递归的方式求，如果求第50个，参数很大，每次函数调用都
// 会在内存的栈区申请空间，如果不限制，会栈溢出
// 解决：非递归方式：

