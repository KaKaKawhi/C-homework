﻿#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int NumberOf1(int n) {
    // write code here
    int i = 0;
    int count = 0;
    for (i = 0; i < 32; i++) {
        if (((n >> i) & 1) == 1) {
            count++;
        }
    }
    return count;
}                               //见笔记很多它法

int main() {

    int n = 100;
    int ret = NumberOf1(n);
    printf("%d", ret);

    return 0;
}

//答案：
/*
方法一：（负数无法计算！！！！
思路：
循环进行以下操作，直到n被缩减为0：
   1. 用该数据模2，检测其是否能够被2整除
   2. 可以：则该数据对应二进制比特位的最低位一定是0，否则是1，如果是1给计数加1
   3. 如果n不等于0时，继续1
*/
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}


/*
上述方法缺陷：进行了大量的取模以及除法运算，取模和除法运算的效率本来就比较低。且负数无法计算！！！！
方法二思路：
一个int类型的数据，对应的二进制一共有32个比特位，可以采用位运算的方式一位一位的检测，具体如下
*/
//int count_one_bit(unsigned int n)  //为什么用unsigned int，自己测试int 输入负数效果相同
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}


/*
方法二优点：用位操作代替取模和除法运算，效率稍微比较高
  缺陷：不论是什么数据，循环都要执行32次

方法三：（n=n&(n-1) 这个表达式会把n的二进制序列中最右边的1去掉
思路：采用相邻的两个数据进行按位与运算
举例：
9999：‭10 0111 0000 1111‬
第一次循环：n=9999   n=n&(n-1)=9999&9998= 9998
第二次循环：n=9998   n=n&(n-1)=9998&9997= 9996
第三次循环：n=9996   n=n&(n-1)=9996&9995= 9992
第四次循环：n=9992   n=n&(n-1)=9992&9991= 9984
第五次循环：n=9984   n=n&(n-1)=9984&9983= 9728
第六次循环：n=9728   n=n&(n-1)=9728&9727= 9216
第七次循环：n=9216   n=n&(n-1)=9216&9215= 8192
第八次循环：n=8192   n=n&(n-1)=8192&8191= 0


可以观察下：此种方式，数据的二进制比特位中有几个1，循环就循环几次，而且中间采用了位运算，处理起来比较高效
*/
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}