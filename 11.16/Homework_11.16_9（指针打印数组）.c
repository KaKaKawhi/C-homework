#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int* p = arr;
    int i = 0;
    
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf("%d ", *(p + i));  //pû�иı�
    }
    
    //for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); ++i)
    //{
    //    printf("%d ", *p++);   // *p: ȡ��p��ָ��λ�õ�Ԫ��
    //                           // p++ ��ȡp����һ��λ�� ��p�ı��ˣ�ʵ��Ϊ*(p++)
    //}  �𰸷���
    return 0;
}


// ��ˢ����ˢ���ʼǣ�
// дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣��arr��һ������һά���顣��

void Print(int arr[], int len) {
    int i = 0;
    int* p = arr;
    for (i = 0; i < len; i++) {
        printf("%d ", *(p + i));
    }
}

int main() {

    int arr[] = { 0, 1, 2, 3, 4, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Print(arr, len);

    return 0;
}