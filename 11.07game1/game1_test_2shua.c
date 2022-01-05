#define _CRT_SECURE_NO_WARNINGS 1

#include "game1_game_2shua.h"

// ������

void Game(void) {

    // ��ͷ�ļ��ĺ궨����ȷ�����̴�С
    char board[ROW][LINE] = {0};

    // ��ʼ�����̣�����ѭ����
    Init(board);

    // ��Ϸ���̷�����ѭ������break����
    while (1) {

        // ��ӡ����
        //Print(board);
        
        //�������
        printf("������壺\n");
        Player(board);

        // ��ӡ����
        Print(board);
        
        // �ж����
        char ret = Judge(board);
        if ('*' == ret) {
            printf("��Ϸ���������ʤ����\n");
            break;
        }
        else if ('#' == ret) {
            printf("��Ϸ����������ʤ����\n");
            break;
        }
        else if('=' == ret) {
            printf("��Ϸ������ƽ�֣�\n");
            break;
        }
        else {
            printf("��Ϸ������\n");
        }
        
        printf("\n------------------------\n");
        // ��������
        printf("�������壺\n");
        Robot(board);

        // ��ӡ����
        Print(board);

        // �ж����
        ret = Judge(board);
        if ('*' == ret) {
            printf("��Ϸ���������ʤ����\n");
            break;
        }
        else if ('#' == ret) {
            printf("��Ϸ����������ʤ����\n");
            break;
        }
        else if ('=' == ret) {
            printf("��Ϸ������ƽ�֣�\n");
            break;
        }
        else {
            printf("��Ϸ������\n");
        }

        printf("\n------------------------\n");
    }

}

int main() {

    srand(time(NULL));
    // ���ȸ����û���Ҫ�������Ƿ�Ҫ����Ϸ��������ҽ��û���������Ϊѭ��������0��ʾ��������ֱ���˳�ѭ��
    int input = 0;
    do {
        printf("�������Ƿ������ʼ��Ϸ��0����/1��ʼ��\n");
        scanf("%d", &input);
        
        // switch��֧�������û������б�
        switch (input)
        {
        case 1:
            Game();
            break;
        case 0:
            printf("���˳�\n");
            break;
        default:
            printf("�����������������\n");
            break;
        }

    } while (input);


    return 0;
}