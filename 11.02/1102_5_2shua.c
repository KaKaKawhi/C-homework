#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归和非递归分别实现strlen
// size_t strlen(char* str);
// 功能：函数返回字符串str 的长度(即空值结束符之前字符数目)。

// 非递归方式:
//int my_strlen(char str[]) {
//    char* mask = str;
//    int count = 0;
//    while (*mask != '\0') {   //最好写成'\0' != *mask
//        mask++;
//        count++;
//    }
//    return count;
//}

// 递归方式：
// 规律：求abc长度，相当于求 1 + bc的长度
// 限定条件：剩下的字符串不为'\0'
// 接近限定条件：指针右移
int my_strlen(char str[]) {
    char* mask = str;
    //最好写成'\0' != *mask
    if (*mask != '\0') {  
        return 1 + my_strlen(mask + 1);  //优化见3shua
    }
    return 0;
}

int main() {

    char str[20] = { 0 };  //一定要初始化字符串长度，否则会越界
    scanf("%s", str);
    int len = my_strlen(str);
    printf("%d", len);

    return 0;
}