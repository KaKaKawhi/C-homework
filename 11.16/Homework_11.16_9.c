#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int* p = arr;
    int i = 0;
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", *(p + i));  //p没有改变
    }
    
    //for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i)
    //{
    //    printf("%d ", *p++);   // *p: 取到p所指向位置的元素
    //                           // p++ 获取p的下一个位置 ，p改变了
    //}  答案方法
    return 0;
}

