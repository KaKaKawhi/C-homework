#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 3ˢ
// �ǵݹ����n��쳲�������

int Fib(int n) {

    // ˼������nС�ڵ���2��쳲���������Ϊ1��
    // ��n����2��쳲�������ΪFib(n-1)+Fib(n-2)

    // ��ʾ���ڵ�����������ʼ����ֵΪ1�Ա�
    // n<=2ʱֱ�����c,n>2ʱc=a+bҲ����
    int a = 1;
    int b = 1;
    int c = 1;
    if (n <= 2) {
        return c;
    }
    else {
        int i = 0;
        for (i = 3; i <= n; i++) {
            c = a + b;
            // a��b��������ƶ�һλ
            a = b;
            b = c;
        }
        return c;
    }
}

// �Ż���
int Fib(int n) {

    int a = 1;
    int b = 1;
    int c = 1;
    
    while (n > 2) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    // n <= 2ʱ�����赥�������ֻҪ��֤cΪ1������������������
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = Fib(n);
    printf("%d\n", ret);

    return 0;
}