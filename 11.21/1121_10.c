#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <assert.h>

// ��������ʹ����ȫ����λ��ż��ǰ�档
// ��Ŀ��
// ����һ���������飬ʵ��һ��������
// �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
// ����ż��λ������ĺ�벿�֡�

// ˼·���ȼ�¼int*leftָ�������һ��Ԫ�ص�λ�ã�int*rightָ���������һ��Ԫ�ص�λ�ã�
// left�������һ��Ԫ�ؿ�ʼ������ң�ÿ�ҵ�һ��ż����ֹͣ��
// right���������һ��Ԫ�ؿ�ʼ����ǰ�ң�ÿ�ҵ�һ��������ֹͣ��
// Ȼ��*right��*left����,Ȼ������� 
// ѭ��������left<right
void adjust_arr(int* arr, int len) {
    int* left = arr;
    int* right = arr + (len - 1);
    while (left < right) {
        while (left < right && (*left % 2 != 0)) {  //������������ӣ������ջ���
            left++;
        }
        while (left < right && (*right % 2 == 0)) {//������������ӣ������ջ���
            right--;
        }
        if (left < right) {//������������ӣ������ջ���
            int tmp = *right;
            *right = *left;
            *left = tmp;
        }  
    }
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    //for (i = 0; i < len; i++) {
    //    scanf("%d", &arr[i]);  //ÿ����һ�������س���ʹ��scanf��ȡ��arr��i����ȥ
    //}
    adjust_arr(arr, len);
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

