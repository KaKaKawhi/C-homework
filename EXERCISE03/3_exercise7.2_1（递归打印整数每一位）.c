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


// 三刷（二刷见笔记）
void Print_Num(unsigned int num) {
    // 思考：例如调用打印1234，相当于调用打印123（1234/10）加打印4（1234%10）。。。
    // 要明白是先递后归，先递（调用打印），然后最后归（返回）依次打印其余
    // 当剩下的数字为两位数才有必要调用打印，剩下一位数时，直接打印自身即可
    if (num > 9) {
        Print_Num(num / 10);
        printf("%d", num % 10);        //这里的代码不好，不清晰
    }
    else {
        printf("%d", num);
    }
}

// 改正：
void Print_Num(unsigned int num) {
    // 不需要循环！，递归思想！
    if (num > 9) {        
        // 执行到这里直接递，后面的代码归的时候再执行！（具体流程见笔记）
        Print_Num(num / 10);
    }
    // 需要在条件外，因为最后不满足条件不进去条件，直接在这里打印最高位
    else {
        printf("%d ", num % 10);
    }
    // 个人觉得加else更清晰
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    Print_Num(num);

    return 0;
}