#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>

// 旋转光标

int main()
{
	// '\'为特殊字符前面再加一个转义符\使得特殊转字面
	char str[] = "-/|\\";
	while (1) {
		int i = 0;
		for (i = 0; i < strlen(str); i++) {
			Sleep(100);
			// \r 为回车符，每次光标回到当前行的最开始
			printf("%c\r", str[i]);
		}
	}

	
	return 0;
}


