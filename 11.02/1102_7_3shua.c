#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
// 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
// 输入：1729，输出：19

// 递归：计算123相当调用计算12（123/10）加3（123%10），
// 直到n小于10（个位数）时，返回n即可

//int DigitSum(unsigned int n) {
//    if (n > 9) {
//        return n % 10 + DigitSum(n / 10);
//    }
//    else {
//        return n;
//    }
//}

// 非递归
int DigitSum(unsigned int n) {
    int ret = 0;
    while (n) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);
    int ret = DigitSum(n);
    printf("%d\n", ret);

    return 0;
}