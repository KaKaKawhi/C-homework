#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    int x = 100;
    int i = 0;

    for (i = 1; i <= 31; i += 2) {//反向偶数位  正向：i = 30 i >= 0 i-= 2
        printf("%d", (x >> i) & 1);
    }
    printf("%c",'\n');//这样也可，或者printf（"\n"）；
    //printf（'\n'）错误，因为函数原型：int printf(char *format, args, ...);
                      // 功       能：按format指向的格式字符串所规定的格式，将输出表列args的值输出
                      // 返  回   值：输出字符的个数，若出错，返回负数

    for (i = 0; i <= 30; i += 2) {//从零开始   反向奇数位  zhengxiang:i = 31 i >= 1
        printf("%d", (x >> i) & 1);
    }


    return 0;
}

