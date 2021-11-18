#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int max(int a,int b);

int main()
{
    
    int a = 10;
    int b = 20;
    int maxnum = max(a, b);
    printf("%d\n", maxnum);

    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}