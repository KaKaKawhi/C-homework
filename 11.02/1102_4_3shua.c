#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

// �ݹ飺��n����1��n!=n*(n-1)!����nС��1���׳�Ϊ1

//int Fac(int n) {
//    if (n > 1) {
//        return n * Fac(n - 1);
//    }
//    else {
//        return 1;
//    }
//}


// �ǵݹ飺
int Fac(int n) {
    int ret = 1;
    int i = 0;
    for (i = 2; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fac(n);
    printf("%d\n", ret);

    return 0;
}