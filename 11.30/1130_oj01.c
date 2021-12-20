#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int isLeap(int year) {

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {

    int year = 0;
    int month = 0;
    while (~scanf("%d %d", &year, &month)) {
        // ÿ��һ���ģ�13578 10 12 31�� 469 11 30��
        // ����ÿ�� �죻ƽ��ÿ�� ��
        // �ȴ�ӡһ���ģ���ӡ2�����ж���ƽ�껹������
        if (month == 1 || month == 3 || month == 5 || month == 7
            || month == 8 || month == 10 || month == 12) {
            printf("31\n");
        }
        else {
            if (month != 2) {
                printf("30\n");
            }
            else {
                if (isLeap(year)) {
                    printf("29\n");
                }
                else {
                    printf("28\n");
                }
            }
        }
    }

    return 0;
}

//��
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d%d", &y, &m) != EOF)
//    {
//        int day = days[m - 1];
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//        {
//            if (m == 2)
//                day += 1;
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}