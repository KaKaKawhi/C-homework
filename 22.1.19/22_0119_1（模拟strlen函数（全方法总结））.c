#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// ����1����������������

//int My_Strlen(char str[]) 
//int My_Strlen(const char* str)// const����str��ָ���ݲ����ı�
//{
//	assert(str);
//	int sum = 0;
//	// �൱while ('\0' != *str)
//	while (*str) {
//		sum++;
//		str++;
//	}
//	return sum;
//}



// ����2�����ݹ鷽����
// �޶�����Ϊ��ָ����ָ���ݲ�Ϊ'\0'��ÿ��ͨ���ַ�����ָ��ĺ���һλ���ӽ��޶�����

//int My_Strlen(const char* str)// const����str��ָ���ݲ����ı�
//{
//	assert(str);
//	char* top = str;
//	// �൱if ('\0' != *top)
//	if (*top) {
//		return 1 + My_Strlen(top + 1);
//	}
//	else {
//		return 0;
//	}
//}



// ����3����ָ������ķ�����

//int My_Strlen(const char* str) // const����str��ָ���ݲ����ı�
//{
//	assert(str);
//	char* end = str;
//	// �൱while ('\0' != *end)
//	while (*end) {
//		end++;
//	}
//	// ���endָ��'\0'
//	return end - str;
//
//	// ���ߣ�
//	//while (*mask++) {   //����2�������Ļ�ָ���ָ��\0���ĺ��棬
//	//                            //��ͼ�������ɣ�����return������ȥ1
//	//    ;
//	//}
//	//return mask - arr - 1;
//}



int main()
{
	char str[20] = {0};
	scanf("%s", str);
	int len = My_Strlen(str);
	printf("%d\n", len);

	return 0;
}

