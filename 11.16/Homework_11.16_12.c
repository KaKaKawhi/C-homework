#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

int main() {

    int i = 0;
    for (i = 0; i <= 100000; i++) {
        int count = 0;
        int mask1 = i;
        while (mask1 > 0) {
            mask1 /= 10;
            count++;
        }
        int mask2 = i;
        int sum = 0;
        while (mask2 > 0) {
            int tmp = mask2 % 10;
            sum += pow(tmp, count);
            mask2 /= 10;
        }
        if (i == sum) {
            printf("%d ", i);
        }

    }
    //��
    //int count = 1;
    //int tmp = i;
    //int sum = 0;
    ////�ж�i�Ƿ�Ϊˮ�ɻ���
    ////1. ���ж����ֵ�λ��
    //while (tmp / 10)
    //{
    //    count++;
    //    tmp = tmp / 10;
    //}

    ////2. ����ÿһλ�Ĵη���
    //tmp = i;
    //while (tmp)
    //{
    //    sum += pow(tmp % 10, count);
    //    tmp = tmp / 10;
    //}
    return 0;
}

