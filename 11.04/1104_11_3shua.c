#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）

void Exchange_Arr(int arr[], int a[], int len) {
    int i = 0;
    for (i = 0; i < len; i++) {
        int tmp = arr[i];
        arr[i] = a[i];
        a[i] = tmp;
    }
}

int main()
{
    int arr[5] = { 0 };
    int a[5] = { 1, 2, 3, 4, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);

    Exchange_Arr(arr, a, len);

    int i = 0;
    printf("arr数组为：\n");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\na数组为：\n");
    for (i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }


    return 0;
}