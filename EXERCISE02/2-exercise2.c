#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//输出1-100之间的奇数
int main() {

    int a = 1;
    int b = 100;
    int i = 0;
    for (i = a; i <= b; i++) {
        if (i % 2 != 0) {      //%2 要么0 要么1
            printf("%d ",i);
        }
    }
    

    return 0;
}

