#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ǵݹ�ķ���ʵ��n�Ľ׳�
//int multiply(int n) {
//    int ret = 1;
//    int i = 0;
//    for (i = 1; i <= n; i++) {  //i��2��ʼ����
//        ret *= i;
//    }
//    return ret;
//}

// �ݹ�ķ���ʵ��n�Ľ׳�:
// ���ɣ�n��=��n-1����*n
// �޶�������n > 1
// �ӽ��޶�������n-1
// ���õķ������������г���ʽ����ʹ�õݹ飺n <= 1,mul = 1 ; n > 1,mul = n * mul(n - 1) 
int multiply(int n) {
    if (n > 1) {
        return multiply(n - 1) * n; 
    }
    return n;
}

int main() {

    int n = 0;
    scanf("%d", &n);
    int ret = multiply(n);
    printf("%d\n", ret);

    return 0;
}