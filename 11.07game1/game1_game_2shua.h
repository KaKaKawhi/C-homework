#pragma once
// ͷ�ļ�ʵ������

// //�״��궨����治�ӷֺţ�
#define ROW 3
#define LINE 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void Init(char board[ROW][LINE]);

extern void Print(char board[ROW][LINE]);

extern void Player(char board[ROW][LINE]);

extern void Robot(char board[ROW][LINE]);

extern char Judge(char board[ROW][LINE]);

extern int Is_Full(char board[ROW][LINE]);