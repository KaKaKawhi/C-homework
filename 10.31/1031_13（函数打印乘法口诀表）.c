#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//1*1=1
//1*2=2 2*2=4
//1*3=3 2*3=6 3*3=9

void pri(int n) {
    //i控制行号，即每行*后的数字
    int i = 0;
    //控制每一行*前面的数字，从1开始逐渐增加到行号i
    int j = 0;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            //按照规定格式打印
            // /t可以控制当n为两位数时对齐的问题
            printf("%d*%d=%d\t", j, i, i * j);
        }
        //换行
        printf("\n");
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    pri(n);

    return 0;
}

