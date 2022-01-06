#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
// 例如：2 + 22 + 222 + 2222 + 22222

int main()
{
	// 几项的和
	int count = 0;
	// 什么数字
	int n = 0;
	scanf("%d %d", &count, &n);
	
	// 思考：2=0+2*1;22=2+2*10;222=22+2*100
	int sum = 0;
	int num = 0;
	// 控制几项的和
	int i = 0;
	// 控制每次要加的数字的变动
	int j = 0;
	for (i = 0, j = 1; i < count; i++, j *= 10) {
		num += n * j;
		sum += num;
	}
	printf("%d\n", sum);


	return 0;
}


//他法：（个人觉得更方便，每次只使用了10和前一项）
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		//把每一项与前一项都联系起来!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//思路
		// i=0		i=1		i=2		  i=3
		// 2		22		222		  2222
		// 2		2*10+2	22*10+2	  222*10+2
		tmp = tmp * 10 + a; 
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}