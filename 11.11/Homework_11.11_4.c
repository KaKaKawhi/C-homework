#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    int x = 100;
    int i = 0;

    for (i = 1; i <= 31; i += 2) {//����ż��λ  ����i = 30 i >= 0 i-= 2
        printf("%d", (x >> i) & 1);
    }
    printf("%c",'\n');//����Ҳ�ɣ�����printf��"\n"����
    //printf��'\n'��������Ϊ����ԭ�ͣ�int printf(char *format, args, ...);
                      // ��       �ܣ���formatָ��ĸ�ʽ�ַ������涨�ĸ�ʽ�����������args��ֵ���
                      // ��  ��   ֵ������ַ��ĸ��������������ظ���

    for (i = 0; i <= 30; i += 2) {//���㿪ʼ   ��������λ  zhengxiang:i = 31 i >= 1
        printf("%d", (x >> i) & 1);
    }


    return 0;
}

