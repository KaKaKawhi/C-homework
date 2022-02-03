#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 模拟实现strcmp函数

// 通过返回-1，0，1来实现返回负，零，正值
int My_Strcmp(const char* str1, const char* str2) // const保护二者字符串内容都不能被改变
{
  assert(str1 && str2);
	while (*str1 || *str2) { // 相当while (('\0' != *str1) || ('\0' != *str2))
		if ((*str1 == *str2) && '\0' != *str1) {
			str1++;
			str2++;
		}
		else if (*str1 > *str2) {
			return 1;
		}
		else {
			return -1;
		}
	}
	// 如果循环结束还没有退出，则说明二者完全相同
	return 0;
}

// 老师讲版本：
int My_Strcmp(const char* str1, const char* str2) // const保护二者字符串内容都不能被改变
{
	assert(str1 && str2);
	while (*str1 == *str2) { 
		if ('\0' == *str1) {
			return 0;
		}
		str1++;
		str2++;
	}

	return *str1 - *str2;
}

int main()
{
	char str1[] = "abcde";
	char str2[] = "abcdef";
	int ret = My_Strcmp(str1, str2);
	if (ret > 0) {
		printf("str1字符串较大\n");
	}
	else if (ret < 0) {
		printf("str2字符串较大\n");
	}
	else {
		printf("二者相同\n");
	}

	return 0;
}

