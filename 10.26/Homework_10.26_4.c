#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main() {

    int a = 1;
    int b = 100;
    int i = 0;
    double sum1 = 0.0;
    for (i = a; i <= b; i += 2) {
        sum1 += 1.0 / i;  //1.0，否则会出错
    }

    double sum2 = 0.0;
    for (i = a + 1; i <= b; i += 2) {
        sum2 += 1.0 / i;  //1.0
    }

    printf("%lf\n", sum1 - sum2);

    //实现加减交替：
    /*int i = 0;
    double sum = 0.0;
    int flag = 1;
    for (i = 1; i <= 100; i++)
    {
        sum += flag * 1.0 / i;
        flag = -flag;
    }
    printf("%lf\n", sum);*/

    return 0;
}

