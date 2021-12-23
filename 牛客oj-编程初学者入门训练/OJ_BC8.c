#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。
// 十六进制整数ABCDEF对应的十进制整数，所占域宽为15。

int main() {

    // 要带前缀0X
    // 0X是十六进制前导，0是八进制前导。
    // 将十六进制转为十进制时，不要忘记十六进制是以0X为前导。
    // 需要在十六进制前加上0X，以告诉编译系统这是十六进制数，不加默认为变量名
    int n = 0XABCDEF;
    // printf可以使用使用格式控制串“%md”输出域宽为m的十进制整数。
    printf("%15d", n);

    return 0;

}