#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 模拟实现strcpy函数

char* My_Strcpy(char* to, const char* from)// const保护from所指内容不被改变
{
	assert(to && from);
	// 代替to指针移动，因为最后要返回to指针
	char* mask = to;
	// 因为to字符串的长度一定是足够容纳from字符串的，
	// 所以只需判断from指针是否后移到'\0'
	// 当*from为'\0'时先赋值给*mask，然后循环条件整体为假退出
	while (*mask++ = *from++) { // 相当while ('\0' != (*mask++ = *from++))
		;
	}
	return to;
}

int main()
{
	char from[] = "abcdef";
	char to[] = "xxxxxxxxx";
	My_Strcpy(to, from);
	printf("%s\n", to);

	return 0;
}

