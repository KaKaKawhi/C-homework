#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// д�����ж�һ���Ƿ�Ϊ����

int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return 1;
    }
    if (year % 400 == 0) {
        return 1;
    }
    return 0;
}

int main()
{
    int year = 0;
    scanf("%d", &year);
    if (is_leap_year(year) == 1) {
        printf("������");
    }
    else {
        printf("��������");
    }
    
    return 0;
}

