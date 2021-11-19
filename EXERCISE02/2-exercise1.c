#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//判断一个数是否为奇数
int main() {

    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 0) {      //%2 要么0 要么1  //表达式被赋值也会报错，所以不用反着写
        printf("even");
    }
    else {
        printf("odd");
    }

    return 0;
}

