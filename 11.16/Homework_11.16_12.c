#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//ˮ�ɻ�����ָһ����λ��,�������֮�����͵��ڸ�����(���������չΪnλ����)
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

int main() {

    int i = 0;
    for (i = 0; i <= 100000; i++) {
        //���ж����ֵ�λ��    //���ַ���������
        int count = 0;        
        int mask1 = i;       //int mask = i����ֹѭ��������ѭ���ڲ��Ҹ�
        while (mask1 > 0) {  //����ֱ��д��while��mask����
            mask1 /= 10;    
            count++;
        }
        //�����λ�ϵ�����count�η�֮��
        int mask2 = i;       //mask = i��
        int sum = 0;
        while (mask2 > 0) {   //����ֱ��д��while��mask����
            int tmp = mask2 % 10;
            sum += pow(tmp, count);
            mask2 /= 10;
        }
        //�жϲ���ӡ
        if (i == sum) {
            printf("%d ", i);
        }

    }

    //��
    //int count = 1;   //��Ӧ����while��tmp / 10��
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
    //tmp = i;         //��ֹѭ�������Ҹı�
    //while (tmp)
    //{
    //    sum += pow(tmp % 10, count);
    //    tmp = tmp / 10;
    //}


    //���İ汾��(��𰸵�����)
    /*int n = 1;
    int sum = 0;
    int tmp = i;
    while (tmp /= 10) {
        n++;
    }
    tmp = i;
    while (tmp) {
        sum += (int)pow(tmp % 10, n);   //Ϊ�˱��⾯�棬pow����ֵ
                                        //Ϊdouble���ͣ����ǿ��Է���int��ض�
        tmp /= 10;
    }
    if (sum == i) {
        printf("%d ", i);
    }*/

    return 0;
}

