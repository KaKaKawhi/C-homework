#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I
//����������ÿ�������������1������������ I like beijing. �����������Ȳ�����100
//��������������������֮����ַ���,�Կո�ָ�
//���룺
//I like beijing.
//�����
//beijing. like I

void TitleReverse(char* left, char* right) {
    assert(left && right);
    while (left < right) {
        char tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

//�ɻ�ͼ���
void SingleReverse(char* arr) {
    char* start = arr;
    char* end = arr;
    while ((*end) != '\0') {
        while ((*end != ' ') && (*end != '\0')) {  //���һ��Ԫ�غ�����'\0'Ϊ����
            end++;
        }
        TitleReverse(start, end - 1);
        
        if (*end != '\0') {  
            end++;
        }
        start = end;
        //Ҳ����
        /*if (*end == '\0') {
            start = end;
        }
        else {
            start = end + 1;
        }
        end = start;*/
    }

}

int main() {

    char arr[100] = "";
    gets(arr);  //ע�ⲻ��ʹ��scanf��scanf�����ո�һ��������վͽ�����
    //gets()������STDIN(��׼����)��ȡ�ַ��������Ǽ��ص�str(�ַ���)��,
    //ֱ����������(\n)�򵽴�EOF. �����ַ�����Ϊһ��null�жϷ�. 
    //gets()�ķ���ֵ�Ƕ�����ַ���,������󷵻�NULL.

    //˼·�������嵹�ã����Կո�Ϊ�ֽ磬ÿ���ַ����������ü��ɴﵽЧ��
    int len = strlen(arr);
    TitleReverse(arr, arr + len - 1);  //��������������������������Ϊ�����ڵ����ַ�����Ҳ������
    SingleReverse(arr);
    // �����������ٷָ�������ȷָ�������ͬ��
    printf("%s\n", arr);

    return 0;
}