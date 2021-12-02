#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <assert.h>

// 模拟实现库函数strcpy
// char *strcpy( char *to, const char *from );
// 功能：复制字符串from 中的字符到字符串to，包括空值结束符。返回值为指针to。

char* my_strcpy(char* to, const char* from) {
    assert(to && from);
    char* mask1 = to;  //必须要有，因为后面赋值时，指针不再指向首元素地址，一直在后移
    char* mask2 = from;
    while (*mask1 != '\0') {  //while(*mask1)
        mask1++;
    }
    while (*mask2 != '\0') {  //while(*mask2)
        *mask1++ = *mask2++;
    }
    *mask1 = *mask2;
    return to;
}


int main()
{
    char to[20] = {0};
    char from[] = "hello";
    scanf("%s", to);  //to不为空字符串
    char* ret = my_strcpy(to, from);
    printf("%d\n", strlen(ret));  //检测'\0'
    printf("%s\n", ret);

    return 0;
}