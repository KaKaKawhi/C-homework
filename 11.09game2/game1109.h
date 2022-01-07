#define _CRT_SECURE_NO_WARNINGS 1

// 宏定义棋盘行列
#define ROW 7
#define LINE 7
// ※※※可优化，直接再定义两个宏变量分别为ROW-2 LINE-2，之后的使用内外圈可以分开求

//宏定义地雷数和需排雷数
#define THUNUM 10;
#define SUCNUM 10;

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 如果要保护某个函数，只在源文件能看到，那么不需要将它放入头文件
extern void Init(char board[ROW][LINE]);

extern void Print(char board[ROW][LINE]);

extern void LayThu(char board[ROW][LINE], int num);

extern char Judge(char board[ROW][LINE], int x, int y);