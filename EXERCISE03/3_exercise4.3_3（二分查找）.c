#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// д����,ʵ��һ��������������Ķ��ֲ���

int binary_search(int arr[],int n,int length) {
    int left = 0;
    int right = length - 1;
    int tmp = 0;
    while (left <= right) {
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }
        else if(arr[tmp] < n) {
            left = tmp + 1;
        }
        else {
            break;//�����У�����left=right������ѭ��
        }
    }
    if (left > right) {
        return -1;
    }
    else {
        return tmp;
    }
    //else ���Ÿ�����
}

int main()
{
    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);
    int ret = binary_search(arr,n,length);
    if (-1 == ret) {
        printf("δ�ҵ�����");
    }
    else {
        printf("�ҵ��������±�Ϊ%d\n",ret);
    }
    
    return 0;
}

