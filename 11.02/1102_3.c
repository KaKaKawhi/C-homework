#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 接受一个整型值（无符号），按照顺序打印每一位
//1234, 限定条件：n>9,才需要递归，n<9直接打印最高位即可   接近限定条件：n/=10
//函数打印1234 相当于函数打印123 外加打印4 ，函数打印123相当于函数打印12 外加打印3 ...

void pri(unsigned int n) {
    if (n > 9) {        //不需要循环！，递归思想！
        pri(n / 10);    //执行到这里直接递，后面的代码归再执行
    }
    printf("%d ", n % 10);  //需要在条件外，因为最后不满足条件不进去条件，直接在这里打印最高位
}

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);
    pri(n);

    return 0;
}

