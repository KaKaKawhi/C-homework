#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

// ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ��������У����������ӡ��
// Ҫ�󣺲���ʹ��C�������е��ַ�������������

//δʹ�õݹ鷽ʽ��
//void reverse_string(char* arr) {
//    int left = 0;                //Ҳ������ָ��
//    int right = strlen(arr) - 1;
//    while (left < right) {
//        char mask = arr[left]; 
//        arr[left] = arr[right];
//        arr[right] = mask;
//        left++;
//        right--;
//    }
//}

//ʹ�õݹ�ʵ���ַ�������
void reverse_string(char* arr) {
    char* left = arr;
    char* right = arr + strlen(arr) - 1;
    ���ᣡ
}

int main()
{
    char arr[20] = ""; //����Ҫ��ʼ��20���������л��������
    scanf("%s", &arr);
    reverse_string(arr);
    printf("%s\n", arr);

    return 0;
}

