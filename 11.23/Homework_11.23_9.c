#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//С�����Ͽ���Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷���
//����������
//�������һ������n(1 �� n �� 30)
//���������
//���һ����������С���ֿ����ߵķ�������
// �оٳ����������ͻᷢ�֣�������쳲����������ŵ�

int fib(int n) {
    if (1 == n) {
        return 1;
    }
    if (2 == n) {
        return 2;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {

    int n = 0;
    if (scanf("%d", &n) >= 1 && scanf("%d", &n) <= 30) {
        int ret = fib(n);
        printf("%d\n", ret);
    }

    return 0;
}