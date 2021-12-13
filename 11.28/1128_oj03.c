#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int arr[7] = { 0 };
    int i = 0;
    for (i = 0; i < 7; i++) {
        scanf("%d", &arr[i]);
    }
    //求最大值极其下标
    int max = arr[0];
    int maxnum = 0;
    for (i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxnum = i;
        }
    }
    //求最小值极其下标
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
    //求平均值
    int sum = 0;
    for (i = 0; i < 7; i++) {
        sum += arr[i];
    }
    printf("%.2f\n", sum / 5.0);   //  /5.0!!!!!!!!!!

    return 0;
}

// 版本2：
//int main() {
//
//    while (1) {
//        int n = 7;
//        int sum = 0;
//        // 起始值max存成绩范围最小的0，min存成绩范围最大的100
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