#define _CRT_SECURE_NO_WARNINGS 1

#include "game1109.h"

void Meun(void) {
	printf("-------------------------\n");
	printf("-------------------------\n");
	printf("---------1    开始-------\n");
	printf("---------0    结束-------\n");
	printf("-------------------------\n");
	printf("-------------------------\n");
}


void Game() {

	// 创建布置雷棋盘
	char set[ROW][LINE] = { 0 };
	// 创建排查雷棋盘
	char che[ROW][LINE] = { 0 };

	// 初始化棋盘（初始化都为*）
	Init(set);
	Init(che);

	// 布置雷（布置雷为'@'）
	// 布置雷的数目见宏定义变量
	LayThu(set);

	// 打印布置好雷的棋盘（只打印有效内圈）（想真正玩游戏可以将其注释）
	Print(set);
	printf("\n");

	// 用count指标来记录排雷次数，10次即为获胜（注意：应该放在游戏循环外！！！！！！）
	int count = 0;

	// 用户开始游戏
	while (1) {
		
		// 打印排查棋盘（只打印有效内圈）
		Print(che);
		
		// 用户输入要排查的位置（用户输入直接坐标，后面排查会减去1作为数组下标）
		// 输入范围：x：1~ROW-2  y：1~LINE-2
		int x = 0;
		int y = 0;
		printf("请输入您要排查的坐标（x y）\n");
		scanf("%d %d", &x, &y);

		// 判定该位置是否合法，首先应该将用户转化为数组有效（内圈）下标，
		// 用户输入x：1~ROW-2 实际在棋盘中对应：下标x：1~ROW-2（恰好相同，可以自己在纸上试试）
		//（合法位置：在行下标x为1~ROW-2，列下标y为1~LINE-2，即在棋盘内圈中）
		if (x >= 1 && x <= ROW - 2 && y >= 1 && y <= LINE - 2) {
			
			// 判定该位置是否为雷
			// 注意：应该与雷盘相比较！！！！！！
			if ('@' == set[x][y]) {
				printf("很遗憾！您踩到了地雷！游戏结束！\n");
				Print(set);
				break;
			}
			// 确定该位置没被排查过
			else if('*' == che[x][y]) {

				// 布置排查雷的棋盘（该位置如果周围有几个雷，就将该位置布置为'几'）
				// 注意：应该向函数输入雷盘！！！！！！
				char ret = Judge(set, x, y);
				che[x][y] = ret;
				count++;

				// 每布置一次，就判定count是否达到10次（胜利）（※※※可优化：规则随自己想法改变）
				// 如果是其他规则也可以：比如count==(ROW-2)*(LINE-2)-THUNUM时成功
				// 这样可以将原本开始游戏的死循环条件设置为while(count < (ROW-2)*(LINE-2)-THUNUM)
				// 最后加循环外对应加else来说明胜利
				if (SUCNUM == count) {
					printf("恭喜您！您已胜利！\n");
					Print(set);
					break;
				}
				else {
					printf("游戏继续！\n");
				}
			}//布置雷结尾
			else {
				printf("该位置已被排查，请重新输入\n");
			}
		}//判定位置合法结尾
		else {
			printf("该位置不在排查范围内，请重新输入\n");
		}
	}//游戏死循环结尾

}//函数结尾


int main() {

	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		Meun();
		printf("请输入您的选择1开始/0结束\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			Game();
			break;
		case 0:
			printf("已退出\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}

	} while (input);

	return 0;
}