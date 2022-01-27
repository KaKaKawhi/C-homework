#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 练习使用库函数，qsort排序各种类型的数据

//  #include <stdlib.h>  
// void qsort( void *buf, size_t num, size_t size, int (*compare)(const void *, const void *) );
// 功能： 对buf指向的数据(包含num 项,每项的大小为size)进行快速排序。
// 如果函数compare 的第一个参数小于第二个参数，返回负值；
// 如果等于返回零值；如果大于返回正值。函数对buf 指向的数据按升序排序。

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


void test_struct(void) 
{
    struct Stu arr[] = { {18, 96.6, "alin"}, {23, 99.9, "jack"}, {19, 88.9, "kaka"}};
    int num = sizeof(arr) / sizeof(arr[0]);
    int size = sizeof(arr[0]);

    // 按age排序结构体
    //qsort(arr, num, size, Cmp_int);

    // 按score排序结构体
    qsort(arr, num, size, Cmp_double);

    // 按name排序结构体
    //qsort(arr, num, size, Cmp_string);

    // 打印结构体
    Print(arr, num);
}


int main() 
{
    // 测试结构体数组（分别测试按结构体成员浮点数、整型、字符型排列）
    test_struct();

    return 0;
}

    
