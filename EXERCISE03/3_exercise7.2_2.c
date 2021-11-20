#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 编写函数不允许创建临时变量，求字符串的长度
// 函数求“abc”长度相当函数求“bc”长度加1 ...
// 限定条件：字符串不为\0  接近限定：字符串指针右移动一位

int string_length(char arr[]) {
    if ('\0' != *arr) {
        return string_length(arr + 1) + 1;
        //arr += 1;   不需要，因为在string_length(arr + 1)，
        //再次递调用函数，arr已经右移，每归返回一次加一
    }
    else {
        return 0;   //最后一次递*arr为'\0'，返回0 ,0+1+1+1... = 6
    }
}

//非递归实现strlen
//int my_strlen(char* arr) {
//    int count = 0;
//    while (*arr != '\0') {
//        count++;
//        arr++;
//    }
//    return count;
//}

int main()
{
    char arr[] = "abcdef";
    //char arr[] = ""; //必须要初始化20，否则运行会数组溢出
    //scanf("%s", &arr);
    printf("%d\n", string_length(arr));

    return 0;
}

