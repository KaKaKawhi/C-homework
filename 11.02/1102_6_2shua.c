#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ��������У����������ӡ��
// Ҫ�󣺲���ʹ��C�������е��ַ�������������

int my_strlen(char str[]) {
    char* mask = str;
    //���д��'\0' != *mask
    if (*mask != '\0') {
        return 1 + my_strlen(mask + 1);
    }
    return 0;
}

// �ݹ�:
// ���ɣ�������ָ��ָ����Ԫ�أ���ָ��ָ��'\0'ǰ��һ��Ԫ�أ�������Ȼ����ָ������һλ����ָ������һλ��Ȼ���ظ�
// �޶���������ָ��С����ָ��
// �ӽ��޶�������Ȼ����ָ������һλ����ָ������һλ
void reverse_string(char str[]) {
    /*char* left = str;
    char* right = str + my_strlen(str) - 1;
    if (left < right) {
        left++;
        *right = '\0';
        right--;
        reverse_string();*/
    //��һ��д�Ĵ���汾��˼���������!!!!!!!!!!!!!!!!!!!!!!!!!!

    //if(*str != '\0'){
    //    //�൱��if(*str)
    //    *(str + my_strlen(str) - 1) = '\0';
    //}
    //�����޹������𰸺����¸���˼·д��

    char tmp = *str;
    //����д������������һ�ε���һ�Σ���Ϊ֮��str�ĳ����Ѿ������仯��
    int len = my_strlen(str); 
    *str = *(str + len - 1);
    *(str + len - 1) = '\0';

    if (my_strlen(str + 1) >= 2) {
        reverse_string(str);
    }

    *(str + len - 1) = tmp;
}

int main() {

    char str[20] = { 0 };  //һ��Ҫ��ʼ���ַ������ȣ������Խ��
    scanf("%s", str);
    reverse_string(str);
    printf("%s\n", str);

    return 0;
}