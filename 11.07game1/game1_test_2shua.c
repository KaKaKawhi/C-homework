#define _CRT_SECURE_NO_WARNINGS 1

#include "game1_game_2shua.h"

// 三子棋

void Game(void) {

    // 用头文件的宏定义来确定棋盘大小
    char board[ROW][LINE] = {0};

    // 初始化棋盘，放在循环外
    Init(board);

    // 游戏过程放在死循环，用break跳出
    while (1) {

        // 打印棋盘
        //Print(board);
        
        //玩家下棋
        printf("玩家下棋：\n");
        Player(board);

        // 打印棋盘
        Print(board);
        
        // 判定棋局
        char ret = Judge(board);
        if ('*' == ret) {
            printf("游戏结束，玩家胜利！\n");
            break;
        }
        else if ('#' == ret) {
            printf("游戏结束，电脑胜利！\n");
            break;
        }
        else if('=' == ret) {
            printf("游戏结束，平局！\n");
            break;
        }
        else {
            printf("游戏继续！\n");
        }
        
        printf("\n------------------------\n");
        // 电脑下棋
        printf("电脑下棋：\n");
        Robot(board);

        // 打印棋盘
        Print(board);

        // 判定棋局
        ret = Judge(board);
        if ('*' == ret) {
            printf("游戏结束，玩家胜利！\n");
            break;
        }
        else if ('#' == ret) {
            printf("游戏结束，电脑胜利！\n");
            break;
        }
        else if ('=' == ret) {
            printf("游戏结束，平局！\n");
            break;
        }
        else {
            printf("游戏继续！\n");
        }

        printf("\n------------------------\n");
    }

}

int main() {

    srand(time(NULL));
    // 首先根据用户需要来决定是否要玩游戏或结束，且将用户的输入作为循环条件，0表示结束可以直接退出循环
    int input = 0;
    do {
        printf("请问您是否继续开始游戏（0结束/1开始）\n");
        scanf("%d", &input);
        
        // switch分支来根据用户输入判别
        switch (input)
        {
        case 1:
            Game();
            break;
        case 0:
            printf("已退出\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }

    } while (input);


    return 0;
}