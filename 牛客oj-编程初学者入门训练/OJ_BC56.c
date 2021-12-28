#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        while (n) {
            printf("*");
            n--;
        }
        printf("\n");
    }

    return 0;
}