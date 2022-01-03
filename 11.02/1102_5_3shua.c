#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归和非递归分别实现strlen

// 递归：返回"abc"长度，相当于返回调用求"bc"的长度加1，
// 以字符串名称（字符数组首地址）来控制，每次向后移动一位，
// 直到移动到\0的位置，返回0

//int My_Strlen(char str[]) {
//    if('\0' == *str) {
//        return 0;
//    }
//    else {
//        return 1 + My_Strlen(str + 1);
//    }
//    // 个人觉得带else更加清晰
//}


// 非递归：

int My_Strlen(char str[]) {
    int ret = 0;
    while (*str != '\0') {
        ret++;
        str++;
    }
    return ret;
}


int main()
{
    char str[20] = "";
    scanf("%s", str);
    int len = My_Strlen(str);
    printf("%d\n" ,len);

    return 0;
}