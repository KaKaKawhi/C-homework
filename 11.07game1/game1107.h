#pragma

#define ROW 5
#define LINE 5  //易错：宏定义后面不加分号；

#include <stdio.h>

void initiate(char arr[ROW][LINE], int row, int line);

void print(char arr[ROW][LINE], int row, int line);

void player(char arr[ROW][LINE], int row, int line);
void computer(char arr[ROW][LINE], int row, int line);

char judge(char arr[ROW][LINE], int row, int line);

void play(char arr[ROW][LINE], int row, int line);