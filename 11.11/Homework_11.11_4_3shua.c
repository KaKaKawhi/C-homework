#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

// ���˷����ƶ�1
void Print_Odd(int n) {
    // i����1���Ƶ�λ��
    int i = 0;
    for(i = 30; i >= 0; i -= 2){
    // for (i = 0; i <= 30; i += 2) {���󣡣���Ӧ�ôӸ�λ��ʼ��ӡ
        // ʵ��Ϊif(1 == (n & (1 << i)))
        if (n & (1 << i)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}

void Print_Even(int n) {
    // i����1���Ƶ�λ��
    int i = 0;
    for(i = 31; i >= 1; i -= 2){
    // for (i = 1; i <= 31; i += 2) {���󣡣���Ӧ�ôӸ�λ��ʼ��ӡ
        // ʵ��Ϊif(1 == (n & (1 << i)))
        if (n & (1 << i)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}

int main() {

    int n = 0;
    scanf("%d", &n);
    Print_Odd(n);
    printf("\n------------------------------------\n");
    Print_Even(n);
    
	return 0;
}


// �𰸷����ƶ�n
/*
˼·��
1. ��ȡ���е�����λ�������λ��1�����1����0�����0
2. ��ͬ���ķ�ʽ��ȡż��λ��


 ���num��ĳһλ��0����1�ķ�ʽ��
   1. ��num�����ƶ�iλ
   2. ������λ֮��Ľ����1��λ�룬�����
      �����0�����i������λ��0
      ����Ƿ�0�����i������λ��1
*/
void Printbit(int num)
{
    for (int i = 31; i >= 1; i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    printf("\n");

    for (int i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    printf("\n");
}