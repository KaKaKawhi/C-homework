#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

// 在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
//……

// 自己想的方法，难实现
//void printyh(int row) {
//    int arr[99][99] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < row; i++) {
//        for (j = 0; j <= i; i++) { //找到规律，行列的数目相同
//            arr[i][0] = 1;
//            arr[i][i] = 1;
//            int k = 0;
//            for (k = 0; k <= i; k++) {
//                printf("%d ", arr[i][k]);
//            }
//        }
//        printf("\n");
//    }
//}

void printyh(int row) {
    //方法一，用二维数组先整体构建再打印
    int arr[99][99] = { 1 }; //直接初始化第一行1
    //第一行全为1，直接跳过，第一列同理
    int i = 0;
    int j = 0;
    for (i = 1; i < row; i++) {  //直接从第2行开始
        arr[i][0] = arr[i][i] = 1;  //初始化首列为1,每行最后一个元素为1
        for (j = 1; j < i; j++) {  //直接处理从第2列开始到每行除去最后一个元素
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; 
        }
    }
    //打印：
    for (i = 0; i < row; i++) {
        for (j = 0; j <= i; j++) {  //打印的时候<=
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    //方法二，用一维数组构建一行打印一行
    //int arr[99] = { 1 }; //构建第一个元素为1的一维数组
    //printf("1\n"); //直接将第一行手动打印出来
    //int i = 0; //记录行号
    //for(i = 1; i < )
}

int main() {
    
    int row = 0;//行数
    scanf("%d", &row);
    printyh(row);

    return 0;
}
