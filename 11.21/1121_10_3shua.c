#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����һ���������飬ʵ��һ��������
// �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
// ����ż��λ������ĺ�벿�֡�

void Adjust(int arr[], int len) 
{
    // ˼����ͨ������ʵ�֣�һ��ָ���ǰ���һ���Ӻ���ǰ��
    // ����ָ������ż��ֹͣ����ָ����������ֹͣ��������ֱ����������
    int* left = arr;
    int* right = arr + len - 1;
    while (left < right) {
        //������������ӣ�����ȫΪ����������ʱ�������Խ�����⣬һֱ���ҵ�ż���Ż�ͣ����
        if ((0 != ((*left) % 2)) && (left < right)) {
            left++;
        }
        //������������ӣ�����ȫΪ����������ʱ�������Խ�����⣬һֱ���ҵ�ż���Ż�ͣ����
        if ((0 == ((*right) % 2)) && (left < right)) {
            right--;
        }
        // �������Ԫ������ʱ�������ǰ��ż������������
        // ��ָ���Ի����ƣ���ָ��ͬ�����߽��棬���������
        // ����ÿ�ζ���Ҫ��֤left<right
        if (left < right) {
            int tmp = *left;
            *left = *right;
            *right = tmp;
        }
    }
}

int main()
{ 
    int arr[] = { 0, 1, 2, 3, 4, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Adjust(arr, len);
    int i = 0;
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}