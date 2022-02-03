#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ģ��ʵ��strcpy����

char* My_Strcpy(char* to, const char* from)// const����from��ָ���ݲ����ı�
{
	assert(to && from);
	// ����toָ���ƶ�����Ϊ���Ҫ����toָ��
	char* mask = to;
	// ��Ϊto�ַ����ĳ���һ�����㹻����from�ַ����ģ�
	// ����ֻ���ж�fromָ���Ƿ���Ƶ�'\0'
	// ��*fromΪ'\0'ʱ�ȸ�ֵ��*mask��Ȼ��ѭ����������Ϊ���˳�
	while (*mask++ = *from++) { // �൱while ('\0' != (*mask++ = *from++))
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

