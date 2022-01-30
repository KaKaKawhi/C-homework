#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
// 例如：给定s1 = AABCD和s2 = BCDAA，返回1
// 给定s1 = abcd和s2 = ACBD，返回0.
// AABCD左旋一个字符得到ABCDA
// AABCD左旋两个字符得到BCDAA
// AABCD右旋一个字符得到DAABC

// 第一次自己写，和老师讲的类似，只不过老师讲左旋一个字符写成函数
// 方法1：
int Judge_Spin(char s1[], char s2[]) 
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++) {
		// 每次左旋s1一个字符，然后和s2对比
		// 左旋
		char tmp = s1[0];
		int j = 0;
		for (j = 0; j < len - 1; j++) {
			s1[j] = s1[j + 1];
		}
		s1[len - 1] = tmp;
		// 对比
		if (!strcmp(s1, s2)) {
			// 相同返回1
			return 1;
		}
	}
	// 循环结束仍没有相同返回0
	return 0;
}

int main()
{
	char str1[] = "aabcd";
	char str2[] = "abcda";
	int ret = Judge_Spin(str1, str2);
	printf("%d\n", ret);

	return 0;
}




// 老师讲：方法2：（利用库函数）
//int Judge_Spin(char s1[], char s2[])
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		// 两字符串长度不同，直接返回0
//		return 0;
//	}
//	// 其实ABCDE无论怎么旋，旋转后的所有结果，都包含在了ABCDEABCD这个字符串里了
//	// 先将s1拼接在s1后面形成一个s1二倍长度字符串，包含所有结果
//	strncat(s1, s1, len1);
//	// 在新的s1字符串中找是否有s2字符串，如果有，则s2为s1旋转得来
//	if (NULL != strstr(s1, s2)) { // 相当于if (strstr(s1, s2))，因为NULL本质为0
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main()
//{
//	// 注：因为此方法要在str1后拼接字符串，所以长度必须足够！！！！！
//	char str1[20] = "aabcd";
//	char str2[] = "abcda";
//	int ret = Judge_Spin(str1, str2);
//	printf("%d\n", ret);
//
//	return 0;
//}




// 答案：
// 本题当然可以将所有旋转后的结果放到一个数组里，然后进行查找，
// 但是这种做法既不好操作，也太费事，但是这题有一个很简单的做法：
// 其实ABCDE无论怎么旋，旋转后的所有结果，都包含在了ABCDEABCD这个字符串里了。
// 所以做法很简单，只需要将原字符串再来一遍接在后面，然后找一找待查找的字符串是不是两倍原字符串的子集即可。
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}