#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 实现一个对整形数组的冒泡排序，思考如何优化

void Bub_Sort(int arr[], int len) {
	int i = 0;
	int j = 0;
	
	// 控制第几个数字开始向后相比较，len-1个数字需要分别向后比较（因为最后一个数字不需要比较）
	for (i = 0; i < len - 1; i++) {
		// 判定此轮比较有没有发生交换数字，如果没有交换说明之后的数字均已有规定顺序，直接退出循环
		int index = 1;
		// 控制此数字的此轮比较，需向后依次比较len-1-i次
		for (j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				// 发生交换
				index = 0;
			}
		}// 内层循环结尾
		// 相当if(1 == index)没有发生循环
		if (index) {
			return;
		}
	}// 外层循环结尾

}

int main()
{
	int arr[] = { 0, 5, 3, 4, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Bub_Sort(arr, len);
	int i = 0;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}