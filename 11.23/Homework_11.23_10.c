#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

// С����ϲ�����֣�����ϲ��0��1�������ڵõ���һ���������ÿλ�������0��1��
// ���ĳһλ���������Ͱ������1�������ż������ô�Ͱ������0������ش������õ������Ƕ��١�
//����������
//�������һ������n(0 �� n �� 109)
//���������
//���һ����������С�����޸ĺ�õ������֡�
//ʾ��1
//���룺222222 �����0
//ʾ��2
//���룺123 �����101

int main() {

    int n = 0;
    scanf("%d", &n);
    int count = 0;
    int size = 1;
    while (n) {
        if ((n % 10) % 2 == 0) {
            size *= 10;
        }
        else if ((n % 10) % 2 != 0) {
            count += size * 1;
            size *= 10;
        }
        n /= 10;
    }
    printf("%d", count);

    return 0;
}

//�𰸷�
//#include <stdio.h>
//#include <math.h>
//
//
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    scanf("%d", &n);
//    int i = 0;
//    while (n)
//    {
//        int m = n % 10;
//        if (m % 2 == 1)
//            m = 1;
//        else
//            m = 0;
//        sum += m * pow(10, i);
//        i++;
//
//        n /= 10;
//    }
//    printf("%d\n", sum);
//    return 0;
//}