#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//
//    int n = 0;
//    while (~scanf("%d", &n)) {
//        // 控制行数
//        int i = 0;
//        // 控制每行的打印
//        int j = 0;
//        // 直接将第一行的一个*打印了
//        printf("*\n");
//        // 从第二行开始打印
//        for (i = 2; i <= n; i++) {
//            for (j = 1; j <= i - 1; j++) {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//    }
//
//    return 0;
//}

//他人：
//int main()
//{
//    int num;
//    while (scanf("%d", &num) != EOF)
//    {
//        int i, j;//不好
//        for (i = 0; i < num; i++)//行数
//        {
//            for (j = i; j > 0; j--)//每行前的空格
//            {
//                printf(" ");
//            }
//            printf("*\n");
//        }
//
//    }
//}

// 思考后优化：
int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        // 控制行数
        int i = 0;
        // 控制每行的打印
        int j = 0;

        // 直接将第一行的一个*打印了        不需要！！！
        //printf("*\n");
       
        // 从第1行开始打印
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i - 1; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}