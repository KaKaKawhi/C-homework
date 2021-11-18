#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int n = 0;
    while (1) {   //c标准库没有true false 只有01
        scanf("%d", &n);//错误，通过不了oj  
                        //可以写成while(scanf("%d", &n) != EOF)   end of file
                        //相当于while(~scanf("%d", &n))
        if (n % 2 == 0) {
            printf("Even\n");
            break;
        }
        else {  //n % 2只可能为0 或 1
            printf("Odd\n");
            break;
        }
    }

    //oj需要多组输入，需要循环
    return 0;
}

