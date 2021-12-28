#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    double a, b, c, d, e;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    printf("%.2lf\n", (a + b + c + d + e) / 5);

    return 0;
}