#define _CRT_SECURE_NO_WARNINGS 1

// �궨����������
#define ROW 7
#define LINE 7
// ���������Ż���ֱ���ٶ�������������ֱ�ΪROW-2 LINE-2��֮���ʹ������Ȧ���Էֿ���

//�궨�����������������
#define THUNUM 10;
#define SUCNUM 10;

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// ���Ҫ����ĳ��������ֻ��Դ�ļ��ܿ�������ô����Ҫ��������ͷ�ļ�
extern void Init(char board[ROW][LINE]);

extern void Print(char board[ROW][LINE]);

extern void LayThu(char board[ROW][LINE], int num);

extern char Judge(char board[ROW][LINE], int x, int y);