#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 实现reverse()  函数完成数组元素的逆置。

void Re_Arr(int arr[], int len) {
    int left = 0;
    int right = len - 1;
    while (left < right) {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
}

int main()
{
    int arr[5] = { 0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    Re_Arr(arr, len);

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}