#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu {  //����Ҫ�ṹ�壬ֱ�Ӵ�ӡ
    char name[10];
    int age;
    char sex[5];
};

int main() {

    struct stu jack = { "Jack",18,"man" };
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("%s    %d     %s\n", jack.name, jack.age, jack.sex);

    return 0;
}

