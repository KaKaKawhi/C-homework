#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
// 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
// 输入：1729，输出：19


int add(int n) {
    if (n > 9) {
        return n % 10 + add(n / 10);
    }
    else {
        return n;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = add(n);
    printf("%d\n", ret);

    return 0;
}

