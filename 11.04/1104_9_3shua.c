#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ʵ��һ�������������ð������

//void Bubble_Sort(int arr[], int len) {
//    int i = 0;
//    int j = 0;
//    // ��������
//    for (i = 0; i < len - 1; i++) {
//        // ����ÿ��������Ƚϵĸ���
//        for (j = 0; j < len - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}

// ���𰸺��Ż���
void Bubble_Sort(int arr[], int len) {
    int i = 0;
    int j = 0;
    // ��������
    for (i = 0; i < len - 1; i++) {
        // ��Ȿ���Ƿ�������
        int index = 0;
        // ����ÿ��������Ƚϵĸ���
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                index = 1;
            }
        }
        //��д������֪����д�Ǻ��ºû��ǻ��£�if (!index) {
        if (0 == index){
            // ˵�������ֺ�������������Ѿ��������轻��
            return;
        }
    }
}

int main()
{
    int arr[5] = {0};
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    for (i = 0; i < len; i++) {
        // ÿ����һ��%d�����е���scanf��������5������
        scanf("%d", &arr[i]);
    }

    Bubble_Sort(arr, len);

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}