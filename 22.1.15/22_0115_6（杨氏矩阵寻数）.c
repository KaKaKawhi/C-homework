#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
// 请编写程序在这样的矩阵中查找某个数字是否存在。
// 要求：时间复杂度小于O(N);

// 第一次自己写：写不出
//int Find_Num(int arr[][4], int num) 
//{
//	int n = 3;
//	int i = 0;
//	for (i = 0; i < num; i++) {
//		if (arr[i][3] < num) {
//			int j = 0;
//			for (j = 0; j < 3; j++) {
//				if (num == arr[i][j]) {
//					return 
//				}
//			}
//		}
//		else {
//			continue;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
//	int num = 0;
//	scanf("%d", &num);
//	int ret = Find_Num(arr, num);
//	if (-1 == ret) {
//		printf("找不到\n");
//	}
//	else {
//		printf("已找到，下标为%d\n", ret);
//	}
//
//	return 0;
//}




void Find_Num(int arr[][4], int* x, int* y, int num) 
{
	// 将row和line分别赋值为行坐标最小值和列坐标最大值
	int row = 0;
	int line = *y - 1;
	while (row < *x && line > 0) {
		// 舍去一行
		if (num > arr[row][line]) {
			row++;
		}
		// 舍去一列
		else if (num < arr[row][line]) {
			line--;
		}
		else {
			*x = row;
			*y = line;
			// 找到，提前返回，小心别忘记！！！！！
			return;
		}
	}
	// 找不到赋值-1
	*x = -1;
	*y = -1;
}

int main()
{
	int arr[][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
	int num = 0;
	scanf("%d", &num);
	// 技巧：将x，y值先赋值为行列数，后面传入二者地址正好可以传入
	int x = 3;
	int y = 4;
	// 因为函数无法返回两个参数，所以将x，y地址传入，通过在函数内部改变其来实现
	Find_Num(arr, &x, &y, num);
	if (-1 == x && -1 == y) {
		printf("找不到\n");
	}
	else {
		printf("已找到，下标为：x=%d，y=%d\n", x, y);
	}

	return 0;
}