#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

// ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ��������У����������ӡ��
// Ҫ�󣺲���ʹ��C�������е��ַ�������������

//δʹ�õݹ鷽ʽ��
//void reverse_string(char* arr) {
//    int left = 0;                //Ҳ������ָ��
//    int right = strlen(arr) - 1;
//    while (left < right) {
//        char mask = arr[left]; 
//        arr[left] = arr[right];
//        arr[right] = mask;
//        left++;
//        right--;
//    }
//}

int my_strlen(char* arr) { //ʹ���Լ�д�����ַ������Ⱥ���
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }
    return count;
}

//ʹ�õݹ�ʵ���ַ�������
void reverse_string(char* arr) {
    // ���ᣡ-------->
    // ���ȣ��������abcde���൱������a��eȻ������bcd�����ǣ������Ļ���
    // \0��������޷�����Ϊ������־��bcde�޷�����һ���ַ����ˣ�
    // �����Ƚ�aȡ��tmp�У�Ȼ��e����aλ�ã�Ȼ��\0����e��λ�ã�Ȼ��ݹ鴫��
    // b�ĵ�ַ�������´η����ͻ���"bcde"�����ú���
    // ���ϵݹ����������Ϊʣ�µ�Ԫ�ظ�������2�����б�Ҫ����
        //����д������������һ�ε���һ�Σ���Ϊ֮��str�ĳ����Ѿ������仯��
        int len = my_strlen(arr);
        char tmp = *arr;
        *arr = *(arr + len - 1);
        *(arr + len - 1) = '\0';
        if (my_strlen(arr + 1) >= 2) {    //ʣ�µ�Ԫ�ظ�������2�����б�Ҫ����
            reverse_string(arr + 1);
        }
        *(arr + len - 1) = tmp;            //�ݹ������Ű�a����e��λ���ϣ�ʵ�ֽ���

}

int main()
{
    char arr[20] = ""; //����Ҫ��ʼ��20���������л��������
    scanf("%s", &arr);
    reverse_string(arr);
    printf("%s\n", arr);

    return 0;
}

