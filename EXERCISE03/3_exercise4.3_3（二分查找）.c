#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 写函数,实现一个整形有序数组的二分查找

int binary_search(int arr[],int n,int length) {
    int left = 0;
    int right = length - 1;
    int tmp = 0;
    while (left <= right) {
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }
        else if(arr[tmp] < n) {
            left = tmp + 1;
        }
        else {
            break;//必须有，否则，left=right跳不出循环
        }
    }
    if (left > right) {
        return -1;
    }
    else {
        return tmp;
    }
    //else 带着更清晰
}

int main()
{
    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr,n,length);
    if (-1 == ret) {
        printf("未找到此数");
    }
    else {
        printf("找到此数，下标为%d\n",ret);
    }
    
    return 0;
}

