#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int arr[7] = { 0 };
    int i = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    //�����ֵ�����±�
    int max = arr[0];
    int maxnum = 0;
    for (i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxnum = i;
        }
    }
    //����Сֵ�����±�
    int min = arr[0];
    int minnum = 0;
    for (i = 0; i < 7; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minnum = i;
        }
    }
    arr[maxnum] = 0;
    arr[minnum] = 0;
    //��ƽ��ֵ
    int sum = 0;
    for (i = 0; i < 7; i++) {
        sum += arr[i];
    }
    printf("%.2f\n", sum / 5.0);   //  /5.0!!!!!!!!!!

    return 0;
}

// �汾2��
//int main() {
//
//    while (1) {
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
//    }
//
//    return 0;
//}