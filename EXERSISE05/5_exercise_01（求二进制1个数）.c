#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// �����ʵ����һ�������洢���ڴ��еĶ�������1�ĸ���

int main() {

    int n = 0;
    scanf("%d", &n);
    int count = 0;
    while (n) {
        if (n & 1 == 1) {
            count++;
        }
        n >>= 1;
    }
    printf("���������ڴ��еĶ�������1�ĸ�����%dλ", count);

    return 0;
}
