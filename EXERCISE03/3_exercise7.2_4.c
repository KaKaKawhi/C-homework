#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//  �ݹ����
// ��д�������n��쳲�������

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

