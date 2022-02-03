#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ģ��ʵ��strcmp����

// ͨ������-1��0��1��ʵ�ַ��ظ����㣬��ֵ
int My_Strcmp(const char* str1, const char* str2) // const���������ַ������ݶ����ܱ��ı�
{
  assert(str1 && str2);
	while (*str1 || *str2) { // �൱while (('\0' != *str1) || ('\0' != *str2))
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
	// ���ѭ��������û���˳�����˵��������ȫ��ͬ
	return 0;
}

// ��ʦ���汾��
int My_Strcmp(const char* str1, const char* str2) // const���������ַ������ݶ����ܱ��ı�
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
		printf("str1�ַ����ϴ�\n");
	}
	else if (ret < 0) {
		printf("str2�ַ����ϴ�\n");
	}
	else {
		printf("������ͬ\n");
	}

	return 0;
}

