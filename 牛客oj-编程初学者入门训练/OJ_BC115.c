#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 错误：仅能通过部分，因为(1 ≤ n ≤ 10^9，1 ≤ m ≤ 10^9)
//int MaxDiv(int a, int b) {
//    //两数中的较小值为最大公约数的最大值，最小为1
//    int min = a < b ? a : b;
//    int i = 0;
//    int ret = 0;
//    for (i = min; i >= 1; i--) {
//        if (a % i == 0 && b % i == 0) {
//            ret = i;
//            break;
//        }
//    }
//    return ret;
//}
//
//int main() {
//
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int div = MaxDiv(a, b);
//    // 最小公倍数 = （a * b）/ 最大公约数
//    int sum = div + (a * b) / div;
//    printf("%d\n", sum);
//
//    return 0;
//}


//改正：
int MaxDiv(long long a, long long b) {
    //两数中的较小值为最大公约数的最大值，最小为1
    long long min = a < b ? a : b;
    long long i = 0;
    long long ret = 0;
    for (i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main() {

    long long a = 0;
    long long b = 0;
    scanf("%ld %ld", &a, &b);
    long long div = MaxDiv(a, b);
    // 最小公倍数 = （a * b）/ 最大公约数
    long long sum = div + (a * b) / div;
    printf("%ld\n", sum);

    return 0;
}