#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ģ��ʵ��strcat����

char* My_Strcat(char* to, const char* from) // const����from��ָ���ݲ����ı�
{
	assert(to && from);
	// ����toָ���ƶ�����Ϊ��󷵻�toָ��
	char* mask = to;
	while (*mask) {
		mask++;
	}
	// maskָ���ʱָ��to�ַ����е�'\0'
	// ��Ϊto�ַ����ռ�һ���������ɣ��������ǽ����ж�from���ƹ����Ƿ�ָ��'\0'
	// ��*fromΪ'\0'ʱ���ȸ�ֵ��*mask��Ȼ��ѭ����������Ϊ�٣��˳�ѭ��
	while (*mask++ = *from++) { //�൱while ('\0' != (*mask++ = *from++))
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

