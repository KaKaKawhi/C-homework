#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨 << ��ʵ��2��n�η��ļ��㡣

// << �޷�ʵ�ָ���������
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        printf("%d\n", 1 << n);
    }
    return 0;
}