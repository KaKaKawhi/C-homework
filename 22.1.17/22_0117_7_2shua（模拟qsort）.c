#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 使用回调函数，模拟实现qsort（采用冒泡方式）

struct Stu
{
    int age;
    double score;
    char name[9];
};


int Cmp_int(const void* pa, const void* pb)
{
    return ((struct Stu*)pa)->age - ((struct Stu*)pb)->age;
}


int Cmp_double(const void* pa, const void* pb)
{
    if ((((struct Stu*)pa)->score - ((struct Stu*)pb)->score) > 0) {
        return 1;
    }
    else if ((((struct Stu*)pa)->score - ((struct Stu*)pb)->score) < 0) {
        return -1;
    }
    else {
        return 0;
    }
}


int Cmp_string(const void* pa, const void* pb)
{
    // int strcmp( const char *str1, const char *str2 );
    return strcmp(((struct Stu*)pa)->name, ((struct Stu*)pb)->name);
}


void Print(struct Stu arr[], int num)
{
    int i = 0;
    for (i = 0; i < num; i++) {
        printf("%d %.2lf %s\n", (arr + i)->age, (arr + i)->score, (arr + i)->name);
    }
}

void Exchange(char* left, char* right, int size) 
{
    int i = 0;
    for (i = 0; i < size; i++) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right++;
    }
}

void My_qsort(void* buf, int num, int size, int(*cmp)(const void*, const void*)) 
{
    int i = 0;
    int j = 0;
    for (i = 0; i < num - 1; i++) {
        for (j = 0; j < num - 1 - i; j++) {
            /*if (cmp((char*)buf, (char*)buf + size * i) > 0) {   错误！！！
                Exchange((char*)buf, (char*)buf + size * i, size);
            }*/
            if (cmp((char*)buf + size * j, (char*)buf + size * (j + 1)) > 0) {
                Exchange((char*)buf + size * j, (char*)buf + size * (j + 1), size);
            }
        }
    }
}

void test_struct(void)
{
    struct Stu arr[] = { {18, 96.6, "alin"}, {23, 99.9, "jack"}, {19, 88.9, "kaka"} };
    int num = sizeof(arr) / sizeof(arr[0]);
    int size = sizeof(arr[0]);

    // 按age排序结构体
    My_qsort(arr, num, size, Cmp_int);

    // 按score排序结构体
    //My_qsort(arr, num, size, Cmp_double);

    // 按name排序结构体
    //My_qsort(arr, num, size, Cmp_string);

    // 打印结构体
    Print(arr, num);
}


int main()
{
    // 测试结构体数组（分别测试按结构体成员浮点数、整型、字符型排列）
    test_struct();

    return 0;
}

    
