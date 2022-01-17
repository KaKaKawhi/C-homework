#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

int main()
{
	int money = 0;
	scanf("%d", &money);
	int single = 1;
	int soda_num = money / single;
	int emp_num = soda_num;
	// 第一次新增的汽水数
	int new_soda = soda_num;

	// 因为如果最后肯定剩一个空瓶（不管是最后换的汽水喝完剩下的还是最后剩下没法换的空瓶）
	while (1 != emp_num) {
		// 换取汽水后空瓶数更新为：用新增汽水新换的汽水数+剩下了没法换的瓶数
		emp_num = new_soda / 2 + new_soda % 2;
		// 新增汽水数更新后的换取的汽水数
		new_soda /= 2;
		soda_num += new_soda;
	}
	printf("%d\n", soda_num);

	return 0;
}