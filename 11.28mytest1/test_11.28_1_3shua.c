#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��������������С������

int Min_Mul(int a, int b) {
    // ˼��������������С����������Сֵ�����������������ֵ
    int max = a > b ? a : b;
    while (1) {
        if ((0 == max % a) && (0 == max % b)) {
            // ���Լ����return (a * b) / max;
            return max;
        }
        max++;
    }

    // ��2��(�𰸣��Լ�дģ��)
    // ˼��������һ����������i������ǹ�������һ��Ҳ����һ�����ı���
    /*int i = 1;
    while ((i * a) % b != 0) {
        i++;
    }
    return i * a;*/
}

int main()
{ 
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int ret = Min_Mul(a, b);
    printf("%d\n", ret);

    return 0;
}