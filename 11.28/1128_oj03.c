#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int arr[7] = { 0 };
    int i = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    //�����ֵ�����±�
    int max = arr[0];
    int maxnum = 0;
    for (i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxnum = i;
        }
    }
    //����Сֵ�����±�
    int min = arr[0];
    int minnum = 0;
    for (i = 0; i < 7; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minnum = i;
        }
    }
    arr[maxnum] = 0;
    arr[minnum] = 0;
    //��ƽ��ֵ
    int sum = 0;
    for (i = 0; i < 7; i++) {
        sum += arr[i];
    }
    printf("%.2f\n", sum / 5.0);   //  /5.0!!!!!!!!!!

    return 0;
}