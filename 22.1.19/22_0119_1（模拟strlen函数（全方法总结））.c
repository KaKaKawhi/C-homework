#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 方法1：（计数器方法）

//int My_Strlen(char str[]) 
//int My_Strlen(const char* str)// const保护str所指内容不被改变
//{
//	assert(str);
//	int sum = 0;
//	// 相当while ('\0' != *str)
//	while (*str) {
//		sum++;
//		str++;
//	}
//	return sum;
//}



// 方法2：（递归方法）
// 限定条件为首指针所指内容不为'\0'，每次通过字符串首指针的后移一位来接近限定条件

//int My_Strlen(const char* str)// const保护str所指内容不被改变
//{
//	assert(str);
//	char* top = str;
//	// 相当if ('\0' != *top)
//	if (*top) {
//		return 1 + My_Strlen(top + 1);
//	}
//	else {
//		return 0;
//	}
//}



// 方法3：（指针相减的方法）

//int My_Strlen(const char* str) // const保护str所指内容不被改变
//{
//	assert(str);
//	char* end = str;
//	// 相当while ('\0' != *end)
//	while (*end) {
//		end++;
//	}
//	// 最后end指向'\0'
//	return end - str;
//
//	// 或者：
//	//while (*mask++) {   //方法2，这样的话指针会指向‘\0’的后面，
//	//                            //画图分析即可，所以return后额外减去1
//	//    ;
//	//}
//	//return mask - arr - 1;
//}



int main()
{
	char str[20] = {0};
	scanf("%s", str);
	int len = My_Strlen(str);
	printf("%d\n", len);

	return 0;
}

