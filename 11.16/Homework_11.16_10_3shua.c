#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// дһ����������������һ���ַ��������ݡ�

void Reverse(char* str) {
	char* left = str;
	char* right = str + strlen(str) - 1;
	// ѭ����
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//int main() {
//
//	char str[20] = " ";
//	// �����ַ���
//	// ���Ҫ�ֶ�����Ҫ��gets��������Ϊ�����Ҫ���ַ����пո�scanf�����ո��ֹͣ
//	scanf("%s", str);
//	Reverse(str);
//	printf("%s\n", str);
//
//	return 0;
//}

// �Ż���
//int main() {
//
//	char str[20] = " ";
//	// �����ַ���
//	// ���Ҫ�ֶ�����Ҫ��gets��������Ϊ�����Ҫ���ַ����пո�
//  scanf�����ʽ����Ϊ%s�������ַ�����ʽ���룬�����ո��ֹͣ
//	gets(str);
//	Reverse(str);
//	printf("%s\n", str);
//
//	return 0;
//}


// ע�⣺���������OJʱ������Ҫ����ѭ�����룬��Ϊÿ���㷨�����ж����������������֤��
// �ο�����main����д����
int main()
{
	char str[101] = { 0 };
	while (gets(str))
	{
		Reverse(str);
		printf("%s\n", str);
		memset(str, '\0', sizeof(str) / sizeof(str[0]));
		// memset(the_array, '\0', sizeof(the_array));
		// ���ǽ�һ����������з������ó���ĺܱ�ݵķ����������ӡ�������ǿ�
	}
	return 0;
}