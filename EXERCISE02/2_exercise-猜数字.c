#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ��ˢ��
// ������

// ��˼��ͨ����ѭ��do while(res)ʵ��������resΪ�û����в˵�ѡ�����ѡ��0Ϊ�˳���
// ����ѭ��������Ҳ�õ������˳������ȴ�ӡ�˵���Ȼ��ͨ��switch��֧ʵ������1��ʾ��ʼ��Ϸ
// ������Ϸ����������0��ʾ��ҲΪѭ�������������ÿ����˳�������������������ʾ�������
// ��������

// ������Ϸ���������뷵��ֵ�����ȴ���һ���������Ȼ���ٹ���һ��ѭ������ѭ��������������֣�
// Ȼ����������ȣ���ʾ��С����󣬷��򵱶�����ͬ��ʱ�򣬴�ӡ����ɹ����˳�ѭ��

void menu(void) {
    printf("---------------------------\n");
    printf("---------------------------\n");
    printf("---�����룺1��ʼ��0�˳�----\n");
    printf("---------------------------\n");
    printf("---------------------------\n");
}

void gamee(void) {
    //int RandNum = rand() % 100;         ������д����С��100�����֣�������100
    // С�ڵ���100������
    int RandNum = rand() % 100 + 1;
    int num = 0;
    while (1) {
        printf("��������Ҫ�µ�����\n");
        scanf("%d", &num);
        if (num > RandNum) {
            printf("too big\n");
        }
        else if (num < RandNum) {
            printf("too small\n");
        }
        else {
            printf("bingo\n");
            break;
        }
    }
}

int main() {

    //srand(time(NULL));          ���Ż�
    srand((unsigned)time(NULL));
    int res = 0;
    do {
        menu();
        printf("�����룺\n");
        scanf("%d", &res);
        switch (res) {
        case 1:
            gamee();
            break;
        case 0:
            printf("���˳�\n");
            break;
        default:
            printf("����������������\n");
            break;
        }
    } while (res);

    return 0;
}