#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// 编写一个函数 reverse_string(char * string)（递归实现）
// 实现：将参数字符串中的字符反向排列，不是逆序打印。
// 要求：不能使用C函数库中的字符串操作函数。


// 写的方法，在移动指针的时候，和之前不同，之前的用了自己写的求字符串长度函数，其实没必要
// 非递归：
//void Re_Str(char str[]) 
// {
//	assert(str);
//	char* left = str;
//	char* right = str;
//	// 相当while('\0' != (*right))
//	while (*right) {
//		right++;
//	}
//	// 将right指针指向'\0'之前
//	right--;
//	
//	if (left < right) {
//		// 交换是指针解引用后指向的变量内容交换！！！！
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}


// 递归：（错误，递归条件判断错！！！）
// 思考：
// abcde --> bcd
// 限定条件：*str等于'\0'，错误！！！！！！！！！！！！！！！
// 接近限定条件方式：用指针str向后移动，同时结尾'\0'向前移动一位
//void Re_Str(char str[]) 
//{
//	assert(str);
//	char* left = str;
//	char* right = str;
//	while (*right) {
//		right++;
//	}
//	right--;
//	// 先完成第一轮交换的部分交换
//	char tmp = *left;
//	*left = *right;
//	// 最右边元素暂时存放'\0'为了在递归时，保证传入的和第一次的字符串格式相同
//	*right = '\0';
//	// 相当：if('\0' != (*str)) ，这里的递归限定条件错误！！！！！！！！！！！！！！
//	if (*str) {
//		Re_Str(str + 1);
//	}
//	// 递以后再将此轮交换彻底完成
//	*right = tmp;
//}


int main()
{
	// 千万不要忘了初始化，要么直接通过赋值字符串，要么必须指定字符数组大小！！！
	char str[20] = { 0 };
	scanf("%s", str);
	Re_Str(str);
	printf("%s\n", str);

	return 0;
}



// 递归老师讲的方法：
int My_Strlen(char str[]) {
    char* mask = str;
    //相当'\0' != *mask
    if (*mask) {
        return 1 + My_Strlen(mask + 1);
    }
    else {
        return 0;
    }
    // 个人觉得带着else更加清晰
}

void Reverse_Str(char* str) {

    // 在递归之前的代码都是无条件的，所以每次 递 （到函数起始处）
    // 都执行if (My_Strlen(str + 1) > 1)之前的代码，
    // 之后的代码在 归 （从哪里递就返回到哪里）时会返回执行  ！！！！！！！！！！！！！！！！！！
    int len = My_Strlen(str);

    // 第一次部分交换
    *str = *(str + len - 1);

    // 将*(str + len - 1)先设置为'\0'，这样递归的话，
    // str+1就是一个和之前一模一样的字符串（以'\0'结尾）
    *(str + len - 1) = '\0';

    // 当剩余的字符串长度大于1再，递归，否则不变
    if (My_Strlen(str + 1) > 1) {
        Reverse_Str(str + 1);
    }
    else {
        ;
    }

    // 完成第一次所有交换
}