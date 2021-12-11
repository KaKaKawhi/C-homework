#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int arr[7] = { 0 };
    int i = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    //求最大值极其下标
    int max = arr[0];
    int maxnum = 0;
    for (i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxnum = i;
        }
    }
    //求最小值极其下标
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
    //求平均值
    int sum = 0;
    for (i = 0; i < 7; i++) {
        sum += arr[i];
    }
    printf("%.2f\n", sum / 5.0);   //  /5.0!!!!!!!!!!

    return 0;
}