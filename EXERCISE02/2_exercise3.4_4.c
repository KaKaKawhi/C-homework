#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

//��д������ʾ����ַ��������ƶ������м��ۣ�����
//############
//h##########!
//he########!!
//...
//hello bit!!!

int main() {

    char arr1[] = "############";
    char arr2[] = "hello bit!!!";

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

