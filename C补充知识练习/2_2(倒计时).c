#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>

// ����ʱ

int main()
{
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < len; i++) {
		// \r�س���
		Sleep(1000);
		// i=10ʱռ�����ַ�����Ϊһ���ַ��󣬿��ܵ��º�����ַ��޷����ǣ�%2d��Ԥ���������ַ��ռ�
		printf("%2d\r", arr[i]);
	}

	return 0;
}


