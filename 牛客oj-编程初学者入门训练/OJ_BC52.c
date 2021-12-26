#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int weight = 0;
    int height = 0;
    while (~scanf("%d %d", &weight, &height)) {

        // 没必要，用新值接收身高（以米为单位）时，式子里已经有double类型变量了
        //double flag = 1.0;
        //int high = height / 100;
        
        //height /= 100; 错，height是整形，这样除直接成了1
        //height *= 0.01; 同理

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