#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。

int main()
{
    int money = 20;
    int emp_count = 0;//空瓶数
    int cola_count = 0;//可获得的汽水数
    cola_count = 20;
    int mask = cola_count;//代替原始可获得汽水数来计算
    while (mask) {
        mask--;
        emp_count++;
        if (2 == emp_count) {
            cola_count++;
            mask++;
            emp_count = 0;  //空瓶被换掉
        }
    }
    printf("%d\n",cola_count);

    return 0;
}

/*
思路：
1. 20元首先可以喝20瓶，此时手中有20个空瓶子
2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
3. 如果瓶子个数超过1个，可以继续换，即重复2
*/
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//方法1
	total = money;
	empty = money;
	while (empty >= 2)   //最后肯定手上喝完剩下1瓶子，小于两个空瓶就没法换了，但是奇妙思路可以向老板
						 //借一个空瓶，和手上剩的一起一起换一瓶，然后这一瓶的空瓶还给老板
	{
		total += empty / 2;				//新增的空瓶数
		empty = empty / 2 + empty % 2;  //新增的空瓶数加剩下的空瓶数
	}


	return 0;
}


// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money*2-1
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//方法2：自己找的规律一般不能用来写代码，但是这个题有一定说法，
			//1瓶饮料1元，1个空瓶相当0.5元，20元价值40个空瓶，最后手
			//上肯定留一个，所以40-1=39
	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("total = %d\n", total);


	return 0;
}