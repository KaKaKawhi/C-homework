#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// ����һ���������飬��ɶ�����Ĳ���
// ʵ�ֺ���init() ��ʼ������Ϊȫ0
// ʵ��print()  ��ӡ�����ÿ��Ԫ��
// ʵ��reverse()  �����������Ԫ�ص����á�
// Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

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

//ָ�뷽����
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
    for (i = 0; i < length; i++) {     //���¸�ֵ
        arr[i] = i;
    }

    reverse(arr, length);
    print(arr, length);

    return 0;
}

