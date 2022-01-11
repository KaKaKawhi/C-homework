#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// �����������ַ���

// ���嵹��
//void Re_Str(char str[]) 
//{
//    // ˼������������ָ�룬��������ָ����ʵ�ֵ��ã�ֱ������ָ������
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}

// �Ż�1��
// ���嵹��
//void Re_Str(char str[])
//{
//    assert(str);   //��ֹ��ָ��
//    // ˼������������ָ�룬��������ָ����ʵ�ֵ��ã�ֱ������ָ������
//    char* left = str;
//    char* right = str + strlen(str) - 1;
//    while (left < right) {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}

// �Ż�2��
// �޸ĵ��ú�����ʹ������ظ�ʹ��
void Re_Str(char* left, char* right)
{
    // ˼������������ָ����ʵ�ֵ��ã�ֱ������ָ������
    assert(left && right);   //��ֹ��ָ��
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

// (д��)
//void Re_Single(char str[])
//{
//    // ˼������������ָ�룬������ÿ��ָ�򵥸��ַ�����Ȼ���ã�
//    // Ϊ�˿���ֱ����֮ǰ�ĵ����ַ�����������֮ǰ�ĺ���������Ϊ����ָ��
//    char* left = str;
//    char* right = str;
//    while (1) {
//        while ((' ' != right) && ('\0' != right)) {
//            right++;
//        }
//        if ('\0' == right) {
//            break;
//        }
//        // ��rightָ��ո�֮ǰ��'\0'֮ǰ��λ��
//        right--;
//        Re_Str(left, right);
//        left = right;
//    }
//
//}

// ������(һ��ҪС��ָ���Ƿ�������ã���������������)
void Re_Single(char str[])
{
    // ˼������������ָ�룬������ÿ��ָ�򵥸��ַ�����Ȼ���ã�
    // Ϊ�˿���ֱ����֮ǰ�ĵ����ַ�����������֮ǰ�ĺ���������Ϊ����ָ��
    char* left = str;
    char* right = str;
    // ѭ������������֮ǰд�Ĵ���
    while (1) {
        while ((*right != ' ') && (*right != '\0')) {
            right++;
        }
        Re_Str(left, right - 1);
        if ('\0' == *right) {
            return;
        }
        else {
            right++;
            left = right;
        }  
    }
}


//int main()
//{ 
//    char str[20] = { 0 };
//    // Ϊ�˿��Զ���ո���gets()����gets()�Ὣ�����ʱ����Ļ��з�����
//    gets(str);
//    // �����嵹��
//    Re_Allstr(str);
//    // ������Կո�Ϊ�ָ����ַ�������
//    Re_str(str);
//    printf("%s\n", str);
//
//    return 0;
//}

// ��Ӧ�Ż�3��
int main()
{
    char str[20] = { 0 };
    // Ϊ�˿��Զ���ո���gets()����gets()�Ὣ�����ʱ����Ļ��з�����
    gets(str);
    char* left = str;
    char* right = str + strlen(str) - 1;  
    // �����嵹��
    Re_Str(left, right);
    // ������Կո�Ϊ�ָ����ַ�������
    Re_Single(str);
    printf("%s\n", str);

    return 0;
}