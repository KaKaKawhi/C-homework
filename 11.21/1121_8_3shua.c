#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// 模拟实现库函数strlen

// 3刷：和笔记上例题版本相同
// const保护字符串内容，防止被改变
//int My_Strlen(const char* str) {
//
//    int len = 0;
//    // 确保没有传入空指针
//    assert(str);
//    // 相当于while('\0' != (*str))
//    while (*str) {
//        len++;
//        str++;
//    }
//    return len;
//}
//
//int main()
//{
//    char str[20] = { 0 };
//    scanf("%s", str);
//    int len = My_Strlen(str);
//    printf("%d\n", len);
//
//    return 0;
//}



// 讲的版本（看了之后自己写）（个人觉得花里胡哨的不好理解）
//int My_Strlen(const char* str) {
//    assert(str);
//    char* mask = str;
//    // 当mask指向'\0'时，先解引用*mask为'\0'判定条件为假，再自加向后移动一位
//    while (*(mask++)) {
//        ;
//    }
//    return mask - str - 1;
//}

//（个人觉得这个和自己三刷写的两个版本好理解！！！）
int My_Strlen(const char* str) {  //保护str的内容不被改变           
    assert(str);   //防止传入空指针
    char* mask = str;
    // 当mask指向'\0'时退出循环
    while (*mask != '\0') {  
        mask++;
    }
    return mask - str;
}

int main()
{
    char str[20] = { 0 };
    scanf("%s", str);
    int len = My_Strlen(str);
    printf("%d\n", len);

    return 0;
}