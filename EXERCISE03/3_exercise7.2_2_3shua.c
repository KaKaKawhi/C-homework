#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��д����������������ʱ���������ַ�������

// 3ˢ��һ��д����
//int My_Strlen(char str[]) {
//
//    // ˼����������abc�����൱�ڵ�����ab��Ȼ���1��
//    // ֱ������ʣһ���ַ�����ǰ����������Ϊ��
//    // ÿ�ο��Խ��������ַ���Ϊ\n��Ϊ��β
//
//    if () {
//        return 1 + My_Strlen(str);
//    }
//    else {
//        return 1;
//    }
//}

// �������������
int My_Strlen(char str[]) {

    // ��ȷ˼�����ַ������ƴ����ַ����׵�ַ��
    // ͨ��*str��\0�Ĺ�ϵ���б��Ƿ�����ݹ飬
    // ͨ��str+1��str����ƶ�һλ�����ֱ���abc��bc��c
    // ������ʣ���ַ�������

    if (*str != '\0') {
        return 1 + My_Strlen(str + 1);
    }
    else {
        return 0;
    }
}

int main()
{
    char str[20] = "";
    scanf("%s", str);
    int len = My_Strlen(str);
    printf("%d\n", len);

    return 0;
}