#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 写一个函数打印arr数组的内容，不使用数组下标，使用指针。
// arr是一个整形一维数组。

// 法1：(arr不移动)
//void Print(int arr[], int len) {
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", *(arr + i));
//	}
//}

// 法2：
//void Print(int arr[], int len) 
//{	
//	while (len) {
//		printf("%d ", *arr);
//		arr++;
//		len--;
//	}
//}
// 法2可优化：（arr自此向后移动一位）
void Print(int arr[], int len) 
{	
	while (len) {
		printf("%d ", *(arr++));
		len--;
	}
}

int main()
{
	int arr[] = { 0, 5, 3, 4, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Print(arr, len);

	return 0;
}