#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
// arr��һ������һά���顣

// ��1��(arr���ƶ�)
//void Print(int arr[], int len) {
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		printf("%d ", *(arr + i));
//	}
//}

// ��2��
//void Print(int arr[], int len) 
//{	
//	while (len) {
//		printf("%d ", *arr);
//		arr++;
//		len--;
//	}
//}
// ��2���Ż�����arr�Դ�����ƶ�һλ��
void Print(int arr[], int len) 
{	
	while (len) {
		printf("%d ", *(arr++));
		len--;
	}
}

int main()
{
	int arr[] = { 0, 5, 3, 4, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Print(arr, len);

	return 0;
}