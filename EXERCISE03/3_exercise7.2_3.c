#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 编写函数求n的阶乘，不考虑溢出
// n! = (n-1)! * n , (n-1)! = (n-2)! * (n-1)
// 限定条件：n > 0     接近限定条件：n--

int factorial(int n) {
    /*if (n) {
        return n * factorial(n-1);  //自己写
    }
    else {
        return 1;
    }*/
    //最好先列出公式，然后写
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = factorial(n);
    printf("%d\n", ret);

    return 0;
}

