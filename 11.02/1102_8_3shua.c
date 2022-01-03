#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 递归和非递归实现n的k次方

// 递归：当k大于0，n^k = n^(k-1) * n，k为，直接返回1

//int Power_K(int n, int k) {
//    if (k > 0) {
//        return n * Power_K(n, k - 1);
//    }
//    else {
//        return 1;
//    }
//    // 个人觉得带else更清晰 
//}

// 非递归
int Power_K(int n, int k) {
    int ret = 1;
    int i = 0;
    for (i = 1; i <= k; i++) {
        ret *= n;
    }
    return ret;
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int ret = Power_K(n, k);
    printf("%d\n", ret);

    return 0;
}