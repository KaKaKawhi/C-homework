#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 编写一个函数 reverse_string(char* string)（递归实现）
// 实现：将参数字符串中的字符反向排列，不是逆序打印。
// 要求：不能使用C函数库中的字符串操作函数。

int my_strlen(char str[]) {
    char* mask = str;
    //最好写成'\0' != *mask
    if (*mask != '\0') {
        return 1 + my_strlen(mask + 1);
    }
    return 0;
}

// 递归:
// 规律：首先左指针指向首元素，右指针指向'\0'前面一个元素，交换，然后左指针右移一位，右指针左移一位，然后重复
// 限定条件：左指针小于右指针
// 接近限定条件：然后左指针右移一位，右指针左移一位
void reverse_string(char str[]) {
    /*char* left = str;
    char* right = str + my_strlen(str) - 1;
    if (left < right) {
        left++;
        *right = '\0';
        right--;
        reverse_string();*/
    //第一遍写的错误版本，思考后纠正：!!!!!!!!!!!!!!!!!!!!!!!!!!

    //if(*str != '\0'){
    //    //相当于if(*str)
    //    *(str + my_strlen(str) - 1) = '\0';
    //}
    //纠正无果，看答案后重新根据思路写：

    char tmp = *str;
    //必须写出来，不能用一次调用一次，因为之后str的长度已经发生变化了
    int len = my_strlen(str); 
    *str = *(str + len - 1);
    *(str + len - 1) = '\0';

    if (my_strlen(str + 1) >= 2) {
        reverse_string(str);
    }

    *(str + len - 1) = tmp;
}

int main() {

    char str[20] = { 0 };  //一定要初始化字符串长度，否则会越界
    scanf("%s", str);
    reverse_string(str);
    printf("%s\n", str);

    return 0;
}