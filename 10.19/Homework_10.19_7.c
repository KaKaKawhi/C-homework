#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int max(int a,int b);

int main() {

    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);
    printf("%d %d", a / b, a % b);

    return 0;
}