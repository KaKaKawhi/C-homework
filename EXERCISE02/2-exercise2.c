#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���1-100֮�������
int main() {

    int a = 1;
    int b = 100;
    int i = 0;
    for (i = a; i <= b; i++) {
        if (i % 2 != 0) {      //%2 Ҫô0 Ҫô1
            printf("%d ",i);
        }
    }
    

    return 0;
}

