#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>

// �ݹ�ʵ�����n��쳲�������
// �ݹ飺(���˾��õݹ�ķ��������������)
// ���ɣ�if (1 == n || 2 == n) {return 1;}     ����Ϊǰ����֮�� ���й�ʽ��
// �޶�������n > 2
// �ӽ��޶�������return fib(n - 2) + fib(n - 1)

//int fib(int n) {
//    if (n <= 2) {    //�൱��if (1 == n || 2 == n)
//        return 1;
//    }
//    else {
//        return fib(n - 1) + fib(n - 2);
//    }
//    // ���˾��ô���else��������

// �ǵݹ�ʵ�����n��쳲�������
// ÿ��������һ�飬ÿ������ƶ�һλ��ֱ�����һ������������λ��
int fib(int n) {
    int a = 1;
    int b = 1;
    int c = 1;    //��n = 1����2������c=1
    while (n > 2) {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d\n", ret);

    return 0;
}

