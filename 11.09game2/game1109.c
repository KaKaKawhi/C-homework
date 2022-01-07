#define _CRT_SECURE_NO_WARNINGS 1

#include "game1109.h"

// （初始化都为*）
void Init(char board[ROW][LINE]) {
	
	int i = ROW;
	int j = LINE;
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < LINE; j++) {
			board[i][j] = '*';
		}
	}

}


// 打印棋盘（仅打印创建棋盘的有效范围（内圈））(※※※可优化：将行列号也对应打印)
void Print(char board[ROW][LINE]) {

	int i = ROW;
	int j = LINE;
	for (i = 1; i < ROW - 1; i++) {
		for (j = 1; j < LINE - 1; j++) {
			if (LINE - 1 == j) {
				printf("| %c |", board[i][j]);
			}
			else {
				printf("| %c ", board[i][j]);
			}
		}// 内层循环结尾
		printf("\n");
		for (j = 1; j < LINE - 1; j++) {
			printf("——");
		}
		printf("\n");
	}//外层循环结尾

}


// （布置雷为'@'）
void LayThu(char board[ROW][LINE]) {

	// 记录放入的雷数
	int n = 0;

	// 循环创建随机位置，直到num个雷都合法布置好
	while (1) {

		// 创建随机数：原本为   x:0 ~ (ROW-2-1)  y:0 ~ (LINE-2-1)
		//           +1后范围：x:0 ~ ROW-2      y:0 ~ LINE-2
		// +1 的原因是因为外层多打印了一圈，雷只布置在里圈
		// 例如 ROW LINE都为11，创建下标为0~8，下标均加1即变为：1~9，即棋盘内圈

		int x = rand() % (ROW - 2) + 1;
		int y = rand() % (LINE - 2) + 1;

		// 判断位置合法性
		if ('*' == board[x][y]) {
			if (n <= THUNUM) {
				board[x][y] = '@';
				n++;
			}
			else {
				printf("雷已布置完毕\n");
				break;
			}
		}
		else {
			printf("重新筛查中...\n");
		}

	}// 死循环布置雷结尾
	
}


// 排查该位置周围的雷数（周围有几个雷，就返回'几'）
// （这里的返回类型int和char都可以，因为在后面以%c打印，
// 内存中的二进制仅会取最低7个比特位来打印对应ASCII码表的字符）
char Judge(char board[ROW][LINE], int x, int y) {

	int sum = 0;
	int i = 0;
	int j = 0;
	for (i = x - 1; i <= x + 1; i++) {	
		for (j = y - 1; j <= y + 1; j++) {
			// 自身肯定不是雷，所以相当多加一个0而已
			if ('@' == board[i][j]) {
				sum++;
			}
		}// 内层循环结尾
	}// 外层循环结尾

	char ret = sum + '0';
	// sum + '0' 在内存中相当于sum加上'0'对应的ASCII码值48，
	// 例如：sum为2，在底层，sum + '0'，sum和'0'分别先转为二进制，
	//      在CPU计算后即为50对应的二进制序列，然后写回内存中ret开
	//      辟的char类型空间发生截断，保留最低权值位的8个比特位，
	//      当打印棋盘时，每个元素是以%c打印，所以最后会打印出该二进制
	//      所对应的十进制对应的ASCII码字符，即为'sum'
	return ret;
}
// ※※※可优化：
// 如果将雷布置为'1'，而棋盘初始化为'0'，则这个可以直接返回：
// 一圈的字符元素之和减去8*'0'即得到一圈的雷数