#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 实现一个对整形数组的冒泡排序

void bubble_sort(int arr[], int length) {
    int i = 0;
    int j = 0;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length - 1 - i; j++) {
            //注：如果这里要用j-1和j相比，循环应该为for (j = 1; j < length - i; j++)
            if (arr[j] > arr[j + 1]) {       
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

//优化：如果某次冒泡结束后，序列已经有序了，后面剩余元素的冒泡可以省略
void bubble_sort(int arr[], int length) {
    int i = 0;
    int j = 0;
    // 外层循环控制冒泡排序的趟数
    // size-1表示：最后一趟区间中只剩余1个元素，该趟冒泡可以省略
    for (i = 0; i < length - 1; i++) {    //
        //指标，确认本轮冒泡有没有发生交换次序
        int index = 0;
        //注：如果这里要用j-1和j相比，循环应该为for (j = 1; j < length - i; j++)
        for (j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                //本轮冒泡发生交换次序了
                index = 1;   
            }
        }
        // 如果本次冒泡中，元素没有交换，则本次开始冒泡时，数据已经有序了，后面的冒泡可以不用进行了
        if (0 == index) {
            return;    //直接跳出循环
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

