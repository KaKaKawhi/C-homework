#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Meun() 
{
    printf("-----------------------\n");
    printf("-----------------------\n");
    printf("----1���ӷ� 2������----\n");
    printf("----3���˷� 4������----\n");
    printf("----0���˳�------------\n");
    printf("-----------------------\n");
}

int Add(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    return a / b;
}

int main()
{
    // ����ָ�����鷽��
    int(*parr[])(int a, int b) = { Add, Sub, Mul, Div };

    int input = 0;
    do {
        Meun();
        printf("����������ѡ��\n");
        scanf("%d", &input);
        
        // ������֧�ж�
        if (input >= 1 && input <= 4) {
            int a = 0;
            int b = 0;
            printf("�����������������������\n");
            scanf("%d %d", &a, &b);
            int ret = parr[input - 1](a, b);
            printf("������Ϊ��%d\n", ret);
        }
        else if (!input) 
        {
            printf("���˳�\n");
            break;//�Ӳ��Ӷ���
        }
        else {
            printf("�����������������\n");
        }
    } while (input);

    return 0;
}

    
