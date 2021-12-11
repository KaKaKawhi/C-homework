#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>

//猜数字，循环玩，1继续，0退出，大了小了提醒

void meun() {
    printf("--------------------\n");
    printf("--------------------\n");
    printf("请输入数字（1继续0退出）\n");
    printf("--------------------\n");
    printf("--------------------\n");
}
void game()
{
    //1.生成随机数（随机数的生成必须在循环外，否则你输入一次，随机数改变一次）
    int ret = rand() % 100 + 1;//任何一个数字%100，结果为1-99
    int num = 0;
    //2.猜数字
    while (1)
    {
        printf("请猜数字:>");
        scanf("%d", &num);
        if (num == ret)
        {
            printf("恭喜你，猜对了\n");
            break;                      //猜对就break
        }
        else if (num > ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("猜小了\n");
        }
    }
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));//调用rand函数前先生成随机生成器，srand里必须变化才能使得它生成随机数
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    } while (input);//while 里写input，当它为零时，就不再玩游戏，退出循环
    return 0;
}


//简洁版
    //meun();
    //int num = 99;
    //int user = 0;
    //int count = 0;//计数
    //while ((scanf("%d", &user)) != EOF) {    
    //    count++;
    //    if (num == user) {
    //        printf("猜对啦");
    //    }
    //    else if(user > num){
    //        printf("大了");
    //    }
    //    else {
    //        printf("小了");
    //    }
    //}