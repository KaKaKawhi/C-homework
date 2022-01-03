#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归求第n个斐波那契数（不考虑溢出）

// 个人觉得这样更清晰：例如打印n=123，当n > 9，
// 首先递归打印12（n / 10），然后打印3（n % 10）
// 当n <= 9，直接打印n

//void Pri_Num(int num)
//{
//    if (num > 9) {
//        Pri_Num(num / 10);
//        printf("%d ", num % 10);
//    }
//    else {
//        printf("%d", num);
//    }
//}


// 非递归：
// 笨方法
//void Pri_Num(int num) {
//    int count = 0;
//    int mask = num;
//    while (mask) {
//        count++;
//        mask /= 10;
//    }
//    int times = 1;
//    while (count) {
//        times *= 10;
//        count--;
//    }
//    times /= 10;
//    while (times) {
//        printf("%d ", num / times);
//        num -= (num / times) * times;
//        times /= 10;
//    }  
//}

// 优化
int Reverse_Num(int num) {
    // 求出该数字位数
    int count = 0;
    int tmp = num;
    while (tmp) {
        count++;
        tmp /= 10;
    }
    // 求出该数字位数减一对应10的倍数
    count--;
    int times = 1;
    while (count) {
        times *= 10;
        count--;
    }
    // 逆序
    int ret = 0;
    while (num) {
        ret += (num % 10) * times;
        num /= 10;
        times /= 10;
    }
    return ret;
}

//直接先逆序在打印
void Pri_Num(int num) {
    int newnum = Reverse_Num(num);
    while (newnum) {
        printf("%d ", newnum % 10);
        newnum /= 10;
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    Pri_Num(num);

    return 0;
}