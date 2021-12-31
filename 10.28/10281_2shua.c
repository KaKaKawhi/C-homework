#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 猜数字实现

void meun1() {
    // 记得换行符
    printf("-------------\n");
    printf("---1  继续---\n");
    printf("---0  退出---\n");
    printf("-------------\n");
    printf("-------------\n");

}

void game1() {

    // 产生的随机数应该放在循环外面，如果放循环里，每次执行循环这个要猜的数都变一次
    // RAND_MAX-32767
    // 1.生成随机数
    // 讲解rand函数
    int num = rand() % 100 + 1; //1-99                           //忘记！！！！！！
    int user = 0;
    do {
        printf("请输入您猜的数字\n");//换行更加清晰！！！
        scanf("%d", &user);
        if (user == num) {
            printf("bingo\n");//换行更加清晰！！！
            //猜对就break
            break;
        }
        if (user != num) {
            if (user > num) {
                printf("too big\n");//换行更加清晰！！！
            }
            else {
                printf("too small\n");//换行更加清晰！！！
            }
        }
        
    } while (1);
}

int main() {

    // 调用rand函数前先生成随机生成器，srand里必须变化才能使得它生成随机数
    srand((unsigned int)time(NULL));                              //！！！！！！忘记
    int n = 0;
    // 整体放在循环里，根据用户的输入来决定是否再继续
    // dowhile表示至少会打印一次菜单，用户会输入一次
    do{
        // 打印菜单
        meun1();
        // 用户输入开始或结束游戏
        scanf("%d", &n);
        // 用分支来根据用户输入来决定是否继续
        switch (n) {
        case 1:
            //在游戏里，再生成随机数，通过循环让用户输入，直到猜对   //！！！刚开始这两个数字不清晰在哪里输入
            game1();
            break;
        case 0:
            // n也是循环的判断条件，为0代表假，不进入下次循环
            printf("已退出");
            break;
        default:
            printf("输入错误，请重新输入");
            break;
        }
    // 根据n来判断循环是否进行下去
    } while (n);

    return 0;
}


//简洁版：
//int main() {
//
//    int num = 188;
//    int user = 0;
//    while (scanf("%d", &user) != EOF) {
//        if (user == num) {
//            printf("bingo\n");
//        }
//        else if(user > num) {
//            printf("too big\n");
//        }
//        else {
//            printf("too small\n");
//        }
//    }
//
//    return 0;
//}