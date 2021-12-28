#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int n = 0;
    scanf("%d", &n);

    /*printf("%d", n % 10);
    n /= 10;
    printf("%d", n % 10);
    n /= 10;
    printf("%d", n % 10);
    n /= 10;
    printf("%d", n % 10);*/

    while (n) {          //循环实现！！！！！！！要有这个思想
        printf("%d", n % 10);
        n /= 10;
    }

    return 0;
}

