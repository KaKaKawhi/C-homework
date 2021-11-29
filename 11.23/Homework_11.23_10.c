#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

// 小乐乐喜欢数字，尤其喜欢0和1。他现在得到了一个数，想把每位的数变成0或1。
// 如果某一位是奇数，就把它变成1，如果是偶数，那么就把它变成0。请你回答他最后得到的数是多少。
//输入描述：
//输入包含一个整数n(0 ≤ n ≤ 109)
//输出描述：
//输出一个整数，即小乐乐修改后得到的数字。
//示例1
//输入：222222 输出：0
//示例2
//输入：123 输出：101

int main() {

    int n = 0;
    scanf("%d", &n);
    int count = 0;
    int size = 1;
    while (n) {
        if ((n % 10) % 2 == 0) {
            size *= 10;
        }
        else if ((n % 10) % 2 != 0) {
            count += size * 1;
            size *= 10;
        }
        n /= 10;
    }
    printf("%d", count);

    return 0;
}

//答案法
//#include <stdio.h>
//#include <math.h>
//
//
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while (n)
//    {
//        int m = n % 10;
//        if (m % 2 == 1)
//            m = 1;
//        else
//            m = 0;
//        sum += m * pow(10, i);
//        i++;
//
//        n /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}