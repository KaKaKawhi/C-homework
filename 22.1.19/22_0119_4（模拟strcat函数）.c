#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 模拟实现strcat函数

char* My_Strcat(char* to, const char* from) // const保护from所指内容不被改变
{
	assert(to && from);
	// 代替to指针移动，因为最后返回to指针
	char* mask = to;
	while (*mask) {
		mask++;
	}
	// mask指针此时指向to字符串中的'\0'
	// 因为to字符串空间一定足以容纳，所以我们仅需判断from后移过程是否指向'\0'
	// 当*from为'\0'时，先赋值给*mask，然后循环条件整体为假，退出循环
	while (*mask++ = *from++) { //相当while ('\0' != (*mask++ = *from++))
		;
	}
	return to;
}

int main()
{
	char from[] = "abcdef";
	char to[20] = "xxxxxxxxx";
	char* ret = My_Strcat(to, from);
	printf("%s\n", ret);

	return 0;
}

