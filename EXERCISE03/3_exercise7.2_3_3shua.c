#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ���n�Ľ׳ˣ����������

int Fac(int n) {
    
    // ˼������n����1��n!=(n-1)!*n����nΪ1���׳�ֱ��Ϊ1

    if (n > 1) {
        return n * Fac(n - 1);
    }
    else {
        return 1;
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fac(n);
    printf("%d\n", ret);

    return 0;
}