#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
// ���д�����������ľ����в���ĳ�������Ƿ���ڡ�
// Ҫ��ʱ�临�Ӷ�С��O(N);

// ��һ���Լ�д��д����
//int Find_Num(int arr[][4], int num) 
//{
//	int n = 3;
//	int i = 0;
//	for (i = 0; i < num; i++) {
//		if (arr[i][3] < num) {
//			int j = 0;
//			for (j = 0; j < 3; j++) {
//				if (num == arr[i][j]) {
//					return 
//				}
//			}
//		}
//		else {
//			continue;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
//	int num = 0;
//	scanf("%d", &num);
//	int ret = Find_Num(arr, num);
//	if (-1 == ret) {
//		printf("�Ҳ���\n");
//	}
//	else {
//		printf("���ҵ����±�Ϊ%d\n", ret);
//	}
//
//	return 0;
//}




void Find_Num(int arr[][4], int* x, int* y, int num) 
{
	// ��row��line�ֱ�ֵΪ��������Сֵ�����������ֵ
	int row = 0;
	int line = *y - 1;
	while (row < *x && line > 0) {
		// ��ȥһ��
		if (num > arr[row][line]) {
			row++;
		}
		// ��ȥһ��
		else if (num < arr[row][line]) {
			line--;
		}
		else {
			*x = row;
			*y = line;
			// �ҵ�����ǰ���أ�С�ı����ǣ���������
			return;
		}
	}
	// �Ҳ�����ֵ-1
	*x = -1;
	*y = -1;
}

int main()
{
	int arr[][4] = { {1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6} };
	int num = 0;
	scanf("%d", &num);
	// ���ɣ���x��yֵ�ȸ�ֵΪ�����������洫����ߵ�ַ���ÿ��Դ���
	int x = 3;
	int y = 4;
	// ��Ϊ�����޷������������������Խ�x��y��ַ���룬ͨ���ں����ڲ��ı�����ʵ��
	Find_Num(arr, &x, &y, num);
	if (-1 == x && -1 == y) {
		printf("�Ҳ���\n");
	}
	else {
		printf("���ҵ����±�Ϊ��x=%d��y=%d\n", x, y);
	}

	return 0;
}