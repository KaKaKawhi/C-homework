#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//模拟用户输入场景，只允许输入三次密码，如果密码正确则提示登陆成功，三次都错误则退出程序

void meun() {
    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n");
    printf("------请输入密码----\n");
    printf("--------------------\n");
    printf("--------------------\n");
    printf("--------------------\n");
}

int main() {

    meun();
    char secret[] = "123456";
    char input[10] = "";   //老师初始化""
    int count = 3;//计数
    while (count) {
        scanf("%s", input);//input不用取地址，他是数组名，本来就是地址
        if (strcmp(input, secret) == 0) {  //比较字符串相同不能用==
            printf("登陆成功\n");
            break;          //登陆成功不需要再执行了
        }
        else {
            printf("密码错误\n");
        }
        count--;
    }
    if (0 == count) {
         printf("三次密码都错误，退出程序\n");  //退出程序打印出来即可,因为下一步就是return 0
    }

    return 0;
}



// 模拟用户登陆情景，并且只能登陆三次（只允许输入三次密码，
// 如果密码正确则提示登录成功，如果三次均错误，则退出程序）
// 二刷
 
int main() {

    char str[20] = { 0 };  //这个初始化可以初始化为""（空字符串）
    char pass[] = "abc123456";
    int count = 3;
    // 判断登陆成功指标
    int index = 0;
    int i = 0;
    for (i = 0; i < count; i++) {
        printf("请输入密码\n");
        scanf("%s", str);
        if (0 == strcmp(str, pass)) {
            printf("登录成功\n");
            index = 1;
            break;
        }
        else {
            printf("输入错误，请重新输入\n");
        }
    }
    if (0 == index) {
        printf("登录失败\n");
    }

    return 0;
}