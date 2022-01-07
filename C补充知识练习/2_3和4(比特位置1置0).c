#define _CRT_SECURE_NO_WARNINGS 1
#define SETBIT(x, n) ((x) |= (1 << (n - 1))
#define CLRBIT(x, n) ((x) &= (~(1 << (n - 1))))

#include <stdio.h>

// 按顺序打印该数据所有比特位
void Print_Bit(int x) {
    int len = sizeof(x) * 8;
    int i = 0;
    for (i = len - 1; i >= 0; i--) {
        // if((x << i) & 1)为什么不对？因为x左移后，1反而离x的最高位更远了
        if (x & (1 << i)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}

int main()
{
    int x = 0;
    scanf("%d", &x);
    // 打印该数据所有比特位
    Print_Bit(x);

    // 将该数据从右向左第5位置为1
    // 不知道这里为什么要两个括号才不报错
    SETBIT(x, 5));

    printf("\n------------------------\
-----------------------------------------\n");
    // 打印该数据所有比特位
    Print_Bit(x);

    // 将该数据从右向左第5位置置零
    CLRBIT(x, 5);

    printf("\n------------------------\
-----------------------------------------\n");
    // 打印该数据所有比特位
    Print_Bit(x);

    return 0;
}


