#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <assert.h>

// 模拟实现库函数strlen

int my_strlen(char* arr) {
    assert(arr != NULL);
    char* mask = arr;
    /*while (*mask != '\0') {   方法1
        mask++;
    }
    return mask - arr;*/
    while (*mask++ != '\0') {   //方法2
        ;
    }
    return mask - arr - 1;
}

int main()
{
    char arr[20] = "";
    scanf("%s", arr);   //arr本身就是地址
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}

