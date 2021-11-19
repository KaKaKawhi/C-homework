#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 实现一个函数来交换两个整数的内容。

void exchange(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    exchange(&a, &b);
    printf("a=%d b=%d", a, b);

    return 0;
}

