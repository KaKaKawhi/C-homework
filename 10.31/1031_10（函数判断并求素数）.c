#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<math.h>    //������

// д������ӡ100-200������

int judge(int n) {
    int i = 0;
    for (i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;  //һ�����Ա���������������������0
        }
    }
    return 1;
}

int main()
{
    int n = 0;
    int i = 0;

    for (i = 100; i <= 200; i++) {
        if (judge(i) == 1) {
            printf("%d ", i);
        }
    }

    // �Ż�������2��3�����������ڣ����಻���ܳ�����������������
    // ���Կ�����i+=2������ѭ���������������Ǵ����Ż����׸��жϵ���
    // ����Ϊ�������׵�100����������101�ǣ����Դ�101��ʼ

    for (i = 101; i <= 200; i += 2) {
        // ֱ��дΪif (judge(i))��ֱ�Ӹ��ݺ�������ֵ��������㣩�õ�
        // �������ʽ���߼������Ȼ���ж�����
        if (judge(i) == 1) {
            printf("%d ", i);
        }
    }

    /*scanf("%d", &n);
    if (1 == judge(n)) {
        printf("������");
    }
    else {
        printf("��������");
    }*/
    
    return 0;
}

