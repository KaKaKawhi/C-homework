#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int find(int n, int arr[], int length) {
    int left = 0;
    int right = length - 1;
    int tmp = 0;
    int index = -1;
    // right位置有数据，必须要添加=号
    while (left <= right) {
        // 求中间位置的方法，直接相加除2容易造成溢出
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }
        if (arr[tmp] < n) {
            left = tmp + 1;
        }
        if(arr[tmp] == n){
            index = tmp;
            break;      //必须要有，否则当left=right，跳不出循环
        }
    }
    return index;
}

int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);
    int index = find(n, arr, length);
    if (index == -1) {
        printf("找不到\n");
    }
    else {
        printf("已找到，该数字下标为%d\n", index);
    }

    return 0;
}


