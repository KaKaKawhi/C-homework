#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// д����,ʵ��ÿ�ε�������������ͻὫnumֵ����1

void add(int* num) {
    (*num)++;
}

int main()
{
    int num = 0;
    add(&num);
    printf("%d\n", num);
    
    return 0;
}


// ��ˢ����ˢ���ʼǣ�
void add(int* num) {
    (*num)++;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    add(&num);
    printf("%d\n", num);

    return 0;
}