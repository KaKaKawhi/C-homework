#define _CRT_SECURE_NO_WARNINGS 1

#include "game1107.h"

void initiate(char arr[ROW][LINE], int row, int line) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < line; j++) {
			arr[i][j] = ' ';
		}
	}
}

void print(char arr[ROW][LINE], int row, int line) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < line; j++) {
			printf(" %c ", arr[i][j]);
			if (j < line - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			//printf("---|---|--"); 错误
			for (j = 0; j < line; j++) {
				printf("---");
				if (j < line - 1) {
					printf("|");
				}
			}
		}
		printf("\n");
	}
}

void player(char arr[ROW][LINE], int row, int line) {
	while (1) { // 玩家要反复输入，直到输入一个合法的位置
		printf("请玩家输入需要下棋的位置(x y):");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);                              // 输入%d,%d会出现错误
		//给用户直观感受，从第一行，第一列开始
		if (x - 1 >= 0 && x - 1 <= line - 1 && y - 1 >= 0 && y - 1 <= row - 1) {
			if (arr[x - 1][y - 1] == ' ') {
				arr[x - 1][y - 1] = '*';
				//print(arr, row, line);
				break;
			}
			else {
				printf("此处已有棋子，请重新输入\n");
				continue;
			}
		}
		else {
			printf("输入错误，请重新输入\n");
			continue;
		}
	}
}

void computer(char arr[ROW][LINE], int row, int line) {
	while (1) {   //电脑要反复输入，直到输入一个合法的位置
		int x = rand() % line; //0 - line-1
		int y = rand() % row;
		if (x >= 0 && x <= line - 1 && y >= 0 && y <= row - 1) {
			if (arr[x][y] == ' ') {
				arr[x][y] = '#';
				break;
			}
		}
	}
}

int is_full(char arr[ROW][LINE], int row, int line) {
	int index = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < line; j++) {
			if (arr[i][j] == ' ') {
				index = 1;
			}
		}
	}
	return index;
}

char judge(char arr[ROW][LINE], int row, int line) {
	// 先判断行，只要在一行中任意3个连续位置都有同一个棋子，则一方胜利
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 1; j < line - 1; j++) {
			//要加判断三个不都为空格
			if (arr[i][j - 1] == arr[i][j] && arr[i][j] == arr[i][j + 1] && arr[i][j] != ' ') {
				return arr[i][j];
			}
		}
	}

	// 判断列，只要在一列中任意3个连续位置都有同一个棋子，则一方胜利
	for (i = 0; i < line; i++) {
		for (j = 1; j < row - 1; j++) {
			if (arr[j - 1][i] == arr[j][i] && arr[j][i] == arr[j + 1][i] && arr[j][i] != ' ') {
				return arr[j][i];
			}
		}
	}

	// 判断对角线，只要在一斜线中任意3个连续位置都有同一个棋子，则一方胜利
	

	// 判断平局和游戏继续
	int index = is_full(arr, row, line);
	if (0 == index) {
		return '2';
	}
	if(1 == index){
		return '1';
	}
}

void play(char arr[ROW][LINE], int row, int line) {
	char ret = '0';
	//要不断下棋，直到结束
	while (1) { 
		
		// 玩家下棋：
		player(arr, row, line);
		//print(arr, row, line);//等电脑下棋后一起看
		
		ret = judge(arr, row, line);// 双方每下一步就要判断一次，
								    // 否则会出现玩家下后满了，卡在到电脑下棋这一步
		// 放在循环内外都可以，循环内先判断再break，循环外先break出循环再判断，
		// 循环外比较好，因为整体连续的if语句只需要一组即可
		if (ret != '1') {
			break;
		}

		// 电脑下棋：
		computer(arr, row, line);
		print(arr, row, line);
		// 判断棋局，决定继续(1)还是结束(0)还是平局（2）
		// 如果这样接收，返回0不确定谁赢，所以最好返回他们所代表的棋子字符作为结束
		// int ret = judge(arr, row, line);       错误！
		// 所以继续：'1'
		//     玩家赢：'*'
		//     电脑赢：'#'
		//	   平局：  '2'
		ret = judge(arr, row, line);
		if (ret != '1') {
			break;
		}	
	}

	if ('*' == ret) {
		printf("游戏结束，玩家获胜\n");
	}
	else if ('#' == ret) {
		printf("游戏结束，电脑获胜\n");
	}
	else if ('2' == ret) {
		printf("游戏结束，双方平局\n");
	}
}