#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<math.h>    //别忘记

// 写函数打印100-200的素数

int judge(int n) {
    int i = 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  //一旦可以被整除，不是素数，返回0
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    int i = 0;

    for (i = 100; i <= 200; i++) {
        if (judge(i) == 1) {
            printf("%d ", i);
        }
    }

    // 优化：除了2、3两个素数相邻，其余不可能出现两个相邻素数，
    // 所以可以用i+=2来更新循环条件变量，但是此种优化，首个判断的数
    // 必须为素数，易得100不是素数，101是，所以从101开始

    for (i = 101; i <= 200; i += 2) {
        // 直接写为if (judge(i))，直接根据函数返回值（无需计算）得到
        // 条件表达式的逻辑结果，然后判定即可
        if (judge(i) == 1) {
            printf("%d ", i);
        }
    }

    /*scanf("%d", &n);
    if (1 == judge(n)) {
        printf("是素数");
    }
    else {
        printf("不是素数");
    }*/
    
    return 0;
}

