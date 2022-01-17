#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归：逆序“abcde”相当于调用逆序“bcd”和交换字符a和e，
// 如果为奇数个字符，直到最后仅剩一个字符，不变，
// 如果为偶数个，最后剩余两个交换

// 数组方式（错误）
//void Reverse_Str(char str[]) {
//    int left = 0;
//    int right = 0;
//    while ('\0' != str[right]) {
//        right++;
//    }
//    right--;
//    if ((right - left) > 0) {
//    // 优化：if (right - left)
//        str[right] = '\0';
//        Reverse_Str(str + 1);
//    }
//    else {
//        ;
//    }
//}

//int My_Strlen(char* left, char* right) {（错误）
//    return (right - left);
//}

//指针方式（错误）
//void Reverse_Str(char* str) {
//    char* left = str;
//    char* right = str;
//    // 将right指针指向字符串结尾\0之前处
//    while ('\0' != *right) {
//        right++;
//    }
//    right--;
//    // 交换left和right指向的字符内容
//    char tmp = *left;
//    *left = *right;
//    *right = tmp;
//    if (My_Strlen(left, right)) {
//        *right = '\0';
//        Reverse_Str(str + 1);
//        right--;
//        left++;
//    }
//}

// 改正：（看解析提示后）(还是不会)

//void Reverse_Str(char* str) {
//    char* left = str;
//    char* right = str;
//
//    // 将right指针指向字符串结尾\0之前处
//    while ('\0' != *right) {
//        right++;
//    }
//    right--;
//
//    // 交换left和right指向的字符内容，递归限定条件：左指针小于右指针，
//    // 接近限定条件：指针移动
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//
//    }
//    
//}

// 看答案后纠正：

int My_Strlen(char str[]) {
    char* mask = str;
    //最好写成'\0' != *mask
    // 优化：最好写成：if(*mask)
    if (*mask != '\0') {
        return 1 + My_Strlen(mask + 1);
    }
    else {
        return 0;
    }
    // 个人觉得带着else更加清晰
}

void Reverse_Str(char* str) {
    
    // 在递归之前的代码都是无条件的，所以每次 递 （到函数起始处）
    // 都执行if (My_Strlen(str + 1) > 1)之前的代码，
    // 之后的代码在 归 （从哪里递就返回到哪里）时会返回执行  ！！！！！！！！！！！！！！！！！！
    int len = My_Strlen(str);

    // 第一次部分交换
    *str = *(str + len - 1);

    // 将*(str + len - 1)先设置为'\0'，这样递归的话，
    // str+1就是一个和之前一模一样的字符串（以'\0'结尾）
    *(str + len - 1) = '\0';

    // 当剩余的字符串长度大于1再，递归，否则不变
    if (My_Strlen(str + 1) > 1) {
        Reverse_Str(str + 1);
    }
    else {
        ;
    }

    // 完成第一次所有交换
}

int main()
{
    char str[20] = "";
    scanf("%s", str);
    Reverse_Str(str);
    printf("%s\n", str);

    return 0;
}


//未使用递归方式：
//void reverse_string(char* arr) {
//    int left = 0;                //也可以用指针
//    int right = My_Strlen(arr) - 1;
//    while (left < right) {
//        char mask = arr[left]; 
//        arr[left] = arr[right];
//        arr[right] = mask;
//        left++;
//        right--;
//    }
//}