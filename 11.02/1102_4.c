#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��д������n�Ľ׳ˣ����������
// n! = (n-1)! * n , (n-1)! = (n-2)! * (n-1)
// �޶�������n > 0     �ӽ��޶�������n--

int factorial(int n) {
    /*if (n) {
        return n * factorial(n-1);  //�Լ�д
    }
    else {
        return 1;
    }*/
    //������г���ʽ��Ȼ��д
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

//�ǵݹ�ʵ�ֽ׳�
//int fac(int n) {
//    int i = 0;
//    int ret = 1;
//    for (i = n; i > 0; i--) {
//        ret *= i;
//    }
//    return ret;
//}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = factorial(n);
    printf("%d\n", ret);

    return 0;
}

