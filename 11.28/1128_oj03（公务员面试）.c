#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �Լ���һ���汾��������������룩
//int main() {
//
//    int arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++) {
//        scanf("%d", &arr[i]);
//    }
//    //�����ֵ�����±�
//    int max = arr[0];
//    int maxnum = 0;
//    for (i = 1; i < 7; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//            maxnum = i;
//        }
//    }
//    //����Сֵ�����±�
//    int min = arr[0];
//    int minnum = 0;
//    for (i = 0; i < 7; i++) {
//        if (arr[i] < min) {
//            min = arr[i];
//            minnum = i;
//        }
//    }
//    arr[maxnum] = 0;
//    arr[minnum] = 0;
//    //��ƽ��ֵ
//    int sum = 0;
//    for (i = 0; i < 7; i++) {
//        sum += arr[i];
//    }
//    printf("%.2f\n", sum / 5.0);   //  /5.0!!!!!!!!!!
//
//    return 0;
//}


// �𰸰汾����������������룩
//int main() {
//
//    
//        int n = 7;
//        int sum = 0;
//        // ��ʼֵmax��ɼ���Χ��С��0��min��ɼ���Χ����100
//        int max = 0;
//        int min = 100;
//        int grade = 0;
//        while (n) {
//            scanf("%d", &grade);
//            if (grade > max) {
//                max = grade;
//            }
//            if (grade < min) {
//                min = grade;
//            }
//            sum += grade;
//            n--;
//        }
//
//        sum = sum - max - min;
//        //   /5.0
//        printf("%.2lf\n", sum / 5.0);
//    
//
//    return 0;
//}


// ���˰汾����ð�������ٽ������м�5����������ƽ����
//#include<stdio.h>
//int main(void)
//{
//    double arr[7] = { 0 };
//    while (scanf("%lf %lf %lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
//    {
//        int i = 0;
//        int k = 0;
//        for (i = 0; i < 6; i++)
//        {
//            for (k = 0; k < 6 - i; k++)
//            {
//                double a = 0;
//                if (arr[k] > arr[k + 1])
//                {
//                    a = arr[k];
//                    arr[k] = arr[k + 1];
//                    arr[k + 1] = a;
//                }
//            }
//        }
//        printf("%.2lf\n", (arr[1] + arr[2] + arr[3] + arr[4] + arr[5]) / 5.0);
//    }
//    return 0;
//}


//���˰汾��������Ϊ����Ϻã�����2ˢ˼·һ��������������������)
int main() {
    int arr[7];
    int* max = arr;//���ֵ
    int* min = arr;//��Сֵ
    while (~scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6))
    {   //��������
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] > *max)//���ֵ
                max = arr + i;
            if (arr[i] < *min)//��Сֵ
                min = arr + i;
            sum += arr[i];//���
        }
        printf("%.2f\n", (sum - *min - *max) / (float)5);//���
    }
    return 0;
}


//��ˢ
//int main() {
//
//    // ����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���
//    // ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
//    //��ע�������ж������룩
//    int a, b, c, d, e, f, g = 0;
//    while (~scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g)) {
//        int max = a > b ? a : b;
//        max = max > c ? max : c;
//        max = max > d ? max : d;
//        max = max > e ? max : e;
//        max = max > f ? max : f;
//        max = max > g ? max : g;
//        int min = a < b ? a : b;
//        min = min < c ? min : c;
//        min = min < d ? min : d;
//        min = min < e ? min : e;
//        min = min < f ? min : f;
//        min = min < g ? min : g;
//        double flag = 1.0;
//        printf("%.2lf\n", (flag * (a + b + c + d + e + f + g) - max - min) / 5);
//    }
//
//    return 0;
//}


// ��ʦ���汾
int main()
{
    int arr[7] = { 0 };
    while (~scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, \
        arr + 3, arr + 4, arr + 5, arr + 6)) {
        int i = 0;
        // ��ʼ����ֵΪ����ֵ
        int min = 100;
        int max = 0;
        int sum = 0;
        for (i = 0; i < 7; i++) {
            if (min > arr[i]) {
                min = arr[i];
            }
            if (max < arr[i]) {
                max = arr[i];
            }
            sum += arr[i];
        }
        double ret = (sum - max - min) / 5.0;
        printf("%.2lf\n", ret);
    }

    return 0;
}


