#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ�ͷǵݹ�ֱ�ʵ��strlen
// size_t strlen(char* str);
// ���ܣ����������ַ���str �ĳ���(����ֵ������֮ǰ�ַ���Ŀ)��

// �ǵݹ鷽ʽ:
//int my_strlen(char str[]) {
//    char* mask = str;
//    int count = 0;
//    while (*mask != '\0') {   //���д��'\0' != *mask
//        mask++;
//        count++;
//    }
//    return count;
//}

// �ݹ鷽ʽ��
// ���ɣ���abc���ȣ��൱���� 1 + bc�ĳ���
// �޶�������ʣ�µ��ַ�����Ϊ'\0'
// �ӽ��޶�������ָ������
int my_strlen(char str[]) {
    char* mask = str;
    //���д��'\0' != *mask
    if (*mask != '\0') {  
        return 1 + my_strlen(mask + 1);  //�Ż���3shua
    }
    return 0;
}

int main() {

    char str[20] = { 0 };  //һ��Ҫ��ʼ���ַ������ȣ������Խ��
    scanf("%s", str);
    int len = my_strlen(str);
    printf("%d", len);

    return 0;
}