#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

// 求出0～100000之间的所有“水仙花数”并输出。
// “水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
// (其实水仙花数特指3位数，各位数字的3次方和为自身)
// 如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

int Is_Bingo(int i) {
	
	// 求位数n
	int n = 0;
	// 代替i计算
	int mask = i;
	while (mask) {
		mask /= 10;
		n++;
	}

	//他法：
	/*int n = 1;
	while (mask /= 10) {
		n++;
	}*/

	// 求各位n次幂和
	int sum = 0;
	// 代替i计算
	int tmp = i;
	while (tmp) {
		// 最好写sum += (int)pow((tmp % 10), n); 因为pow返回类型为double，避免警告
		sum += (int)pow((tmp % 10), n);
		tmp /= 10;
	}

	if (sum == i) {
		return 1;
	}
	return 0;

}


int main()
{
	int min = 0;
	int max = 10000;
	int i = 0;
	for (i = min; i <= max; i++) {
		// 如果是，返回1，不是返回0
		if (Is_Bingo(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}


