#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// ģ��ʵ�ֿ⺯��strlen

// 3ˢ���ͱʼ�������汾��ͬ
// const�����ַ������ݣ���ֹ���ı�
//int My_Strlen(const char* str) {
//
//    int len = 0;
//    // ȷ��û�д����ָ��
//    assert(str);
//    // �൱��while('\0' != (*str))
//    while (*str) {
//        len++;
//        str++;
//    }
//    return len;
//}
//
//int main()
//{
//    char str[20] = { 0 };
//    scanf("%s", str);
//    int len = My_Strlen(str);
//    printf("%d\n", len);
//
//    return 0;
//}



// ���İ汾������֮���Լ�д�������˾��û�����ڵĲ�����⣩
//int My_Strlen(const char* str) {
//    assert(str);
//    char* mask = str;
//    // ��maskָ��'\0'ʱ���Ƚ�����*maskΪ'\0'�ж�����Ϊ�٣����Լ�����ƶ�һλ
//    while (*(mask++)) {
//        ;
//    }
//    return mask - str - 1;
//}

//�����˾���������Լ���ˢд�������汾����⣡������
int My_Strlen(const char* str) {  //����str�����ݲ����ı�           
    assert(str);   //��ֹ�����ָ��
    char* mask = str;
    // ��maskָ��'\0'ʱ�˳�ѭ��
    while (*mask != '\0') {  
        mask++;
    }
    return mask - str;
}

int main()
{
    char str[20] = { 0 };
    scanf("%s", str);
    int len = My_Strlen(str);
    printf("%d\n", len);

    return 0;
}