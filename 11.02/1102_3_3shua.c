#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ����n��쳲��������������������

// ���˾��������������������ӡn=123����n > 9��
// ���ȵݹ��ӡ12��n / 10����Ȼ���ӡ3��n % 10��
// ��n <= 9��ֱ�Ӵ�ӡn

//void Pri_Num(int num)
//{
//    if (num > 9) {
//        Pri_Num(num / 10);
//        printf("%d ", num % 10);
//    }
//    else {
//        printf("%d", num);
//    }
//}


// �ǵݹ飺
// ������
//void Pri_Num(int num) {
//    int count = 0;
//    int mask = num;
//    while (mask) {
//        count++;
//        mask /= 10;
//    }
//    int times = 1;
//    while (count) {
//        times *= 10;
//        count--;
//    }
//    times /= 10;
//    while (times) {
//        printf("%d ", num / times);
//        num -= (num / times) * times;
//        times /= 10;
//    }  
//}

// �Ż�
int Reverse_Num(int num) {
    // ���������λ��
    int count = 0;
    int tmp = num;
    while (tmp) {
        count++;
        tmp /= 10;
    }
    // ���������λ����һ��Ӧ10�ı���
    count--;
    int times = 1;
    while (count) {
        times *= 10;
        count--;
    }
    // ����
    int ret = 0;
    while (num) {
        ret += (num % 10) * times;
        num /= 10;
        times /= 10;
    }
    return ret;
}

//ֱ���������ڴ�ӡ
void Pri_Num(int num) {
    int newnum = Reverse_Num(num);
    while (newnum) {
        printf("%d ", newnum % 10);
        newnum /= 10;
    }
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    Pri_Num(num);

    return 0;
}