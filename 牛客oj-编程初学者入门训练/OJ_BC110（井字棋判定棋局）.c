#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char Jud(char ch[3][3]) {
    // 判定行
    int j = 0;
    for (j = 0; j < 3; j++) {
        if (ch[0][j] == ch[1][j] && ch[1][j] == ch[2][j]) {
            // 返回胜利者的棋子类型
            return ch[0][j];
        }
    }
    // 判定列
    int i = 0;
    for (i = 0; i < 3; i++) {
        if (ch[i][0] == ch[i][1] && ch[i][1] == ch[i][2]) {
            // 返回胜利者的棋子类型
            return ch[i][0];
        }
    }
    // 判定主对角线
    if (ch[0][0] == ch[1][1] && ch[1][1] == ch[2][2]) {
        // 返回胜利者的棋子类型
        return ch[1][1];
    }
    // 判定次对角线
    if (ch[0][2] == ch[1][1] && ch[1][1] == ch[2][0]) {
        // 返回胜利者的棋子类型
        return ch[1][1];
    }
    // 否则目前没有人获胜，返回-1
    return -1;
}


int main() {

    char ch[3][3] = { 0 };
    int i = 0;
    int j = 0;

    // 输入棋盘
    //for (i = 0; i < 3; i++) {
    //    scanf("%c %c %c", &ch[i][0], &ch[i][1], &ch[i][2]);
    //    // 每行输入完毕都要回车使得三个字符按%c %c %c格式导入scanf
    //    // 所以每次输入完一行后，将剩余的\n清理！！！！！
    //    getchar();
    //}
    // 他人输入版本①
    // （这个可能最好理解）
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            ch[i][j] = scanf("%c", &ch[i][j]);
            getchar();
        }
    }
    // 他人输入版本②
    /*for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
        {
            ch[i][j] = getchar();
            getchar();
        }
    }*/

    // 判定
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