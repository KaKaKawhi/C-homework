#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 自己第一个版本（不满足多组输入）
//int main() {
//
//    int arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++) {
//        scanf("%d", &arr[i]);
//    }
//    //求最大值极其下标
//    int max = arr[0];
//    int maxnum = 0;
//    for (i = 1; i < 7; i++) {
//        if (arr[i] > max) {
//            max = arr[i];
//            maxnum = i;
//        }
//    }
//    //求最小值极其下标
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
//    //求平均值
//    int sum = 0;
//    for (i = 0; i < 7; i++) {
//        sum += arr[i];
//    }
//    printf("%.2f\n", sum / 5.0);   //  /5.0!!!!!!!!!!
//
//    return 0;
//}


// 答案版本：（不满足多组输入）
//int main() {
//
//    
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
//    
//
//    return 0;
//}


// 别人版本（先冒泡排序再将数组中间5个加起来求平均）
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


//别人版本（个人认为这个较好，和我2刷思路一样，区别是他用了数组)
int main() {
    int arr[7];
    int* max = arr;//最大值
    int* min = arr;//最小值
    while (~scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, arr + 3, arr + 4, arr + 5, arr + 6))
    {   //多组输入
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] > *max)//最大值
                max = arr + i;
            if (arr[i] < *min)//最小值
                min = arr + i;
            sum += arr[i];//求和
        }
        printf("%.2f\n", (sum - *min - *max) / (float)5);//输出
    }
    return 0;
}


//二刷
//int main() {
//
//    // 公务员面试现场打分。有7位考官，从键盘输入若干组成绩，
//    // 每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
//    //（注：本题有多组输入）
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


// 老师讲版本
int main()
{
    int arr[7] = { 0 };
    while (~scanf("%d %d %d %d %d %d %d", arr, arr + 1, arr + 2, \
        arr + 3, arr + 4, arr + 5, arr + 6)) {
        int i = 0;
        // 初始化最值为反差值
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


