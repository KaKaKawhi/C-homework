#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ʵ��һ�������������ð������˼������Ż�

void Bub_Sort(int arr[], int len) {
	int i = 0;
	int j = 0;
	
	// ���Ƶڼ������ֿ�ʼ�����Ƚϣ�len-1��������Ҫ�ֱ����Ƚϣ���Ϊ���һ�����ֲ���Ҫ�Ƚϣ�
	for (i = 0; i < len - 1; i++) {
		// �ж����ֱȽ���û�з����������֣����û�н���˵��֮������־����й涨˳��ֱ���˳�ѭ��
		int index = 1;
		// ���ƴ����ֵĴ��ֱȽϣ���������αȽ�len-1-i��
		for (j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				// ��������
				index = 0;
			}
		}// �ڲ�ѭ����β
		// �൱if(1 == index)û�з���ѭ��
		if (index) {
			return;
		}
	}// ���ѭ����β

}

int main()
{
	int arr[] = { 0, 5, 3, 4, 2, 1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Bub_Sort(arr, len);
	int i = 0;
	for (i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}