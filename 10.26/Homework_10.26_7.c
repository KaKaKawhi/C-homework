#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//二分查找
//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

int main() {

	int arr[] = {0,1,2,3,4,5,6,7,8,9};
	int user = 0;//所查数字
	scanf("%d", &user);
	int index = 0;//下标
	int length = sizeof(arr) / sizeof(arr[0]);
	int a = 0;
	int b = length - 1;

	while (a <= b) {// right位置有数据，必须要添加=号
		if (arr[(a + b) / 2] >= user) {   //直接相加容易越界应为a + (b - a) / 2
			b = (a + b) / 2 - 1;
			index = (a + b) / 2;
		}
		if (arr[(a + b) / 2] <= user) {
			a = (a + b) / 2 + 1;
			index = (a + b) / 2;
		}
	}
	if (a <= b) {  //应该 a > b
		printf("找不到");
	}
	else {
		printf("%d\n", index);
	}
	return 0;
}

