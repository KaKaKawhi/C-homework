#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// �ݹ飺����abcde���൱�ڵ�������bcd���ͽ����ַ�a��e��
// ���Ϊ�������ַ���ֱ������ʣһ���ַ������䣬
// ���Ϊż���������ʣ����������

// ���鷽ʽ������
//void Reverse_Str(char str[]) {
//    int left = 0;
//    int right = 0;
//    while ('\0' != str[right]) {
//        right++;
//    }
//    right--;
//    if ((right - left) > 0) {
//    // �Ż���if (right - left)
//        str[right] = '\0';
//        Reverse_Str(str + 1);
//    }
//    else {
//        ;
//    }
//}

//int My_Strlen(char* left, char* right) {������
//    return (right - left);
//}

//ָ�뷽ʽ������
//void Reverse_Str(char* str) {
//    char* left = str;
//    char* right = str;
//    // ��rightָ��ָ���ַ�����β\0֮ǰ��
//    while ('\0' != *right) {
//        right++;
//    }
//    right--;
//    // ����left��rightָ����ַ�����
//    char tmp = *left;
//    *left = *right;
//    *right = tmp;
//    if (My_Strlen(left, right)) {
//        *right = '\0';
//        Reverse_Str(str + 1);
//        right--;
//        left++;
//    }
//}

// ����������������ʾ��(���ǲ���)

//void Reverse_Str(char* str) {
//    char* left = str;
//    char* right = str;
//
//    // ��rightָ��ָ���ַ�����β\0֮ǰ��
//    while ('\0' != *right) {
//        right++;
//    }
//    right--;
//
//    // ����left��rightָ����ַ����ݣ��ݹ��޶���������ָ��С����ָ�룬
//    // �ӽ��޶�������ָ���ƶ�
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//
//    }
//    
//}

// ���𰸺������

int My_Strlen(char str[]) {
    char* mask = str;
    //���д��'\0' != *mask
    // �Ż������д�ɣ�if(*mask)
    if (*mask != '\0') {
        return 1 + My_Strlen(mask + 1);
    }
    else {
        return 0;
    }
    // ���˾��ô���else��������
}

void Reverse_Str(char* str) {
    
    // �ڵݹ�֮ǰ�Ĵ��붼���������ģ�����ÿ�� �� ����������ʼ����
    // ��ִ��if (My_Strlen(str + 1) > 1)֮ǰ�Ĵ��룬
    // ֮��Ĵ����� �� ��������ݾͷ��ص����ʱ�᷵��ִ��  ������������������������������������
    int len = My_Strlen(str);

    // ��һ�β��ֽ���
    *str = *(str + len - 1);

    // ��*(str + len - 1)������Ϊ'\0'�������ݹ�Ļ���
    // str+1����һ����֮ǰһģһ�����ַ�������'\0'��β��
    *(str + len - 1) = '\0';

    // ��ʣ����ַ������ȴ���1�٣��ݹ飬���򲻱�
    if (My_Strlen(str + 1) > 1) {
        Reverse_Str(str + 1);
    }
    else {
        ;
    }

    // ��ɵ�һ�����н���
}

int main()
{
    char str[20] = "";
    scanf("%s", str);
    Reverse_Str(str);
    printf("%s\n", str);

    return 0;
}


//δʹ�õݹ鷽ʽ��
//void reverse_string(char* arr) {
//    int left = 0;                //Ҳ������ָ��
//    int right = My_Strlen(arr) - 1;
//    while (left < right) {
//        char mask = arr[left]; 
//        arr[left] = arr[right];
//        arr[right] = mask;
//        left++;
//        right--;
//    }
//}