#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <windows.h>

// ��ת���

int main()
{
	// '\'Ϊ�����ַ�ǰ���ټ�һ��ת���\ʹ������ת����
	char str[] = "-/|\\";
	while (1) {
		int i = 0;
		for (i = 0; i < strlen(str); i++) {
			Sleep(100);
			// \r Ϊ�س�����ÿ�ι��ص���ǰ�е��ʼ
			printf("%c\r", str[i]);
		}
	}

	
	return 0;
}


