#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ������ʵ��

int main() {

    int i = 0;
    // �漰��������Ӧ����С�� !!!!!!!!!!
    double sum = 0.0;
    //for (i = 1; i <= 100; i++) {
    //    /*if (i >= 2) {    ���󣡣�����������������������  ѭ������i��ѭ�����б��Ҹ�
    //        i = -i;
    //    }*/
    //    //1.0 !!!!!!!!!!!!!!!
    //    sum += 1.0 / i;
    //}
    // ������
    // ��Ϊָ������i�������ı�
    int flag = 1;
    for (i = 1; i <= 100; i++) {
        sum += 1.0 / (i * flag);
        // �´�flag��Ϊ-1
        flag = -flag;
    }

    printf("%.2lf\n", sum);

    return 0;
}