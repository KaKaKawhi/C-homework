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
    int input = 0;
    do {
        Meun();
        printf("����������ѡ��\n");
        scanf("%d", &input);
        int a = 0;
        int b = 0;
        switch (input) {
        case 1:
            printf("���������Ĳ�����\n");
            scanf("%d %d", &a, &b);
            int ret = Add(a, b);
            printf("������Ϊ��%d\n", ret);
            break;
        case 2:
            printf("���������Ĳ�����\n");
            scanf("%d %d", &a, &b);
            ret = Sub(a, b);
            printf("������Ϊ��%d\n", ret);
            break;
        case 3:
            printf("���������Ĳ�����\n");
            scanf("%d %d", &a, &b);
            ret = Mul(a, b);
            printf("������Ϊ��%d\n", ret);
            break;
        case 4:
            printf("���������Ĳ�����\n");
            scanf("%d %d", &a, &b);
            ret = Div(a, b);
            printf("������Ϊ��%d\n", ret);
            break;
        case 0:
            printf("���˳�\n");
            break;
        default:
            printf("�����������������\n");
            break;
        }
    } while (input);

    return 0;
}

    
