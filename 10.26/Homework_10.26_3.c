#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//两位数字，把每一位提出来就可以判断
int main() {

    int a = 1;
    int b = 100;
    int count = 0;
    int i = 0;
    for (i = a; i < b; i++) {
        if (i % 10 == 9) {
            count++;
        }
        if (i / 10 == 9) {
            count++;
        }
        // 不可以合并写if (i / 10 == 9 || i % 10 == 9),
        // 因为如果判断99，或前面的满足后就直接加1，或后面的没有加上
    }
    printf("%d\n", count);

    return 0;
}

