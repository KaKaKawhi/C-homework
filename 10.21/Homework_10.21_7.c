#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct stu {  //����Ҫ�ṹ�壬ֱ�Ӵ�ӡ
    // �������ͣ����ܳ�ʼ��
    char name[10];
    int age;
    char sex[5];
}; //ע��𶪵�;

int main() {

    struct stu jack = { "Jack",18,"man" };
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("%s    %d     %s\n", jack.name, jack.age, jack.sex);

    // �𰸣�
    /*printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");*/

    return 0;
}

