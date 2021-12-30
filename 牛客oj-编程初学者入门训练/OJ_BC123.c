#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include <stdio.h>

int main() {

    int n = 0;
    int max = 0;
    int i = 0;
    for (i = 0; i < 4; i++) {
        scanf("%d", &n);
        if (n > max) {
            max = n;
        }
    }
    printf("%d\n", max);

    return 0;
}


// ËûÈËÐ´

//int main() {
//
//    int a, b, c, d, x, y;
//
//    scanf("%d %d %d %d", &a, &b, &c, &d);
//
//    x = a > b ? a : b;
//    y = c > d ? c : d;
//
//    printf("%d", x > y ? x : y);
//
//    return 0;
//}
