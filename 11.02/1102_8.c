#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

int mypowerk(int n, int k) {
    if (k > 1) {
        return n * mypowerk(n, k - 1);
    }
    else {
        return n;
    }
    //�𰸣�һ������
    /*if (k == 0)
        return 1;
    else if (k >= 1)
    {
        return n * Pow(n, k - 1);
    }*/
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int ret = mypowerk(n, k);
    printf("%d\n", ret);

    return 0;
}

