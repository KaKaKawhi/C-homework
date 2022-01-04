#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 创建一个整形数组，完成对数组的操作
// 实现函数init() 初始化数组为全0
// 实现print()  打印数组的每个元素
// 实现reverse()  函数完成数组元素的逆置。
// 要求：自己设计以上函数的参数，返回值。

void init(int arr[], int length) {
    int i = 0;
    for (i = 0; i < length; i++) {
        arr[i] = 0;
    }
}

void print(int arr[], int length) {
    int i = 0;
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
}

void reverse(int arr[], int length) {
    int left = 0;
    int right = length - 1;
    while (left < right) {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

//指针方法：
//void reverse(int arr[], int size) {
//    int* left = arr;
//    int* right = arr + size - 1;
//    while (left < right) {
//        int tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}

int main()
{
    int arr[] = { 0,6,3,5,62,1,8 };
    int length = sizeof(arr) / sizeof(arr[0]);
    init(arr,length);
    print(arr, length);

    printf("\n-----------------------------\n");
    int i = 0;
    for (i = 0; i < length; i++) {     //重新赋值
        arr[i] = i;
    }

    reverse(arr, length);
    print(arr, length);

    return 0;
}

