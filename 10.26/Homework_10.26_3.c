#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//��λ���֣���ÿһλ������Ϳ����ж�
int main() {

    int a = 1;
    int b = 100;
    int count = 0;
    int i = 0;
    for (i = a; i < b; i++) {
        if (i % 10 == 9) {
            count++;
        }
        if (i / 10 == 9) {
            count++;
        }
        // �����Ժϲ�дif (i / 10 == 9 || i % 10 == 9),
        // ��Ϊ����ж�99����ǰ���������ֱ�Ӽ�1��������û�м���
    }
    printf("%d\n", count);

    return 0;
}

