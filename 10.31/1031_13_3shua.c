#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ����n��쳲��������������������

void Pri_Tab(int n) {
    int i = 0;
    int j = 0;

    // ��������
    for (i = 1; i <= n; i++) {
        // ����ÿ�д�ӡ
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }
}

int main()
{
    // ��ӡ������
    int n = 0;
    scanf("%d", &n);
    Pri_Tab(n);

    return 0;
}