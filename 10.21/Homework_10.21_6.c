#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    int sum = 0;
    int count = 0;
    int num = 0;
    while (count < 5) {   //for循环更适合
        scanf("%d", &num);   // scanf("%d ", &num)错误不能留空格，因为每次的输入格式必须按照“”中的格式，
                             //当空格一次，这次循环的scanf就会读到空格停止，然后输入下一个数字，再次读取，
                             //读到你输入的下一个空格仍然停止
                            //C语言中, 输入并不是实时被scanf响应的.
                            //而是先存在缓冲中.
                            //只有当遇到换行 / 缓冲满 / 程序结束几种情况之一时, 才会被送到scanf.
                            //所以 为了让scanf收到数据, 就必须加回车.
        sum += num;
        count++;
    }
    printf("%.1lf\n", sum / 5.0); //5.0    小数在内存中很难保存（二进制）


    // 优化：
    int sum = 0;
    int i = 0;
    // 为了提醒最后输出的是double类型，double类型和int类型运算会发生算术提升,int转为double类型，具体见5-操作符详解
    double flag = 1.0;      //!!!!!!!!!!!!!!!!!!!
    int n = 0; 
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("%.1lf\n", (sum * flag) / 5);   //!!!!!!!!!!!!!!!!!!!

    return 0;
}

