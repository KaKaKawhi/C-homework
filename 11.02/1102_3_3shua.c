#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ����n��쳲��������������������

// ���˾��������������������ӡn=123����n > 9��
// ���ȵݹ��ӡ12��n / 10����Ȼ���ӡ3��n % 10��
// ��n <= 9��ֱ�Ӵ�ӡn

void Pri_Num(int num)
{
    if (num > 9) {
        Pri_Num(num / 10);
        printf("%d ", num % 10);
    }
    else {
        printf("%d", num);
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    Pri_Num(num);

    return 0;
}