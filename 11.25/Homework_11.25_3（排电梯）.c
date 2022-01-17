#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d", &n);
    int time = (n / 12) * 4 + 2;
    printf("%d\n", time);

    return 0;
}