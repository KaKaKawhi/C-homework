#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Meun() 
{
    printf("-----------------------\n");
    printf("-----------------------\n");
    printf("----1：加法 2：减法----\n");
    printf("----3：乘法 4：除法----\n");
    printf("----0：退出------------\n");
    printf("-----------------------\n");
}

int Add(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    return a / b;
}

int main()
{
    // 函数指针数组方法
    int(*parr[])(int a, int b) = { Add, Sub, Mul, Div };

    int input = 0;
    do {
        Meun();
        printf("请输入您的选项\n");
        scanf("%d", &input);
        
        // 条件分支判断
        if (input >= 1 && input <= 4) {
            int a = 0;
            int b = 0;
            printf("请输入您所需的两个操作数\n");
            scanf("%d %d", &a, &b);
            int ret = parr[input - 1](a, b);
            printf("计算结果为：%d\n", ret);
        }
        else if (!input) 
        {
            printf("已退出\n");
            break;//加不加都行
        }
        else {
            printf("输入错误，请重新输入\n");
        }
    } while (input);

    return 0;
}

    
