#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 写函数判断一年是否为闰年

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
        printf("是闰年");
    }
    else {
        printf("不是闰年");
    }
    
    return 0;
}


// 三刷优化：（二刷见笔记）
int is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main()
{
    int year = 0;
    scanf("%d", &year);
    // 直接得出条件表达式逻辑结果，无需计算，然后判定
    if (is_leap_year(year)) {
        printf("是闰年");
    }
    else {
        printf("不是闰年");
    }

    return 0;
}