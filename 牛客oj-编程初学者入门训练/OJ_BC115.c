#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ���󣺽���ͨ�����֣���Ϊ(1 �� n �� 10^9��1 �� m �� 10^9)
//int MaxDiv(int a, int b) {
//    //�����еĽ�СֵΪ���Լ�������ֵ����СΪ1
//    int min = a < b ? a : b;
//    int i = 0;
//    int ret = 0;
//    for (i = min; i >= 1; i--) {
//        if (a % i == 0 && b % i == 0) {
//            ret = i;
//            break;
//        }
//    }
//    return ret;
//}
//
//int main() {
//
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    int div = MaxDiv(a, b);
//    // ��С������ = ��a * b��/ ���Լ��
//    int sum = div + (a * b) / div;
//    printf("%d\n", sum);
//
//    return 0;
//}


//������
int MaxDiv(long long a, long long b) {
    //�����еĽ�СֵΪ���Լ�������ֵ����СΪ1
    long long min = a < b ? a : b;
    long long i = 0;
    long long ret = 0;
    for (i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            ret = i;
            break;
        }
    }
    return ret;
}

int main() {

    long long a = 0;
    long long b = 0;
    scanf("%ld %ld", &a, &b);
    long long div = MaxDiv(a, b);
    // ��С������ = ��a * b��/ ���Լ��
    long long sum = div + (a * b) / div;
    printf("%ld\n", sum);

    return 0;
}