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

//�𰸣�������
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;  //��ͷ�ļ�
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;      //��֪��Ϊɶǰ��++��Ӧ��Ч��һ�������ĺ���
//        --right;
//    }
//}

int main() {

    char arr[] = "abcdef";  //���Ҫ�ֶ�����Ҫ��gets��������Ϊ�����Ҫ���ַ����пո�scanf�����ո��ֹͣ
    int length = sizeof(arr) / sizeof(arr[0]);  //���Ԫ�ظ���������\0 
    reverse(arr,length);  //Ҳ���Բ��ô���length����strlen����

    return 0;
}

// ע�⣺���������OJʱ������Ҫ����ѭ�����룬��Ϊÿ���㷨�����ж����������������֤���ο�����main����д����
//int main()
//{
//    char str[101] = { 0 };
//    while (gets(str))
//    {
//        Reverse(str);
//        printf("%s\n", str);
//        memset(str, 0, sizeof(str) / sizeof(str[0]));
//                  //#include <string.h>
//                  //void* memset(void* buffer, int ch, size_t count);
//                  //����: ��������ch ��buffer ��ͷ��ʼ��count ���ַ���, ������bufferָ�롣 
//                  //memset() ����Ӧ���ڽ�һ���ڴ��ʼ��Ϊĳ��ֵ�����磺
//                  //memset(the_array, '\0', sizeof(the_array));
//                  //���ǽ�һ����������Է������ó���ĺܱ�ݵķ�����
//    }
//    return 0;
//}
