#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

//输入描述：
//第一行包含两个整数n和m，表示一个矩阵包含n行m列，用空格分隔。(1≤n≤10, 1≤m≤10)
//从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
//输出描述：
//输出m行n列，为矩阵转置后的结果。每个数后面有一个空格
//输入：
//2 3
//1 2 3
//4 5 6
//输出：
//1 4
//2 5
//3 6

int main() {

    int m = 0;
    int n = 0;
    scanf("%d %d", &n, &m);
    int arr[10][10] = { 0 };  //不能用变量定义数组，如果编译器支持C99标准，可使用
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }
    //转置
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {   //行列交换
            printf("%d ", arr[j][i]);  //行列交换，先打印之前输入数组的第一列
        }
        printf("\n");
    }

    return 0;
}