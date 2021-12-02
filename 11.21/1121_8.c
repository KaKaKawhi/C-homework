#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <assert.h>

// 模拟实现库函数strlen
//size_t strlen(char* str);
//功能：函数返回字符串str 的长度(即空值结束符之前字符数目)。


//答案：
//size_t my_strlen(const char* str)  //保护arr的内容不被改变
//{
//    const char* eos = str;
//    while (*eos++);
//    return(eos - str - 1);
//}

int my_strlen(const char* arr) {  //保护arr的内容不被改变
    assert(arr != NULL);   //防止传入空指针
    char* mask = arr;

    while (*mask != '\0') {   //方法1，讲版本，画图更容易理解
        mask++;
    }
    return mask - arr;

    //while (*mask++ != '\0') {   //方法2，这样的话指针会指向‘\0’的后面，
    //                            //画图分析即可，所以return后额外减去1
    //    ;
    //}
    //return mask - arr - 1;

}

//个人后面再做版本：
//int my_strlen(char* arr) {
//    int len = 0;
//    /*while (*arr++ != '\0') {
//        len++;
//    }*/
//    while (*arr++) {
//        len++;
//    }
//    return len;
//}

int main()
{
    char arr[20] = "";
    //我觉得最好用char arr[20] = {0};
    scanf("%s", arr);   //arr本身就是地址，无需&
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}

