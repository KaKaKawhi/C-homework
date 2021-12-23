#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 输出描述：
// 包括两行：
// 第一行为“Hello world!”
// 第二行为printf(“Hello world!”)调用后的返回值。

int main() {

    int a = printf("Hello world!");
    // 当打印a时，a才会被运行，即运行一次printf("Hello world!")
    // 同时，printf返回 Hello world! 的字符数（空格也算）
    // /n要放在%d前面才能使得输出的内容是两行
    printf("\n%d", a);

    return 0;
}