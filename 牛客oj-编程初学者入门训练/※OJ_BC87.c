#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��һ��д�Ĵ������
//int main() {
//
//    int n = 0;
//    scanf("%d", &n);
//    double max = 0.0;
//    double min = 100.0;
//    double sum = 0.0;
//    double score = 0.0;
//    while (n) {                    ������
//        scanf("%d", &score);       ������
//        sum += score;
//        if (score > max) {
//            max = score;
//        }
//        if (score < min) {
//            min = score;
//        }
//        n--;                       ������
//    }
//    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);
//
//    return 0;
//}

int main() {

    int n = 0;
    scanf("%d", &n);
    double max = 0.0;
    double min = 100.0;
    double sum = 0.0;
    double score = 0.0;
    //����nȥ�ı䣬ȷ�������ƽ����ʱn����
    double mask = n;
    while (mask) {
        scanf("%lf", &score);
        sum += score;
        if (score > max) {
            max = score;
        }
        if (score < min) {
            min = score;
        }
        mask--;
    }
    printf("%.2lf %.2lf %.2lf\n", max, min, sum / n);

    return 0;
}