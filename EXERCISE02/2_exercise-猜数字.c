#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 二刷：
// 猜数字

// 构思：通过死循环do while(res)实现运作，res为用户进行菜单选择，如果选择0为退出，
// 正好循环条件就也得到控制退出，首先打印菜单，然后通过switch分支实现输入1表示开始游戏
// 进入游戏函数，输入0表示（也为循环条件变量正好可以退出）结束，输入其他提示输入错误，
// 继续输入

// 对于游戏函数，无须返回值，首先创建一个随机数，然后再构建一个循环，在循环内玩家输入数字，
// 然后和随机数相比，提示过小或过大，否则当二者相同的时候，打印输入成功，退出循环

void menu(void) {
    printf("---------------------------\n");
    printf("---------------------------\n");
    printf("---请输入：1开始，0退出----\n");
    printf("---------------------------\n");
    printf("---------------------------\n");
}

void gamee(void) {
    //int RandNum = rand() % 100;         错误，我写的是小于100的数字，不包括100
    // 小于等于100的数字
    int RandNum = rand() % 100 + 1;
    int num = 0;
    while (1) {
        printf("请输入您要猜的数字\n");
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

    //srand(time(NULL));          可优化
    srand((unsigned)time(NULL));
    int res = 0;
    do {
        menu();
        printf("请输入：\n");
        scanf("%d", &res);
        switch (res) {
        case 1:
            gamee();
            break;
        case 0:
            printf("已退出\n");
            break;
        default:
            printf("输入错误，请继续输入\n");
            break;
        }
    } while (res);

    return 0;
}