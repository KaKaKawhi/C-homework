#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����n�Ľ׳�
int main() {

    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int mul = 1;
    for (i = 0; i < n; i++) {
        mul *= (i + 1);
    }
    printf("%d", mul);

    return 0;
}

