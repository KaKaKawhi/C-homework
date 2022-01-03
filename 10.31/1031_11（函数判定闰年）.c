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

    //简化：
    /*if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return 1;
    }*/

    //优化：
    if ((0 == year % 4 && 0 != year % 100) || (0 == year % 400)) {
        return 1;
    }
    return 0;
}

int main()
{
    int year = 0;
    scanf("%d", &year);

    //if (is_leap_year(year) == 1) {
    // 直接写为if (is_leap_year(year))，根据函数返回值作为条件表达式的
    // 逻辑结果（无需计算），然后逻辑判定即可。

    if (is_leap_year(year))
        printf("是闰年");
    }
    else {
        printf("不是闰年");
    }

    return 0;
}

