#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// 模拟实现库函数strcpy

// 3shua
void My_Strcpy(char* str, const char* ch) //保护ch字符内容不被改变
{
    assert(str && ch);
    // 相当while('\0' != *ch)
    while (*ch) {
        *str = *ch;
        ch++;
        str++;
    }
    // 将ch最后的'\0'赋给str最后
    *str = *ch;

}

int main()
{ 
    char str[20] = { 0 };
    char ch[] = "abc";
    My_Strcpy(str, ch);
    printf("%s\n", str);

    return 0;
}


//答案：（是否需要如此简化，待考虑！！！！！！）
//char* my_strcpy(char* dst, const char* src) // 保护src字符内容不被改变
//{
//    // 代替dst赋值，因为最后要返回dst，dst必须指向首元素
//    char* cp = dst;
//    // 防止传入空指针
//    assert(dst && src);
//    // 当src指向'\0'时，首先赋值给cp，然后表达式'\0'不进入循环
//    while (*cp++ = *src++);
//    return(dst);
//}