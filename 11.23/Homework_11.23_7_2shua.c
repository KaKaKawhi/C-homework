#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

int main()
{
	// 存放凶手代号
	// 可以直接用int类型，因为在进行比较是在CPU比较，需要整形提升
	char i = 0;
	for (i = 'a'; i <= 'd'; i++) {
		if (3 == (('a' != i) + ('c' == i) + ('d' == i) + ('d' != i))) {
			printf("%c\n", i);
		}
	}

	return 0;
}