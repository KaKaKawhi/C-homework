#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ж�һ�����Ƿ�Ϊ����
int main() {

    int n = 0;
    scanf("%d", &n);
    if (n % 2 == 0) {      //%2 Ҫô0 Ҫô1  //���ʽ����ֵҲ�ᱨ�����Բ��÷���д
        printf("even");
    }
    else {
        printf("odd");
    }

    return 0;
}

