#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int weight = 0;
    int height = 0;
    while (~scanf("%d %d", &weight, &height)) {

        // û��Ҫ������ֵ������ߣ�����Ϊ��λ��ʱ��ʽ�����Ѿ���double���ͱ�����
        //double flag = 1.0;
        //int high = height / 100;
        
        //height /= 100; ��height�����Σ�������ֱ�ӳ���1
        //height *= 0.01; ͬ��

        double high = height * 0.01;
        double bmi = weight / (high * high);
        if (bmi < 18.5) {
            printf("Underweight\n");
        }
        else if (bmi >= 18.5 && bmi <= 23.9) {
            printf("Normal\n");
        }
        else if (bmi > 23.9 && bmi <= 27.9) {
            printf("Overweight\n");
        }
        else {
            printf("Obese\n");
        }
    }

    return 0;
}