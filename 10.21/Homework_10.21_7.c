#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu {  //不需要结构体，直接打印
    // 数据类型，不能初始化
    char name[10];
    int age;
    char sex[5];
}; //注意别丢掉;

int main() {

    struct stu jack = { "Jack",18,"man" };
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("%s    %d     %s\n", jack.name, jack.age, jack.sex);

    // 答案：
    /*printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");*/

    return 0;
}

