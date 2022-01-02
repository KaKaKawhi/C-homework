#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����ʵ����������������ֲ���

int Find_Num(int num, int len, int arr[]) {
    int left = 0;
    int right = len - 1;
    int mid = 0;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] > num) {
            right = mid - 1;
        }
        else if(arr[mid] < num){
            left = mid + 1;
        }
        else {
            break;
        }
    }
    // ��left <= right��˵����������ѭ��������left <= rightʱ
    // ����֮ǰleft < rightʱ��arr[mid]�Ѿ�����num�����Ѿ�break,
    // ֱ�ӷ���mid�����ҵ����ֵ��±ꡣ
    if (left <= right) {
        return mid;
    }
    // ����left > right��˵��������ѭ��������left <= rightʱ��
    // û�н���else��䣬���ǽ��뵽if��else if�У�����ִ��ʹ��
    // left > right��������һ����������ѭ�������ж���˵��δ�ҵ�����
    else {
        return -1;
    }
    //else ���Ÿ�����
}

int main()
{
    int arr[] = { 0, 1, 2, 3, 4 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    scanf("%d", &num);
    // ���շ���ֵ������ҵ�Ҳ���±꣬�Ҳ���Ϊ-1
    int ret = Find_Num(num, len, arr);
    if (-1 == ret) {
        printf("δ�ҵ�\n");
    }
    else {
        printf("���ҵ����±�Ϊ%d\n", ret);
    }

    return 0;
}