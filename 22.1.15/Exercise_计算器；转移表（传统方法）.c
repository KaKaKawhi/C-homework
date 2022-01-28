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
    int input = 0;
    do {
        Meun();
        printf("请输入您的选项\n");
        scanf("%d", &input);
        int a = 0;
        int b = 0;
        switch (input) {
        case 1:
            printf("请输入您的操作数\n");
            scanf("%d %d", &a, &b);
            int ret = Add(a, b);
            printf("计算结果为：%d\n", ret);
            break;
        case 2:
            printf("请输入您的操作数\n");
            scanf("%d %d", &a, &b);
            ret = Sub(a, b);
            printf("计算结果为：%d\n", ret);
            break;
        case 3:
            printf("请输入您的操作数\n");
            scanf("%d %d", &a, &b);
            ret = Mul(a, b);
            printf("计算结果为：%d\n", ret);
            break;
        case 4:
            printf("请输入您的操作数\n");
            scanf("%d %d", &a, &b);
            ret = Div(a, b);
            printf("计算结果为：%d\n", ret);
            break;
        case 0:
            printf("已退出\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    } while (input);

    return 0;
}

    
