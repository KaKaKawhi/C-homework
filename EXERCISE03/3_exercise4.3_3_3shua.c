#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 函数实现整形有序数组二分查找

int Find_Num(int num, int len, int arr[]) {
    int left = 0;
    int right = len - 1;
    int mid = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] > num) {
            right = mid - 1;
        }
        else if(arr[mid] < num){
            left = mid + 1;
        }
        else {
            break;
        }
    }
    // 当left <= right，说明在最后进入循环的条件left <= right时
    // 或者之前left < right时，arr[mid]已经等于num，即已经break,
    // 直接返回mid，所找的数字的下标。
    if (left <= right) {
        return mid;
    }
    // 否则left > right，说明最后进入循环的条件left <= right时，
    // 没有进入else语句，而是进入到if和else if中，继续执行使得
    // left > right，而且下一步不再满足循环条件判定，说明未找到该数
    else {
        return -1;
    }
    //else 带着更清晰
}

int main()
{
    int arr[] = { 0, 1, 2, 3, 4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    scanf("%d", &num);
    // 接收返回值，如果找到也即下标，找不到为-1
    int ret = Find_Num(num, len, arr);
    if (-1 == ret) {
        printf("未找到\n");
    }
    else {
        printf("已找到，下标为%d\n", ret);
    }

    return 0;
}