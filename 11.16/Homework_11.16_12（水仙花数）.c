#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//水仙花数是指一种三位数,其各个数之立方和等于该数。(本题好像扩展为n位数了)
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

int main() {

    int i = 0;
    for (i = 0; i <= 100000; i++) {
        //求判断数字的位数    //多种方法，见下
        int count = 0;        
        int mask1 = i;       //int mask = i；防止循环变量在循环内部乱改
        while (mask1 > 0) {  //可以直接写成while（mask）；
            mask1 /= 10;    
            count++;
        }
        //求各个位上的数字count次方之和
        int mask2 = i;       //mask = i；
        int sum = 0;
        while (mask2 > 0) {   //可以直接写成while（mask）；
            int tmp = mask2 % 10;
            sum += pow(tmp, count);
            mask2 /= 10;
        }
        //判断并打印
        if (i == sum) {
            printf("%d ", i);
        }

    }

    //答案
    //int count = 1;   //对应下面while（tmp / 10）
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
    //tmp = i;         //防止循环变量乱改变
    //while (tmp)
    //{
    //    sum += pow(tmp % 10, count);
    //    tmp = tmp / 10;
    //}


    //讲的版本：(与答案的区别)
    /*int n = 1;
    int sum = 0;
    int tmp = i;
    while (tmp /= 10) {
        n++;
    }
    tmp = i;
    while (tmp) {
        sum += (int)pow(tmp % 10, n);   //为了避免警告，pow返回值
                                        //为double类型，但是可以放在int里截断
        tmp /= 10;
    }
    if (sum == i) {
        printf("%d ", i);
    }*/

    return 0;
}

