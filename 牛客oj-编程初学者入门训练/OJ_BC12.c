#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    char c = 0;
    scanf("%c", &c);
    int len = 5;
    int i = 0;
    int j = 0;
    int k = 0;
    // ����������
    for (i = 1; i <= len; i++) {
        // ����ÿ�еĿո��ӡ
        for (j = 1; j <= len - i; j++) {
            printf(" ");
        }
        // ����ÿ�е��ַ���ӡ
        for (k = 1; k <= i; k++) {
            printf("%c ", c);
        }
        printf("\n");
    }

    return 0;
}