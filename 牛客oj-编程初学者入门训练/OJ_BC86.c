#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int n = 0;
    scanf("%d", &n);
    int odd = 0;
    int even = 0;
    int i = 0;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    printf("%d %d\n", odd, even);

    return 0;
}