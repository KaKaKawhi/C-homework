#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 实现一个对整形数组的冒泡排序

//void Bubble_Sort(int arr[], int len) {
//    int i = 0;
//    int j = 0;
//    // 控制趟数
//    for (i = 0; i < len - 1; i++) {
//        // 控制每个数字须比较的个数
//        for (j = 0; j < len - 1 - i; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}

// 看答案后优化：
void Bubble_Sort(int arr[], int len) {
    int i = 0;
    int j = 0;
    // 控制趟数
    for (i = 0; i < len - 1; i++) {
        // 检测本轮是否发生交换
        int index = 0;
        // 控制每个数字须比较的个数
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                index = 1;
            }
        }
        //简写：（不知道简写是好事好还是坏事）if (!index) {
        if (0 == index){
            // 说明该数字后面的所有数字已经有序，无需交换
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
        // 每输入一个%d，换行导入scanf，共输入5个整数
        scanf("%d", &arr[i]);
    }

    Bubble_Sort(arr, len);

    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}