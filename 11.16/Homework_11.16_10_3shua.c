#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 写一个函数，可以逆序一个字符串的内容。

void Reverse(char* str) {
	char* left = str;
	char* right = str + strlen(str) - 1;
	// 循环！
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//int main() {
//
//	char str[20] = " ";
//	// 输入字符串
//	// 如果要手动输入要用gets（），因为如果需要的字符串有空格，scanf遇到空格就停止
//	scanf("%s", str);
//	Reverse(str);
//	printf("%s\n", str);
//
//	return 0;
//}

// 优化：
//int main() {
//
//	char str[20] = " ";
//	// 输入字符串
//	// 如果要手动输入要用gets（），因为如果需要的字符串有空格，
//  scanf输入格式设置为%s，按照字符串格式读入，遇到空格就停止
//	gets(str);
//	Reverse(str);
//	printf("%s\n", str);
//
//	return 0;
//}


// 注意：如果是在线OJ时，必须要考虑循环输入，因为每个算法可能有多组测试用例进行验证，
// 参考以下main函数写法：
int main()
{
	char str[101] = { 0 };
	while (gets(str))
	{
		Reverse(str);
		printf("%s\n", str);
		memset(str, '\0', sizeof(str) / sizeof(str[0]));
		// memset(the_array, '\0', sizeof(the_array));
		// 这是将一个数组的所有分量设置成零的很便捷的方法。这里打印出来就是空
	}
	return 0;
}