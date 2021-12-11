#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 猜数字实现

int main() {

    int i = 0;
    // 涉及分数，和应该有小数 !!!!!!!!!!
    double sum = 0.0;
    //for (i = 1; i <= 100; i++) {
    //    /*if (i >= 2) {    错误！！！！！！！！！！！！！  循环变量i在循环体中被乱改
    //        i = -i;
    //    }*/
    //    //1.0 !!!!!!!!!!!!!!!
    //    sum += 1.0 / i;
    //}
    // 更正：
    // 作为指标数将i的正负改变
    int flag = 1;
    for (i = 1; i <= 100; i++) {
        sum += 1.0 / (i * flag);
        // 下次flag变为-1
        flag = -flag;
    }

    printf("%.2lf\n", sum);

    return 0;
}