#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��һ�������������ڴ��еĶ����Ƶ�1�ĸ���

//int main(){
//
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) {
//		if (n & (1 << i)) {
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//
//    return 0;
//}


// ���˴𰸺������������

// ����2��������ʮ��������10ȡ�࣬�õ����λ����10ȡ�̣��������λ��
//int main() {
//
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	while (n) {
//		if (1 == (n % 2)) {
//			sum++;
//		}
//		n /= 2;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

// ����3��n & (n - 1) �Ὣn���ұߵĵ�һ��1���������ס��������
int main() {

	int n = 0;
	scanf("%d", &n);
	int sum = 0;
	while (n) {
		sum++;
		n = n & (n - 1);
	}
	printf("%d\n", sum);

	return 0;
}