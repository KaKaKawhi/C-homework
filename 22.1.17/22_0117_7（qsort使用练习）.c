#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ��ϰʹ�ÿ⺯����qsort����������͵�����

//  #include <stdlib.h>  
// void qsort( void *buf, size_t num, size_t size, int (*compare)(const void *, const void *) );
// ���ܣ� ��bufָ�������(����num ��,ÿ��Ĵ�СΪsize)���п�������
// �������compare �ĵ�һ������С�ڵڶ������������ظ�ֵ��
// ������ڷ�����ֵ��������ڷ�����ֵ��������buf ָ������ݰ���������

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

    // ��age����ṹ��
    //qsort(arr, num, size, Cmp_int);

    // ��score����ṹ��
    qsort(arr, num, size, Cmp_double);

    // ��name����ṹ��
    //qsort(arr, num, size, Cmp_string);

    // ��ӡ�ṹ��
    Print(arr, num);
}


int main() 
{
    // ���Խṹ�����飨�ֱ���԰��ṹ���Ա�����������͡��ַ������У�
    test_struct();

    return 0;
}

    
