#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//求10 个整数中最大值

int main() {

	//int x = 0;
	int arr[10] = { 0 };  //刚开始最好给定数组的大小10；否则会出问题
	int num = 10;
	int i = 0;
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);  //不用写成arr[i] = scanf("%d",&x)
	}

	int max = arr[0];      //先挑出来一个人上擂台，其他人攻擂
	for (i = 1; i < num; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("%d\n", max);

	return 0;
}

