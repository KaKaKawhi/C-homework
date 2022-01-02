#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 编写函数，不允许创建临时变量，求字符串长度

// 3刷第一次写不会
//int My_Strlen(char str[]) {
//
//    // 思考：例如求“abc”，相当于调用求“ab”然后加1，
//    // 直到最后仅剩一个字符，从前往后算是因为，
//    // 每次可以将最后面的字符改为\n作为结尾
//
//    if () {
//        return 1 + My_Strlen(str);
//    }
//    else {
//        return 1;
//    }
//}

// 看解析后改正：
int My_Strlen(char str[]) {

    // 正确思考：字符串名称代表字符串首地址，
    // 通过*str和\0的关系来判别是否继续递归，
    // 通过str+1（str向后移动一位）来分别求abc，bc，c
    // 逐渐缩短剩余字符串长度

    if (*str != '\0') {
        return 1 + My_Strlen(str + 1);
    }
    else {
        return 0;
    }
}

int main()
{
    char str[20] = "";
    scanf("%s", str);
    int len = My_Strlen(str);
    printf("%d\n", len);

    return 0;
}