#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
// ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
// ���룺1729�������19

// �ݹ飺
// ���ɣ�return dig(n) = return n%10 + dig(n/10)
// �޶�������n > 9
// �ӽ��޶�������dig(n/10)
int add(int n) {
    /*if (n > 9) {
        return n % 10 + add(n / 10);
    }
    else {
        return n;
    }*/

    //��:
    if (n > 9) {
        return n % 10 + add(n / 10);
    }
    return n;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = add(n);
    printf("%d\n", ret);

    return 0;
}

