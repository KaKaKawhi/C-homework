#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<math.h>    //别忘记

// 写函数打印100-200的素数

int judge(int n) {
    int i = 0;
    for (i = 2; i <= sqrt(n); i ++) {
        if (n % i == 0) {
            return 0;  //一旦可以被整除，不是素数，返回0
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    int i = 0;
    /*for (i = 100; i <= 200; i++) {
        if (judge(i) == 1) {
            printf("%d ", i);
        }
    }*/

    // 优化：（除了2，3，没有任何两个素数会相邻），但是用此优化需注意：！！！！！
    // 首先，所求的素数范围不能包括2和3，其次，起始的第一个判定数必须为素数
    for (i = 101; i <= 200; i += 2) {
        if (judgee(i) == 1) {
            printf("%d ", i);
        }
    }

    /*scanf("%d", &n);
    if (1 == judge(n)) {
        printf("是素数");
    }
    else {
        printf("不是素数");
    }*/
    
    return 0;
}



// 三刷（二刷见笔记）
// 判断一个数是否为素数

int Is_Prime(int n) {
    int i = 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n = 0;
    scanf("%d", &n);
    if (Is_Prime(n)) {
        printf("yes\n");
    }
    else {
        printf("no\n");
    }

    return 0;
}