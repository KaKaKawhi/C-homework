#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>

// 倒计时

int main()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < len; i++) {
		// \r回车符
		Sleep(1000);
		// i=10时占两个字符，变为一个字符后，可能导致后面的字符无法覆盖，%2d会预留出两个字符空间
		printf("%2d\r", arr[i]);
	}

	return 0;
}


