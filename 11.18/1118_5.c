#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

int main()
{
    int money = 20;
    int emp_count = 0;//��ƿ��
    int cola_count = 0;//�ɻ�õ���ˮ��
    cola_count = 20;
    int mask = cola_count;//����ԭʼ�ɻ����ˮ��������
    while (mask) {
        mask--;
        emp_count++;
        if (2 == emp_count) {
            cola_count++;
            mask++;
            emp_count = 0;  //��ƿ������
        }
    }
    printf("%d\n",cola_count);

    return 0;
}

