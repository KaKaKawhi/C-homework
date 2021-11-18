#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

int main() {

    int i = 0;
    for (i = 0; i <= 100000; i++) {
        int count = 0;
        int mask1 = i;
        while (mask1 > 0) {
            mask1 /= 10;
            count++;
        }
        int mask2 = i;
        int sum = 0;
        while (mask2 > 0) {
            int tmp = mask2 % 10;
            sum += pow(tmp, count);
            mask2 /= 10;
        }
        if (i == sum) {
            printf("%d ", i);
        }

    }
    //答案
    //int count = 1;
    //int tmp = i;
    //int sum = 0;
    ////判断i是否为水仙花数
    ////1. 求判断数字的位数
    //while (tmp / 10)
    //{
    //    count++;
    //    tmp = tmp / 10;
    //}

    ////2. 计算每一位的次方和
    //tmp = i;
    //while (tmp)
    //{
    //    sum += pow(tmp % 10, count);
    //    tmp = tmp / 10;
    //}
    return 0;
}

