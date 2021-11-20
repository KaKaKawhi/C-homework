#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// 编写一个函数实现n的k次方，使用递归实现。

int mypowerk(int n, int k) {
    if (k > 1) {
        return n * mypowerk(n, k - 1);
    }
    else {
        return n;
    }
    //答案，一个道理
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

