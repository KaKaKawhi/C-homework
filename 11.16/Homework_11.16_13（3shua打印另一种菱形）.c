#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	// ��������
	int i = 0;
	// ����ÿ�д�ӡ
	int j = 0;
	// ��ӡ�ϰ����
	for (i = 1; i <= n; i++) {
		// ��ӡÿ�еĿո�
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		// ��ӡÿ�е�*
		for (j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	// ��ӡ��С���
	for (i = 1; i <= n - 1; i++) {
		// ��ӡÿ�еĿո�
		for (j = 1; j <= i; j++) {
			printf(" ");
		}
		// ��ӡÿ�е�*
		for (j = 1; j <= n - i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}


// �Ż���
