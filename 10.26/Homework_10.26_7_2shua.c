#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int find(int n, int arr[], int length) {
    int left = 0;
    int right = length - 1;
    int tmp = 0;
    int index = -1;
    // rightλ�������ݣ�����Ҫ���=��
    while (left <= right) {
        // ���м�λ�õķ�����ֱ����ӳ�2����������
        tmp = left + (right - left) / 2;
        if (arr[tmp] > n) {
            right = tmp - 1;
        }
        if (arr[tmp] < n) {
            left = tmp + 1;
        }
        if(arr[tmp] == n){
            index = tmp;
            break;      //����Ҫ�У�����left=right��������ѭ��
        }
    }
    return index;
}

int main() {

    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
    int n = 0;
    scanf("%d", &n);
    int length = sizeof(arr) / sizeof(arr[0]);
    int index = find(n, arr, length);
    if (index == -1) {
        printf("�Ҳ���\n");
    }
    else {
        printf("���ҵ����������±�Ϊ%d\n", index);
    }

    return 0;
}


