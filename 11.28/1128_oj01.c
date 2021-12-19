#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//输入描述：
//多组输入，一个整数（3~20），表示输出的行数，也表示组成三角形边的“ * ”的数量。
//输出描述：
//针对每行输入，输出用“ * ”组成的“空心”三角形，每个“ * ”后面有一个空格。

int main() {

    int n = 0;
    while (scanf("%d", &n) != EOF) {
        if (n >= 3 && n <= 20) {
            //思路：先打印实心三角形
            //int i = 0;
            //for (i = 1; i <= n; i++) {
            //    int mask = i;//代替i去变化，且每轮重新定义
            //    while (mask) {
            //        printf("* ");
            //        mask--;
            //    }
            //    printf("\n");
            //}
            //思路：再转化为打印空心三角形
            int i = 0;
            //控制行数
            for (i = 1; i <= n - 1; i++) {
                //打印每行的第一个元素都为*
                printf("* ");
                //控制每一行的打印，从当n-1 >= 3，第三行开始才有空心一说
                if (i >= 3) {
                    int mask = i - 2;//代替i去改变
                    while (mask) {
                        printf("  ");
                        mask--;
                    }
                }
                //第二行开始才有两个*
                if (i >= 2) {
                    printf("*");
                }
                printf("\n");
            }
            //最后一行（第n行单独打印）
            for (i = 1; i < n; i++) {
                printf("* ");
            }
            printf("*\n");
        }
    }

    return 0;
}

//答案方法：
int main() {
    
    int n = 0;
    while (scanf("%d", &n) != EOF) {
        if (n >= 3 && n <= 20) {
            int i = 0;
            //控制行
            for (i = 1; i <= n; i++) {
                //控制列
                int j = 0;
                for (j = 1; j <= n; j++) {
                    //找出应该打印*的位置
                    if (j == 1 || i == n || j == i) {
                        printf("* ");
                    }
                    else {
                        //由图得应该打印两个空格
                        printf("  ");
                    }
                }
                printf("\n");
            }
        }
    }


    return 0;
}

//二刷
#include <stdio.h>

int main() {

    // 多组输入
    int n = 0;
    while (~scanf("%d", &n)) {
        // 先打印实心的
        // 控制行数
        int i = 0;
        // 控制每行的打印
        int j = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                //printf("* ");//实心
                //转化为打印空心,j <= i变为i-1
                if (i < n) {
                    if ((j == 1) || (j == i)) {
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
                else {
                    printf("* ");  //可以和上面的打印* 用||结合起来
                }

            }
            printf("\n");
        }
    }

    return 0;
}