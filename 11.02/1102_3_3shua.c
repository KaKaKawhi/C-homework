#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归求第n个斐波那契数（不考虑溢出）

// 个人觉得这样更清晰：例如打印n=123，当n > 9，
// 首先递归打印12（n / 10），然后打印3（n % 10）
// 当n <= 9，直接打印n

void Pri_Num(int num)
{
    if (num > 9) {
        Pri_Num(num / 10);
        printf("%d ", num % 10);
    }
    else {
        printf("%d", num);
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    Pri_Num(num);

    return 0;
}