#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ¼ÆËãnµÄ½×³Ë
int main() {

    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int mul = 1;
    for (i = 0; i < n; i++) {
        mul *= (i + 1);
    }
    printf("%d", mul);

    return 0;
}

// ¶þË¢
int main() {

	int n = 0;
	scanf("%d", &n);
	int res = 1;
	int i = 1;
	for (i = n; i >= 1; i--) {
		res *= i;
	}
	printf("%d\n", res);

	return 0;
}