#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

int main()
{
    int money = 20;
    int emp_count = 0;//空瓶数
    int cola_count = 0;//可获得的汽水数
    cola_count = 20;
    int mask = cola_count;//代替原始可获得汽水数来计算
    while (mask) {
        mask--;
        emp_count++;
        if (2 == emp_count) {
            cola_count++;
            mask++;
            emp_count = 0;  //空瓶被换掉
        }
    }
    printf("%d\n",cola_count);

    return 0;
}

