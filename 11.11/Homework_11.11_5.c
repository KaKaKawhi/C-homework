#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int NumberOf1(int n) {
    // write code here
    int i = 0;
    int count = 0;
    for (i = 0; i < 32; i++) {
        if (((n >> i) & 1) == 1) {
            count++;
        }
    }
    return count;
}                               //���ʼǺܶ�����

int main() {

    int n = 100;
    int ret = NumberOf1(n);
    printf("%d", ret);

    return 0;
}

