#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// 实现一个函数，可以左旋字符串中的k个字符。
// 例如：
// ABCD左旋一个字符得到BCDA
// ABCD左旋两个字符得到CDAB

// 第一次自己写的：(复杂且最后有错误)
// 
//char* Spin(char str[], int num) 
//{
//    int len = strlen(str);
//    char nstr[5] = { 0 };
//    int count = num % 4;
//    char* ps = str + count;
//    int i = 0;
//    while (*ps != '\0') {
//        nstr[i] = *ps;
//        i++;
//        ps++;
//    }
//    
//    while (count) {
//        nstr[i] = *str;
//        str++;
//        i++;
//        count--;
//    }
//    
//    nstr[i] = *ps;
//
//    return nstr;
//}
//
//int main()
//{
//    char str[] = "abcd";
//    int num = 0;
//    scanf("%d", &num);
//    char* pr = Spin(str, num);
//    printf("%s\n", pr);
//
//    return 0;
//}




// 老师讲：方法一（每次旋转一个字符串）
//
//void Left_Spin(char arr[], int num)
//{
//	int len = strlen(arr);
//	int count = num % len;
//
//	while (count) {
//		char tmp = *arr;
//		int i = 0;
//		// 注：这里是i<len-1
//		for (i = 0; i < len - 1; i++) {
//			*(arr + i) = *(arr + i + 1);
//		}
//		// 注：这里直接在字符串最后一个字符处赋值第一个字符
//		*(arr + len - 1) = tmp;
//		count--;
//
//	}// 整体没有动该字符串最后的'\0'，所以不需要担心这个
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int num = 0;
//	scanf("%d", &num);
//	Left_Spin(arr, num);
//	printf("%s\n", arr);
//
//	return 0;
//}

   


// 老师讲：方法二（分别逆序部分字符串，再整体逆序，一种新思路积累！！！）
//
//void Reverse(char* left, char* right) {
//	while (left < right) {
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int num = 0;
//	scanf("%d", &num);
//	int len = strlen(arr);
//	// 逆序前num个字符
//	Reverse(arr, arr + num - 1);
//	// 逆序剩余字符
//	Reverse(arr + num, arr + len - 1);
//	// 逆序整体
//	Reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//
//	return 0;
//}



// 答案有种新方法：（利用库函数）
//
void leftRound(char* src, int time)
{
	int len = strlen(src);
	int pos = time % len; //断开位置的下标
	char tmp[256] = { 0 }; //更准确的话可以选择malloc len + 1个字节的空间来做这个tmp

	strcpy(tmp, src + pos); //先将后面的全部拷过来
	strncat(tmp, src, pos); //然后将前面几个接上
	strcpy(src, tmp); //最后拷回去
}

int main()
{
	char arr[] = "abcd";
	int num = 0;
	scanf("%d", &num);
	leftRound(arr, num);
	printf("%s\n", arr);

	return 0;
}