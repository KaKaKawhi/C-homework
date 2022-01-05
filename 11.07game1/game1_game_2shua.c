#define _CRT_SECURE_NO_WARNINGS 1
// game源文件实现函数定义

#include "game1_game_2shua.h"

void Init(char board[ROW][LINE]) {

	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			board[i][j] = ' ';
		}
	}
}


void Print(char board[ROW][LINE]) {

	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			if (LINE - 1 == j) {
				printf("| %c |", board[i][j]);
			}
			else {
				printf("| %c ", board[i][j]);
			}
		}
		printf("\n");
		for (j = 0; j < LINE; j++) {
			printf("——");
		}
		printf("\n");
	}
}


void Player(char board[ROW][LINE]) {

	// 不断下棋，直到找到一个合法位置，或者已经判定到棋盘满
	while (1) {
		// 玩家输入想下棋的位置（玩家棋子：*）
		int x = 0;
		int y = 0;
		// 玩家选择坐标直接根据从0开始数
		printf("请选择您要下的位置(x y)\n");

		//以%d,%d输入时，小心逗号格式必须也为英文的，对应起来
		scanf("%d %d", &x, &y);

		// 判断该位置是否合法
		if (x > 0 && y > 0 && x <= ROW && y <= LINE && ' ' == board[x - 1][y - 1]) {
			board[x - 1][y - 1] = '*';
			break;
		}
		else if ('=' == Judge(board)) {
			// 已满，退出即可，游戏函数紧接着后面就有判定
			break;
		}
		else {
			printf("该位置不合法，请重新输入\n");
		}
	}
	
}


void Robot(char board[ROW][LINE]) {

	// 不断下棋，直到找到一个合法位置，或者已经判定到棋盘满
	while (1) {
		// 电脑确定下棋的位置（电脑棋子：#）
		// x、y分别为0-ROW 和 0-LINE的数字
		int x = rand() % ROW;
		int y = rand() % LINE;

		// 判断该位置是否合法（与玩家判定下标有点区别）
		if (x >= 0 && y >= 0 && x < ROW && y < LINE && ' ' == board[x][y]) {
			board[x][y] = '#';
			break;
		}
		else if('=' == Judge(board)) {
			// 已满，退出即可，游戏函数紧接着后面就有判定
			break;
		}
		else {
			printf("该位置不合法，请重新筛选\n");
		}
	}
	
}

int Is_Full(char board[ROW][LINE]) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			if (' ' == board[i][j]) {
				// 说明未满，直接返回0
				return 0;
			}
		}
	}
	// 否则满了返回1
	return 1;
}

// 判定函数看答案了，自己写的有问题！！！！！！！！！！！！！！！！
// 只要在一行中任意3个连续位置都有同一个棋子，则一方胜利
// 玩家胜利返回*
// 电脑胜利返回#
// 平局（棋盘满）返回=
// 继续返回+（直接在函数最外面return '+'）
char Judge(char board[ROW][LINE]) {

	// 判定行
	int i = 0;
	int j = 0;
	for (i = 0; i < ROW; i++) {
		//自己写的：for (j = 0; j < LINE; j++) {
		for (j = 1; j < LINE - 1; j++) {
			// 如果一行内判定出来相邻三个棋子相同，则直接返回该棋子对应字符
			// 自己写的没有判断不为空
			if (board[i][j - 1] == board[i][j] && board[i][j] == board[i][j + 1] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}


	// 判定列
	for (j = 0; j < LINE; j++) {
		//自己写的从0开始
		for (i = 1; i < ROW - 1; i++) {
			// 如果一列内判定出来相邻三个棋子相同，则直接返回该棋子对应字符
			// 自己写的没有判断不为空
			if (board[i - 1][j] == board[i][j] && board[i][j] == board[i + 1][j] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// 判定主对角线
	for (i = 0; i < ROW; i++) {
		//自己写的从0开始
		for (j = 1; j < LINE - 1; j++) {
			// 如果主对角线内判定出来相邻三个棋子相同，则直接返回该棋子对应字符
			// 自己写的没有判断不为空
			if (board[i - 1][j - 1] == board[i][j] && board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// 判定次对角线
	for (i = 0; i < ROW; i++) {
		//自己写的从0开始
		for (j = 1; j < LINE - 1; j++) {
			// 如果次对角线内判定出来相邻三个棋子相同，则直接返回该棋子对应字符
			// 自己写的没有判断不为空
			if (board[i + 1][j - 1] == board[i][j] && board[i][j] == board[i - 1][j + 1] && board[i][j] != ' ') {
				return board[i][j];
			}
		}
	}

	// 当判断是否满的函数返回1时为满，返回0时继续
	// 相当if (1 == Is_full(board))
	if (Is_Full(board)) {
		return '=';
	}
	else {
		// 判断平局
		return '+';
	}
}