#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <assert.h>

int main() {

    //����
    char* arr = "AEIOUaeiou";
    arr++;
    printf("%s", arr);   //���:EIOUaeiou

    char arr1[] = "AEIOUaeiou";
    arr1++;  //����
    printf("%s", arr1);

    int arr3[] = { 1,2,3 };
    arr3++;  //����
    int i = 0;
    for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("%d ", arr3[i]);
    }

    int* arr3 = { 1,2,3 }; //����
    arr3++;  //����
    int i = 0;
    for (i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        printf("%d ", arr3[i]);
    }


    //������,ָ���ַ�����ָ�룬��������ַ�������
    //char* arr = "AEIOUaeiou";
    //*(arr + 1) = 's';
    //printf("%s", arr);

    //�����ԣ�����const�����ĳ����ǲ����޸ĵ���ֵ
    //const int n = 0;  //Ҳ����д��int const n;
    //n = 1;

    //�����ԣ�����const������ָ���ǲ����޸ĵ���ֵ
    //int n = 0;
    //int* const p;
    //p = &num;

    //�����ԣ�����ֵ�ǲ����޸ĵ���ֵ
    //1 = 2;

    //�����ԣ����� #define ���������ǲ����޸ĵ���ֵ
    //#define n 2;        //(д������)
    //n = 1;              //(main������)

    return 0;
}