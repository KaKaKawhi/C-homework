#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stu
{
    int age;
    char name[20];
    double score;
};

int Cmp_int(const void* pl, const void* pr) {
    return ((struct Stu*)pl)->age - ((struct Stu*)pr)->age;
}

int Cmp_str(const void* pl, const void* pr) {
    return strcmp(((struct Stu*)pl)->name, ((struct Stu*)pr)->name);
}

int Cmp_double(const void* pl, const void* pr) {
    if (((struct Stu*)pl)->score > ((struct Stu*)pr)->score) {
        return 1;
    }
    else if (((struct Stu*)pl)->score < ((struct Stu*)pr)->score) {
        return -1;
    }
    else {
        return 0;
    }
}

int main()
{
    struct Stu s[] = { {20, "tom", 88.8}, {19, "lucy", 98.7}, {23, "jack", 77.8}};

    // 数组名s非特殊情况下代表首元素地址，首元素即为一个结构体变量
    struct Stu* buf = s;
    int num = sizeof(s) / sizeof(s[0]);
    int size = sizeof(s[0]);

    //qsort(buf, num, size, Cmp_int);
    //qsort(buf, num, size, Cmp_str);
    qsort(buf, num, size, Cmp_double);

    // 打印
    int i = 0;
    for (i = 0; i < num; i++) {
        printf("%d %s %.2lf\n", s[i].age, s[i].name, s[i].score );
    }

    return 0;
}

    
