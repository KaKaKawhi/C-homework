#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）

void exchange(int arr1[], int arr2[], int length) {
    int i = 0;
    for (i = 0; i < length; i++) {
        int tmp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = tmp;
    }
}

int main()
{
    int arr1[] = { 0,6,3,5,62,1,8 };
    int arr2[] = { 0,0,0,0,0,0,0 };
    int length = sizeof(arr1) / sizeof(arr1[0]);
    exchange(arr1, arr2, length);
    int i = 0;
    for (i = 0; i < length; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    for (i = 0; i < length; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

