#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void f(int x) {
    if (x < 0) {
        printf("1");
    }
    else if (0 == x) {
        printf("0");
    }
    else {
        printf("-1");
    }
}

int main() {

    int x = 0;
    scanf("%d", &x);
    if (x > -10000 && x < 10000) {
        f(x);
    }

    //´ð°¸£º
    /*int x = 0;
    int y = 0;
    scanf("%d", &x);
    if (x < 0)
        y = 1;
    else if (x == 0)
        y = 0;
    else
        y = -1;

    printf("%d\n", y);
    return 0;*/

    return 0;
}
