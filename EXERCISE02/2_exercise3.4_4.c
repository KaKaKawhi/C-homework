#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>

//��д������ʾ����ַ��������ƶ������м��ۣ�����
//############
//h##########!
//he########!!
//...
//hello world!

int main() {

    char arr1[] = "############";
    char arr2[] = "hello world!";

    int left = 0;
    int right = strlen(arr1) - 1;
    printf("%s\n", arr1);
    while (left <= right) {  //���ںŲ��ܶ�����Ϊ���ܶ������ָ��һ��
        arr1[left] = arr2[left];
        arr1[right] = arr2[right];
        printf("%s\n", arr1);
        Sleep(1000);
        system("cls");//ִ��ϵͳ��������ʹ����һ���ڱ仯
        left++;
        right--;
        
    }

    return 0;
}


// ��ˢ��һ����ȫû˼·
//int main() {
//
//    char ch[] = "***********";
//    char* l = ch;
//    char* r = ch + strlen(ch);
//
//    return 0;
//}

// ����һ�ߴ𰸣�����˼·д��
// �������ַ����ֱ�Ϊ"************"��"hello world!"����ʾ��ʼ�����
// Ȼ��ͨ�������±�(ָ�벻���ã�������±꣬�����ַ��������ͨ��)���ֱ�ָ����ʼ�ͽ�β��
// �ȴ�ӡ��ʼ�ַ�����Ȼ��ͨ����βָ�뽫2�ַ�������β��ֵ��1�ַ������ٴ�ӡ1�ַ�����
// ��βָ���ƶ��ظ�������ֱ��ָ������

int main() {

    char start[] = "************";
    char end[] = "hello world!";
    char left = 0;
    char right = strlen(start) - 1;
    // left == right ʱҲҪ��ӡ����������ӡ
    while (left <= right) {
        printf("%s\n", start);
        start[left] = end[left];
        start[right] = end[right];
        printf("%s\n", start);
        left++;
        right--;
    }

    return 0;
}