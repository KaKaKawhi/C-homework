#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    int sum = 0;
    int count = 0;
    int num = 0;
    while (count < 5) {   //forѭ�����ʺ�
        scanf("%d", &num);   // scanf("%d ", &num)���������ո���Ϊÿ�ε������ʽ���밴�ա����еĸ�ʽ��
                             //���ո�һ�Σ����ѭ����scanf�ͻ�����ո�ֹͣ��Ȼ��������һ�����֣��ٴζ�ȡ��
                             //�������������һ���ո���Ȼֹͣ
                            //C������, ���벢����ʵʱ��scanf��Ӧ��.
                            //�����ȴ��ڻ�����.
                            //ֻ�е��������� / ������ / ��������������֮һʱ, �Żᱻ�͵�scanf.
                            //���� Ϊ����scanf�յ�����, �ͱ���ӻس�.
        sum += num;
        count++;
    }
    printf("%.1lf\n", sum / 5.0); //5.0    С�����ڴ��к��ѱ��棨�����ƣ�


    // �Ż���
    int sum = 0;
    int i = 0;
    // Ϊ����������������double���ͣ�double���ͺ�int��������ᷢ����������,intתΪdouble���ͣ������5-���������
    double flag = 1.0;      //!!!!!!!!!!!!!!!!!!!
    int n = 0; 
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum += n;
    }
    printf("%.1lf\n", (sum * flag) / 5);   //!!!!!!!!!!!!!!!!!!!

    return 0;
}

