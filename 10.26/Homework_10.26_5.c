#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��10 �����������ֵ

int main() {

	//int x = 0;
	int arr[10] = { 0 };  //�տ�ʼ��ø�������Ĵ�С10������������
	int num = 10;
	int i = 0;
	for (i = 0; i < num; i++) {
		scanf("%d", &arr[i]);  //����д��arr[i] = scanf("%d",&x)
	}

	int max = arr[0];      //��������һ��������̨�������˹���
	for (i = 1; i < num; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	printf("%d\n", max);

	return 0;
}

