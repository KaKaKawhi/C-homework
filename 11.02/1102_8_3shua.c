#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ�ͷǵݹ�ʵ��n��k�η�

// �ݹ飺��k����0��n^k = n^(k-1) * n��kΪ��ֱ�ӷ���1

//int Power_K(int n, int k) {
//    if (k > 0) {
//        return n * Power_K(n, k - 1);
//    }
//    else {
//        return 1;
//    }
//    // ���˾��ô�else������ 
//}

// �ǵݹ�
int Power_K(int n, int k) {
    int ret = 1;
    int i = 0;
    for (i = 1; i <= k; i++) {
        ret *= n;
    }
    return ret;
}

int main()
{
    int n = 0;
    int k = 0;
    scanf("%d %d", &n, &k);
    int ret = Power_K(n, k);
    printf("%d\n", ret);

    return 0;
}