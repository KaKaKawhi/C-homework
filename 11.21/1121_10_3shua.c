#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 输入一个整数数组，实现一个函数，
// 来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
// 所有偶数位于数组的后半部分。

void Adjust(int arr[], int len) 
{
    // 思考：通过交换实现，一个指针从前向后，一个从后向前，
    // 当左指针碰到偶数停止，右指针碰到奇数停止，交换，直到左右相碰
    int* left = arr;
    int* right = arr + len - 1;
    while (left < right) {
        //限制条件必须加，否则全为奇数或奇数时，会出现越界问题，一直找找到偶数才会停下来
        if ((0 != ((*left) % 2)) && (left < right)) {
            left++;
        }
        //限制条件必须加，否则全为奇数或奇数时，会出现越界问题，一直找找到偶数才会停下来
        if ((0 == ((*right) % 2)) && (left < right)) {
            right--;
        }
        // 最后两个元素相邻时，如果是前是偶数后是奇数，
        // 左指针仍会右移，右指针同理，二者交叉，这样会出错，
        // 所以每次都需要保证left<right
        if (left < right) {
            int tmp = *left;
            *left = *right;
            *right = tmp;
        }
    }
}

int main()
{ 
    int arr[] = { 0, 1, 2, 3, 4, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Adjust(arr, len);
    int i = 0;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}