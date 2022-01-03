#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
// ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
// ���룺1729�������19

// �ݹ飺����123�൱���ü���12��123/10����3��123%10����
// ֱ��nС��10����λ����ʱ������n����

//int DigitSum(unsigned int n) {
//    if (n > 9) {
//        return n % 10 + DigitSum(n / 10);
//    }
//    else {
//        return n;
//    }
//}

// �ǵݹ�
int DigitSum(unsigned int n) {
    int ret = 0;
    while (n) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);
    int ret = DigitSum(n);
    printf("%d\n", ret);

    return 0;
}