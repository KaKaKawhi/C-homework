#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 通过scanf函数的%m格式控制可以指定输入域宽，
// 使用%md的'm'来控制输入的域宽（列数），输入数据域宽（列数），
// 按此宽度截取所需数据
// 在printf函数输出中同样使用%md来控制输出的域宽，
// %0md 在m前加0可以使不足两位数时，在前面补足0。

int main(void)
{
    int year, month, day;

    // 按照备注信息，注意截取指定的数据个数即可
    scanf("%4d%2d%2d", &year, &month, &day);

    // 通过printf函数的%0格式控制符，输出数值时指定左面不使用的空位置自动填0。
    // 根据备注的提醒信息，%02d表示输出的格式为2位，不足在前面添0
    // 如果用%2输出，则输入20130225，输出的month= 2（空格和2）
    printf("year=%d\nmonth=%02d\ndate=%02d", year, month, day);

    return 0;
}