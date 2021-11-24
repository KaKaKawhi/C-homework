#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <assert.h>

// 调整数组使奇数全部都位于偶数前面。
// 题目：
// 输入一个整数数组，实现一个函数，
// 来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
// 所有偶数位于数组的后半部分。

// 思路，先记录int*left指向数组第一个元素的位置，int*right指向数组最后一个元素的位置，
// left从数组第一个元素开始逐步向后找，每找到一个偶数，停止，
// right从数组最后一个元素开始逐步向前找，每找到一个奇数，停止，
// 然后*right和*left交换,然后继续找 
// 循环条件是left<right
void adjust_arr(int* arr, int len) {
    int* left = arr;
    int* right = arr + (len - 1);
    while (left < right) {
        while (left < right && (*left % 2 != 0)) {  //限制条件必须加，否则会栈溢出
            left++;
        }
        while (left < right && (*right % 2 == 0)) {//限制条件必须加，否则会栈溢出
            right--;
        }
        if (left < right) {//限制条件必须加，否则会栈溢出
            int tmp = *right;
            *right = *left;
            *left = tmp;
        }  
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    //for (i = 0; i < len; i++) {
    //    scanf("%d", &arr[i]);  //每输入一个，按回车，使得scanf读取到arr【i】里去
    //}
    adjust_arr(arr, len);
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

