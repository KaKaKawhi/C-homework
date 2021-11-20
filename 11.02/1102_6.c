#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

// 编写一个函数 reverse_string(char * string)（递归实现）
// 实现：将参数字符串中的字符反向排列，不是逆序打印。
// 要求：不能使用C函数库中的字符串操作函数。

//未使用递归方式：
//void reverse_string(char* arr) {
//    int left = 0;                //也可以用指针
//    int right = strlen(arr) - 1;
//    while (left < right) {
//        char mask = arr[left]; 
//        arr[left] = arr[right];
//        arr[right] = mask;
//        left++;
//        right--;
//    }
//}

//使用递归实现字符串逆序
void reverse_string(char* arr) {
    char* left = arr;
    char* right = arr + strlen(arr) - 1;
    不会！
}

int main()
{
    char arr[20] = ""; //必须要初始化20，否则运行会数组溢出
    scanf("%s", &arr);
    reverse_string(arr);
    printf("%s\n", arr);

    return 0;
}

