#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int n = 0;
    while (1) {   //c标准库没有true false 只有01
        scanf("%d", &n);//错误，通过不了oj  
                        //可以写成while(scanf("%d", &n) != EOF)   end of file
                        //相当于while(~scanf("%d", &n))
        if (n % 2 == 0) {
            printf("Even\n");  //oj小心，必须加换行才格式一样
            //break;    不需要break，条件分叉，执行了这个就不执行另外一个，就结束了
        }
        else {  //n % 2只可能为0 或 1!!!!!!!!!!!!!!!!!!!!!!!
            printf("Odd\n");    //oj小心，必须加换行才格式一样
            //break;     同上
        }
    }

    //oj需要多组输入，需要循环
    return 0;
}


//oj
//#include <stdio.h>
//
//int main() {
//
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF) {
//        if (n % 2 == 0) {
//            printf("Even\n");
//        }
//        else {
//            printf("Odd\n");
//        }
//    }
//
//    return 0;
//}


// oj优化
#include <stdio.h>

int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        if (n % 2) {
            printf("Odd\n");
        }
        else {
            printf("Even\n");
        }
    }

    return 0;
}