#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int score = 0;
    scanf("%d", &score);
    if (score > 100 || score < 0) {
        printf("F");
    }
    else {//ifǶ�������else������ϰ��
        if (score >= 90) {
            printf("A");
        }
        else if (score >= 80) {//������<90
            printf("B");
        }
        else if (score >= 70) {
            printf("C");
        }
        else if (score >= 60) {
            printf("D");
        }
        else {//ifǶ�������else������ϰ��
            printf("E");
        }
    }

    return 0;
}