#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ�ͷǵݹ�ֱ�ʵ��strlen

// �ݹ飺����"abc"���ȣ��൱�ڷ��ص�����"bc"�ĳ��ȼ�1��
// ���ַ������ƣ��ַ������׵�ַ�������ƣ�ÿ������ƶ�һλ��
// ֱ���ƶ���\0��λ�ã�����0

//int My_Strlen(char str[]) {
//    if('\0' == *str) {
//        return 0;
//    }
//    else {
//        return 1 + My_Strlen(str + 1);
//    }
//    // ���˾��ô�else��������
//}


// �ǵݹ飺

int My_Strlen(char str[]) {
    int ret = 0;
    while (*str != '\0') {
        ret++;
        str++;
    }
    return ret;
}


int main()
{
    char str[20] = "";
    scanf("%s", str);
    int len = My_Strlen(str);
    printf("%d\n" ,len);

    return 0;
}