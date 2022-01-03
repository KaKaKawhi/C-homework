#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 递归实现求第n个斐波那契数
// 递归：(个人觉得递归的方法更容易想出来)
// 规律：if (1 == n || 2 == n) {return 1;}     其他为前两项之和 （列公式）
// 限定条件：n > 2
// 接近限定条件：return fib(n - 2) + fib(n - 1)

//int fib(int n) {
//    if (n <= 2) {    //相当于if (1 == n || 2 == n)
//        return 1;
//    }
//    else {
//        return fib(n - 1) + fib(n - 2);
//    }
//    // 个人觉得带着else更加清晰

// 非递归实现求第n个斐波那契数
// 每三个数字一组，每次向后移动一位，直到最后一个数字是所求位数
int fib(int n) {
    int a = 1;
    int b = 1;
    int c = 1;    //当n = 1或者2，返回c=1
    while (n > 2) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d\n", ret);

    return 0;
}

