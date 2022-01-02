#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    char c = 0;
    scanf("%c", &c);
    int len = 5;
    int i = 0;
    int j = 0;
    int k = 0;
    // 控制行数，
    for (i = 1; i <= len; i++) {
        // 控制每行的空格打印
        for (j = 1; j <= len - i; j++) {
            printf(" ");
        }
        // 控制每行的字符打印
        for (k = 1; k <= i; k++) {
            printf("%c ", c);
        }
        printf("\n");
    }

    return 0;
}