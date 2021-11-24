#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <assert.h>

// 模拟实现库函数strcpy
// char *strcpy( char *to, const char *from );
// 功能：复制字符串from 中的字符到字符串to，包括空值结束符。返回值为指针to。

char* my_strcpy(char* to, const char* from) {
    assert(to && from);
    char* mask = to;  //必须要有，因为后面赋值时，指针不再指向首元素地址，一直在后移
    /*while (*to++ = *from++ != '\0') { 错误！
        ;
    }*/
    while (*mask++ = *from++) {  //当*from为\0时，赋值\0后表达式为假，恰好不进去
        ;
    }
    //*to = *from; 不用
    return to;
}

int main()
{
    char to[20] = "\0";
    char from[] = "hello";
    printf("%s\n", my_strcpy(to, from));

    return 0;
}

