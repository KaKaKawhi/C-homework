#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 编写代码在一个整形有序数组中查找具体的某个数
// 要求：找到了就打印数字所在的下标，找不到则输出：找不到。

int find(int n, int arr[],int length) {  
    int left = 0;
    int right = length-1;
    int tmp = 0;
    // right位置有数据，必须要添加 = 号
    while (left <= right) {
        // 求中间位置的方法，直接相加除2容易造成溢出
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }else if(arr[tmp] < n) {
            left = tmp + 1;
        }
        else {
            break;      //必须要有，否则当left=right，跳不出循环
        }
    }
    if (left > right) {
        return -1;
    }
    else {
        return tmp;
    }
}

int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);//strlen是计算字符串长度，不适用此处
    int index = 0;//记录下标
    index = find(n,arr,length);  
    if (index == -1) {
        printf("找不到");
    }
    else {
        printf("%d", index);
    }
    return 0;
}

