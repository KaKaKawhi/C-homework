#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// ʵ��һ�������������ð������

void bubble_sort(int arr[], int length) {
    int i = 0;
    int j = 0;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main()
{
    int arr[] = { 0,6,3,5,62,1,8 };
    int length = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,length);
    int i = 0;
    for (i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

