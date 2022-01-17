#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//小乐乐上课需要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法？
//输入描述：
//输入包含一个整数n(1 ≤ n ≤ 30)
//输出描述：
//输出一个整数，即小乐乐可以走的方法数。
// 列举出几个典例就会发现：他是以斐波那契数列排的

// 和老师讲的一样
//int fib(int n) {
//    if (1 == n) {
//        return 1;
//    }
//    if (2 == n) {
//        return 2;
//    }
//    return fib(n - 1) + fib(n - 2);
//}
//
//int main() {
//
//    int n = 0;
//    if (scanf("%d", &n) >= 1 && scanf("%d", &n) <= 30) {
//        int ret = fib(n);
//        printf("%d\n", ret);
//    }
//
//    return 0;
//}

// 开课讲后再写的
// 用递归实现：如果台阶数为1，2，只有n种走法；台阶数>2，则有Steps(n-1)+(n-2)
// 因为第一次要么走一步，要么走两步，然后又返回到调用函数来求有多少次走法，
// 只是参数少了1或2，然后将少1和少2的走法加起来就是n阶台阶的走法
int Steps(int n) {
    if (n <= 2) {
        return n;
    }
    else {
        return Steps(n - 1) + Steps(n - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Steps(n);
    printf("%d\n", ret);

    return 0;
}