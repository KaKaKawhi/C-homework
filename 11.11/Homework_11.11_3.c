#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int diff(int a, int b);

int main() {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int ret = diff(a, b);
    printf("%d", ret);

    return 0;
}

int diff(int a, int b) {
    int mask = a ^ b;
    //���漴Ϊ���������Ľ�����ж���1
    int count = 0;
    while (mask) {
        if ((mask & 1) == 1) {
            count++;
        }
        mask >>= 1;
    }
    //����2��
    /*while (mask) {
        mask = (mask - 1) & mask; ÿ��ȥ����mask�Ķ��������е����ұߵ�һ��1
        count++;
    }*/
    return count;
}

//����2���ֱ���1������Ƚϣ�Ȼ��ͬʱ����