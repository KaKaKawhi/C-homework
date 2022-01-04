#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 理解复杂了的版本
void Ini_Ch(char ch[3][3]) {
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            ch[i][j] = 'O';
        }
    }
}

void Pri_Ch(char ch[3][3]) {
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%c ", ch[i][j]);
        }
        printf("\n");
    }
}

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
    // 初始化棋盘
    Ini_Ch(ch);
    // 下棋过程放入死循环，通过break跳出
    while (1) {
        // 打印棋盘
        Pri_Ch(ch);

        // kiki下棋
        int x = 0;
        int y = 0;
        scanf("%d %d", &x, &y);
        // 判定条件，合理范围加该位置没有下棋
        if (x >= 0 && x < 3 && y >= 0 && y < 3 && ('O' == ch[x][y])) {
            ch[x][y] = 'K';
        }
        // 打印棋局
        Pri_Ch(ch);
        // 判定输赢
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

        // bobo下棋
        scanf("%d %d", &x, &y);
        if (x >= 0 && x < 3 && y >= 0 && y < 3 && ('O' == ch[x][y])) {
            ch[x][y] = 'B';
        }
        // 打印棋局
        Pri_Ch(ch);
        // 判定输赢
        ret = Jud(ch);
        if ('K' == ret) {
            printf("KiKi wins!\n");
        }
        else if ('B' == ret) {
            printf("BoBo wins!\n");
        }
        else {
            printf("No winner!\n");
        }
    }

    return 0;
}