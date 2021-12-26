#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    //老师 我想问下我用float类型的变量，输入80.845，然后以.2f输出为80.85
    //    但是用double类型，以.2lf输出为80.84?????????
    // 浮点存储超过精度后本身就具有不确定性, 小数是以二进制存储的，是否超出范围跟它几位小数没关系
    // 可以了解一下小数转二进制存储
    // 是乘以2取模1恰好是0的时候结束，否则每次整数位的数据就是对应的二进制

    int num = 0;
    float ch = 0.0;
    float math = 0.0;
    float eng = 0.0;
    scanf("%d;%f,%f,%f", &num, &ch, &math, &eng);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",
        num, ch, math, eng);

    return 0;
}

//答案：
//使用的是C语言
//#include <stdio.h>
//int main() {
//    long Num;
//    float CLanguage, Math, English;
//    scanf("%ld;%f,%f,%f", &Num, &CLanguage, &Math, &English);
//    printf("The each subject score of  No. %ld is %.2f, %.2f, %.2f.", Num, CLanguage, Math, English);
//}