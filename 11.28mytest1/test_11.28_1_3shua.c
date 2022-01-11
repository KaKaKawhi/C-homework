#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 求两个正整数最小公倍数

int Min_Mul(int a, int b) {
    // 思考：两个数的最小公倍数的最小值可能是两个数的最大值
    int max = a > b ? a : b;
    while (1) {
        if ((0 == max % a) && (0 == max % b)) {
            // 最大公约数：return (a * b) / max;
            return max;
        }
        max++;
    }

    // 法2：(答案，自己写模糊)
    // 思考：其中一个数的整数i倍如果是公倍数，一定也是另一个数的倍数
    /*int i = 1;
    while ((i * a) % b != 0) {
        i++;
    }
    return i * a;*/
}

int main()
{ 
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int ret = Min_Mul(a, b);
    printf("%d\n", ret);

    return 0;
}