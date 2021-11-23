#define _CRT_SECURE_NO_WARNINGS 1

#include "game1107.h"

void game() {
	//设置棋盘
	char arr[ROW][LINE] = { 0 };  //为了使得棋盘的数量方便改动，我们在头文件定义宏变量
	// 初始化棋盘(初始化的时候，只初始化所有下棋的地方为空格即可，
	// 在打印棋盘的时候就可以结合这里的数据，通过printf的打印格式将数据
	// 带入到棋盘格里)
	int row = ROW;
	int line = LINE;
	initiate(arr, row, line);
	//打印棋盘测试一下
	print(arr, row, line);
	//下棋模拟(以*表示玩家棋子，以#表示电脑棋子)
	play(arr, row, line);
}

void meun() {
	printf("-------------------\n");
	printf("-----1continue-----\n");
	printf("-----0     end-----\n");
	printf("-------------------\n");

}

void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		// 打印菜单
		meun();
		//根据用户输入来执行
		printf("请问您是否进行游戏？请输入您的选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	

}

//int main() {
//
//	test();
//	
//	return 0;
//}