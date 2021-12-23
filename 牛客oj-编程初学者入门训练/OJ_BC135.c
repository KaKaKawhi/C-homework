#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main() {

    // 所有三位整数，100-999
    int i = 0;
    // 数质数
    int sum = 0;
    for (i = 100; i <= 999; i++) {
        int j = 0;
        // 判断质数的指标
        int index = 1;
        for (j = 2; j <= sqrt(i); j++) {
            if (0 == i % j) {
                index = 0;
                break;
            }
        }
        //相当index等于1
        if (index) {
            sum++;
        }
    }
    printf("%d\n", sum);

    return 0;
}