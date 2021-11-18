#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int sec = 0;
    scanf("%d", &sec);
    int min = 0;
    int hour = 0;
    if (sec > 0 && sec < 100000000) {
        hour = sec / 3600;//一小时为3600秒看看总共的秒数里有几个3600
        sec %= 3600;
        min = sec / 60;  //一分钟为60秒，sec%3600/60 除了被截去的小时数后的秒数里有多少个60
        sec %= 60;       //除了被劫去的小时和分钟后剩下的，sec%3600%60
        printf("%d %d %d", hour, min, sec);
    }
    else {
        printf("请在允许范围内输入");
    }

    return 0;
}

