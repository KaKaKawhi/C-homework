#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

// дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
// ���磺����s1 = AABCD��s2 = BCDAA������1
// ����s1 = abcd��s2 = ACBD������0.
// AABCD����һ���ַ��õ�ABCDA
// AABCD���������ַ��õ�BCDAA
// AABCD����һ���ַ��õ�DAABC

// ��һ���Լ�д������ʦ�������ƣ�ֻ������ʦ������һ���ַ�д�ɺ���
// ����1��
int Judge_Spin(char s1[], char s2[]) 
{
	int len = strlen(s1);
	int i = 0;
	for (i = 0; i < len; i++) {
		// ÿ������s1һ���ַ���Ȼ���s2�Ա�
		// ����
		char tmp = s1[0];
		int j = 0;
		for (j = 0; j < len - 1; j++) {
			s1[j] = s1[j + 1];
		}
		s1[len - 1] = tmp;
		// �Ա�
		if (!strcmp(s1, s2)) {
			// ��ͬ����1
			return 1;
		}
	}
	// ѭ��������û����ͬ����0
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




// ��ʦ��������2�������ÿ⺯����
//int Judge_Spin(char s1[], char s2[])
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		// ���ַ������Ȳ�ͬ��ֱ�ӷ���0
//		return 0;
//	}
//	// ��ʵABCDE������ô������ת������н��������������ABCDEABCD����ַ�������
//	// �Ƚ�s1ƴ����s1�����γ�һ��s1���������ַ������������н��
//	strncat(s1, s1, len1);
//	// ���µ�s1�ַ��������Ƿ���s2�ַ���������У���s2Ϊs1��ת����
//	if (NULL != strstr(s1, s2)) { // �൱��if (strstr(s1, s2))����ΪNULL����Ϊ0
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main()
//{
//	// ע����Ϊ�˷���Ҫ��str1��ƴ���ַ��������Գ��ȱ����㹻����������
//	char str1[20] = "aabcd";
//	char str2[] = "abcda";
//	int ret = Judge_Spin(str1, str2);
//	printf("%d\n", ret);
//
//	return 0;
//}




// �𰸣�
// ���⵱Ȼ���Խ�������ת��Ľ���ŵ�һ�������Ȼ����в��ң�
// �������������Ȳ��ò�����Ҳ̫���£�����������һ���ܼ򵥵�������
// ��ʵABCDE������ô������ת������н��������������ABCDEABCD����ַ������ˡ�
// ���������ܼ򵥣�ֻ��Ҫ��ԭ�ַ�������һ����ں��棬Ȼ����һ�Ҵ����ҵ��ַ����ǲ�������ԭ�ַ������Ӽ����ɡ�
//int findRound(const char* src, char* find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}