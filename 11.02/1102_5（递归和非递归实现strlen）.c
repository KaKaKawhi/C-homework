#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// ��д��������������ʱ���������ַ����ĳ���
// ������abc�������൱������bc�����ȼ�1 ...
// �޶��������ַ�����Ϊ\0  �ӽ��޶����ַ���ָ�����ƶ�һλ

int string_length(char arr[]) {
    if ('\0' != *arr) {
        return string_length(arr + 1) + 1;
        //arr += 1;   ����Ҫ����Ϊ��string_length(arr + 1)��
        //�ٴεݵ��ú�����arr�Ѿ����ƣ�ÿ�鷵��һ�μ�һ
    }
    else {
        return 0;   //���һ�ε�*arrΪ'\0'������0 ,0+1+1+1... = 6
    }
}

//�ǵݹ�ʵ��strlen
//int my_strlen(char* arr) {
//    int count = 0;
//    while (*arr != '\0') {
//        count++;
//        arr++;
//    }
//    return count;
//}

int main()
{
    char arr[] = "abcdef";
    //char arr[] = ""; //����Ҫ��ʼ��20���������л��������
    //scanf("%s", &arr);
    printf("%d\n", string_length(arr));

    return 0;
}

