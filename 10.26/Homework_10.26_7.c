#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// ��д������һ���������������в��Ҿ����ĳ����
// Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

int find(int n, int arr[],int length) {  
    int left = 0;
    int right = length-1;
    int tmp = 0;
    // rightλ�������ݣ�����Ҫ��� = ��
    while (left <= right) {
        // ���м�λ�õķ�����ֱ����ӳ�2����������
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }else if(arr[tmp] < n) {
            left = tmp + 1;
        }
        else {
            break;      //����Ҫ�У�����left=right��������ѭ��
        }
    }
    if (left > right) {
        return -1;
    }
    else {
        return tmp;
    }
}

int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);//strlen�Ǽ����ַ������ȣ������ô˴�
    int index = 0;//��¼�±�
    index = find(n,arr,length);  
    if (index == -1) {
        printf("�Ҳ���");
    }
    else {
        printf("%d", index);
    }
    return 0;
}

