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

//int Cal( int(*p)(int a, int b)) {   //���󣡣�����������
void Cal(int(*p)(int, int)) {
    int a = 0;
    int b = 0;
    printf("���������Ĳ�����\n");
    scanf("%d %d", &a, &b);
    int ret = p(a, b);
    printf("������Ϊ��%d\n", ret);
}

int main()
{
    // �ص���������

    int input = 0;
    do {
        Meun();
        printf("����������ѡ��\n");
        scanf("%d", &input);
        int a = 0;
        int b = 0;
        switch (input) {
        case 1:
            Cal(Add);
            break;
        case 2:
            Cal(Sub);
            break;
        case 3:
            Cal(Mul);
            break;
        case 4:
            Cal(Div);
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

    
