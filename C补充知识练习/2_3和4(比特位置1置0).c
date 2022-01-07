#define _CRT_SECURE_NO_WARNINGS 1
#define SETBIT(x, n) ((x) |= (1 << (n - 1))
#define CLRBIT(x, n) ((x) &= (~(1 << (n - 1))))

#include <stdio.h>

// ��˳���ӡ���������б���λ
void Print_Bit(int x) {
    int len = sizeof(x) * 8;
    int i = 0;
    for (i = len - 1; i >= 0; i--) {
        // if((x << i) & 1)Ϊʲô���ԣ���Ϊx���ƺ�1������x�����λ��Զ��
        if (x & (1 << i)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}

int main()
{
    int x = 0;
    scanf("%d", &x);
    // ��ӡ���������б���λ
    Print_Bit(x);

    // �������ݴ��������5λ��Ϊ1
    // ��֪������ΪʲôҪ�������ŲŲ�����
    SETBIT(x, 5));

    printf("\n------------------------\
-----------------------------------------\n");
    // ��ӡ���������б���λ
    Print_Bit(x);

    // �������ݴ��������5λ������
    CLRBIT(x, 5);

    printf("\n------------------------\
-----------------------------------------\n");
    // ��ӡ���������б���λ
    Print_Bit(x);

    return 0;
}


