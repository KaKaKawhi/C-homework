#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



int main() {

    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    //ԭ��3^0=3  3^3=0
    a = a ^ b;
    b = a ^ b; //b=(a^b)^b=a^(b^b)=a^0=a;  ������ʽa = a ^ b�����룩
    a = a ^ b; //a=(a^b)^b=(a^b)^a=b^(a^a)=b^0=b;  (����ʽa = a ^ b��b = a����)
    printf("a = %d b = %d", a, b);

    return 0;
}

