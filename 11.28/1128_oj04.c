#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() {
//
//    int n = 0;
//    while (scanf("%d", &n) != EOF) {
//        int i = 0;
//        // i控制行数
//        for (i = 1; i <= n; i++) {
//            // 打印空格
//            int space = n - i;
//            while (space) {
//                printf("  ");
//                space--;
//            }
//            // 打印*
//            // i不可以乱变动，用num代替i来更改
//            int num = i;
//            while (num) {
//                printf("* ");
//                num--;
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}

//优化：
int main() {

    int i = 0;
    int j = 0;
    int n = 0;
    while (~scanf("%d", &n)) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= (n - i); j++) {
                printf("  ");
            }
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

//二刷（好！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！）
int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        // 控制打印行数
        int i = 0;
        // 控制每行的打印
        int j = 0;
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n - i; j++) {  
                printf("  ");
            }
            for (j = 1; j <= i; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}

// 答案：
/*
int main()
{
    int n = 0;
    while(scanf("%d", &n) != EOF)
    {
        int i = 0;
        //行数控制
        for(i=0; i<n; i++)
        {
            //空格
            int j = 0;
            for(j=0; j<n-1-i; j++)  //和j<n-i-1同理
            {
                printf("  ");
            }
            //*
            for(j=0; j<=i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }
    return 0;
}


*/

//答案2
int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        int i = 0;
        int j = 0;
        //行数
        for (i = 0; i < n; i++)
        {
            //一行
            for (j = 0; j < n; j++)
            {
                //行和列的和
                //这里可以把行数和列数标出来就能看明白（好！！！！！！！！！！！！！！！！！！！！！！！！！
                if (i + j < n - 1)
                {
                    printf("  ");
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}