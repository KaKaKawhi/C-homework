#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <assert.h>

int main() {

    //可以
    char* arr = "AEIOUaeiou";
    arr++;
    printf("%s", arr);   //输出:EIOUaeiou

    char arr1[] = "AEIOUaeiou";
    arr1++;  //错误
    printf("%s", arr1);

    int arr3[] = { 1,2,3 };
    arr3++;  //错误
    int i = 0;
    for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("%d ", arr3[i]);
    }

    int* arr3 = { 1,2,3 }; //错误
    arr3++;  //错误
    int i = 0;
    for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("%d ", arr3[i]);
    }


    //不可以,指向字符串的指针，保存的是字符串常量
    //char* arr = "AEIOUaeiou";
    //*(arr + 1) = 's';
    //printf("%s", arr);

    //不可以，利用const声明的常量是不可修改的左值
    //const int n = 0;  //也可以写成int const n;
    //n = 1;

    //不可以，利用const声明的指针是不可修改的左值
    //int n = 0;
    //int* const p;
    //p = &num;

    //不可以，字面值是不可修改的左值
    //1 = 2;

    //不可以，利用 #define 声明常量是不可修改的左值
    //#define n 2;        //(写在首行)
    //n = 1;              //(main函数中)

    return 0;
}