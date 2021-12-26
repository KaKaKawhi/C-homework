#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {

    int n = 0;
    int m = 0;
    // 起始给数组大小为行列n，m的上限数字，并赋值所有元素为0
    int arr[10][10] = { 0 };
    int k = 0;
    char t = 0;
    int a = 0;
    int b = 0;
    scanf("%d %d", &n, &m);
    
    // 输入数组元素
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &k);
    // 控制执行的操作数
    while (k) {
        // 回顾11.14-5代码
        // 吸收上一个scanf遗留在缓冲区的\n
        getchar();                             //!!!!!!!!!!第一次写没写的代码
        scanf("%c %d %d", &t, &a, &b);
        // -1得到下标
        a--;                                   //!!!!!!!!!!
        b--;                                   //!!!!!!!!!!
        
        // 用两个if控制规定的字符再操作，否则不管直接输出
        //if ('r' == t || 'c' == t) {
        if ('r' == t) {
            int j = 0;
            for (j = 0; j < m; j++) {
                int tmp = arr[a][j];
                arr[a][j] = arr[b][j];
                arr[b][j] = tmp;
            }
        }
        if ('c' == t) {
            int i = 0;
            for (i = 0; i < n; i++) {
                int tmp = arr[i][a];
                arr[i][a] = arr[i][b];
                arr[i][b] = tmp;
            }
        }
        //}
        k--;
    }

    // 输出最终的数组
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}


//(1) 输入 n m ，2维数组的范围
//(2) 输入 n行m列 数据
//(3) 输入 k ，接下来要进行 k 次操作
//(4) 输入 r(行变换)    c(列变换)    a,(b变换的行列)


//int main()
//{
//    int arr[10][10] = { 0 };
//
//    int i, j;
//    int n, m;
//    int a, b, k;
//    scanf("%d%d", &n, &m);
//
//    //(1)输入至数组
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//
//    //(2)进行 K 次交换 
//    scanf("%d", &k);
//    while (k)
//    {
//
//        //输入 ch , a , b  并取走缓冲区中的 '\n'！！！！！！！！！！！！！！！！！！！！！
//        char ch = 0;
//        getchar();
//        scanf("%c %d %d", &ch, &a, &b);
//
//        // -1 是下标
//        a = a - 1;
//        b = b - 1;
//
//        // r  = 行交换
//        int tmp = 0;
//        if (ch == 'r')
//        {
//            for (i = 0; i < m; i++)
//            {
//                tmp = arr[a][i];
//                arr[a][i] = arr[b][i];
//                arr[b][i] = tmp;
//            }
//        }
//
//        // c = 列交换
//        if (ch == 'c')
//        {
//            for (i = 0; i < n; i++)
//            {
//                tmp = arr[i][a];
//                arr[i][a] = arr[i][b];
//                arr[i][b] = tmp;
//            }
//        }
//        k--;
//    }
//
//    //(3)输出交换后的二维数组
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//
//    return 0;
//}