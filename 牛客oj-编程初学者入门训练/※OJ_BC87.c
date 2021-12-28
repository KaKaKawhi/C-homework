#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//第一次写的错误代码
//int main() {
//
//    int n = 0;
//    scanf("%d", &n);
//    double max = 0.0;
//    double min = 100.0;
//    double sum = 0.0;
//    double score = 0.0;
//    while (n) {                    错！！！
//        scanf("%d", &score);       错！！！
//        sum += score;
//        if (score > max) {
//            max = score;
//        }
//        if (score < min) {
//            min = score;
//        }
//        n--;                       错！！！
//    }
//    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
//
//    return 0;
//}

int main() {

    int n = 0;
    scanf("%d", &n);
    double max = 0.0;
    double min = 100.0;
    double sum = 0.0;
    double score = 0.0;
    //代替n去改变，确保最后求平均数时n不变
    double mask = n;
    while (mask) {
        scanf("%lf", &score);
        sum += score;
        if (score > max) {
            max = score;
        }
        if (score < min) {
            min = score;
        }
        mask--;
    }
    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);

    return 0;
}