#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//  �ݹ����
// �ݹ����n��쳲��������������������

int fib(int n) {
    if (n <= 2) {
        return 1;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d\n", ret);

    return 0;
}


// ��ˢ��
int Fib(int n) {

    // ˼������nС�ڵ���2��쳲���������Ϊ1��
    // ��n����2��쳲�������ΪFib(n-1)+Fib(n-2)

    if (n <= 2) {
        return 1;
    }
    else {
        return Fib(n - 1) + Fib(n - 2);
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d\n", ret);

    return 0;
}


// �ݹ�ķ�ʽ��������50���������ܴ�ÿ�κ������ö�
// �����ڴ��ջ������ռ䣬��������ƣ���ջ���
// ������ǵݹ鷽ʽ��

