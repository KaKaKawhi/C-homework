#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char Jud(char ch[3][3]) {
    // �ж���
    int j = 0;
    for (j = 0; j < 3; j++) {
        if (ch[0][j] == ch[1][j] && ch[1][j] == ch[2][j]) {
            // ����ʤ���ߵ���������
            return ch[0][j];
        }
    }
    // �ж���
    int i = 0;
    for (i = 0; i < 3; i++) {
        if (ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2]) {
            // ����ʤ���ߵ���������
            return ch[i][0];
        }
    }
    // �ж����Խ���
    if (ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2]) {
        // ����ʤ���ߵ���������
        return ch[1][1];
    }
    // �ж��ζԽ���
    if (ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0]) {
        // ����ʤ���ߵ���������
        return ch[1][1];
    }
    // ����Ŀǰû���˻�ʤ������-1
    return -1;
}


int main() {

    char ch[3][3] = { 0 };
    int i = 0;
    int j = 0;

    // ��������
    //for (i = 0; i < 3; i++) {
    //    scanf("%c %c %c", &ch[i][0], &ch[i][1], &ch[i][2]);
    //    // ÿ��������϶�Ҫ�س�ʹ�������ַ���%c %c %c��ʽ����scanf
    //    // ����ÿ��������һ�к󣬽�ʣ���\n������������
    //    getchar();
    //}
    // ��������汾��
    // ��������������⣩
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            ch[i][j] = scanf("%c", &ch[i][j]);
            getchar();
        }
    }
    // ��������汾��
    /*for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            ch[i][j] = getchar();
            getchar();
        }
    }*/

    // �ж�
    char ret = Jud(ch);
    if ('K' == ret) {
        printf("KiKi wins!\n");
    }
    else if ('B' == ret) {
        printf("BoBo wins!\n");
    }
    else {
        printf("No winner!\n");
    }

    return 0;
}