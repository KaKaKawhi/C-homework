#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 非递归的方法实现n的阶乘
//int multiply(int n) {
//    int ret = 1;
//    int i = 0;
//    for (i = 1; i <= n; i++) {  //i从2开始即可
//        ret *= i;
//    }
//    return ret;
//}

// 递归的方法实现n的阶乘:
// 规律：n！=（n-1）！*n
// 限定条件：n > 1
// 接近限定条件：n-1
// 更好的方法，这里先列出公式，再使用递归：n <= 1,mul = 1 ; n > 1,mul = n * mul(n - 1) 
int multiply(int n) {
    if (n > 1) {
        return multiply(n - 1) * n; 
    }
    return n;
}

int main() {

    int n = 0;
    scanf("%d", &n);
    int ret = multiply(n);
    printf("%d\n", ret);

    return 0;
}