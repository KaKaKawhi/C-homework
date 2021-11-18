#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {


	//多种方法，建议看作业
	int a = 100;
	int b = 200;
	int i = 0;
	for (i = a; i <= b; i++) {      //优化，因为只有除了2奇数才可能是素数，所以从101-200，每次i加2
		int j = 0;
		int index = 0;
		for (j = 2; j < i; j++) {   //y = a*b, a,b中至少有一个数字小于等于根号y，
									// 16= 2*8，找2相当于找8，所以在2-根号y之间如
		//sqrt（）加头文件<math.h>	//果没有数字能被整除，那后面的数字没必要找了，因为16 = 2 * 8，
									//找2和找8等价
			if (i % j == 0) {
				index = 1;
				break;
			}
		}
		if (0 == index) {
			printf("%d ", i);
		}
	}
	//素数求解优化 可以自己去找，深挖
	return 0;
}

