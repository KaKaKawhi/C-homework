#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int sec = 0;
    scanf("%d", &sec);
    int min = 0;
    int hour = 0;
    if (sec > 0 && sec < 100000000) {
        hour = sec / 3600;//һСʱΪ3600�뿴���ܹ����������м���3600
        sec %= 3600;
        min = sec / 60;  //һ����Ϊ60�룬sec%3600/60 ���˱���ȥ��Сʱ������������ж��ٸ�60
        sec %= 60;       //���˱���ȥ��Сʱ�ͷ��Ӻ�ʣ�µģ�sec%3600%60
        printf("%d %d %d", hour, min, sec);
    }
    else {
        printf("��������Χ������");
    }

    return 0;
}

