#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//дһ����������һ���ַ���������
void reverse(char * p, int length) {
    p += (length - 1 - 1);  //-1�õ����һ��Ԫ���±꣬�ټ�һ��\0ȥ��
    int i = 0;
    for (i = 0; i < length-1; i++) {  //-1��Ϊȥ����\0
        printf("%c", *(p - i));
    }
}

//�𰸷����Ҿ��ø�����
//void reverse(char* p, int length) {    //����ָ�룬�Ϳ���Զ�̸ı�ԭֵ�����践��
//    char* left = p;   //��Ԫ��
//    char* right = p + (length - 1 - 1);//βԪ��
//    while (left < right) {
//        /*char* mask = left;
//        left = right;
//        right = mask;*/         //���󣡣��������������ݶ�����ָ��
//        char mask = *left;
//        *left = *right;
//        *right = mask;
//        left++;
//        right--;
//    }
//}

int main() {

    char arr[] = "abcdef";
    int length = sizeof(arr) / sizeof(arr[0]);  //���Ԫ�ظ���������\0 
    reverse(arr,length);

    return 0;
}

