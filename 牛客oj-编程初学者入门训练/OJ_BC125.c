#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int score = 0;
    scanf("%d", &score);
    if (score > 100 || score < 0) {
        printf("F");
    }
    else {//if嵌套语句以else结束好习惯
        if (score >= 90) {
            printf("A");
        }
        else if (score >= 80) {//隐含了<90
            printf("B");
        }
        else if (score >= 70) {
            printf("C");
        }
        else if (score >= 60) {
            printf("D");
        }
        else {//if嵌套语句以else结束好习惯
            printf("E");
        }
    }

    return 0;
}