#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ※※※倒置字符串

// 整体倒置
//void Re_Str(char str[]) 
//{
//    // 思考，创建左右指针，交换左右指针来实现倒置，直到左右指针相遇
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}

// 优化1：
// 整体倒置
//void Re_Str(char str[])
//{
//    assert(str);   //防止空指针
//    // 思考，创建左右指针，交换左右指针来实现倒置，直到左右指针相遇
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}

// 优化2：
// 修改倒置函数，使其可以重复使用
void Re_Str(char* left, char* right)
{
    // 思考，交换左右指针来实现倒置，直到左右指针相遇
    assert(left && right);   //防止空指针
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

// (写错)
//void Re_Single(char str[])
//{
//    // 思考：创建左右指针，将它们每次指向单个字符串，然后倒置，
//    // 为了可以直接用之前的倒置字符串函数，将之前的函数参数改为左右指针
//    char* left = str;
//    char* right = str;
//    while (1) {
//        while ((' ' != right) && ('\0' != right)) {
//            right++;
//        }
//        if ('\0' == right) {
//            break;
//        }
//        // 将right指向空格之前或'\0'之前的位置
//        right--;
//        Re_Str(left, right);
//        left = right;
//    }
//
//}

// 改正：(一定要小心指针是否需解引用！！！！！！！！)
void Re_Single(char str[])
{
    // 思考：创建左右指针，将它们每次指向单个字符串，然后倒置，
    // 为了可以直接用之前的倒置字符串函数，将之前的函数参数改为左右指针
    char* left = str;
    char* right = str;
    // 循环条件他法见之前写的代码
    while (1) {
        while ((*right != ' ') && (*right != '\0')) {
            right++;
        }
        Re_Str(left, right - 1);
        if ('\0' == *right) {
            return;
        }
        else {
            right++;
            left = right;
        }  
    }
}


//int main()
//{ 
//    char str[20] = { 0 };
//    // 为了可以读入空格，用gets()，且gets()会将最后导入时输入的换行符丢弃
//    gets(str);
//    // 先整体倒置
//    Re_Allstr(str);
//    // 再逐个以空格为分隔的字符串倒置
//    Re_str(str);
//    printf("%s\n", str);
//
//    return 0;
//}

// 对应优化3：
int main()
{
    char str[20] = { 0 };
    // 为了可以读入空格，用gets()，且gets()会将最后导入时输入的换行符丢弃
    gets(str);
    char* left = str;
    char* right = str + strlen(str) - 1;  
    // 先整体倒置
    Re_Str(left, right);
    // 再逐个以空格为分隔的字符串倒置
    Re_Single(str);
    printf("%s\n", str);

    return 0;
}