#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

// ���0��100000֮������С�ˮ�ɻ������������
// ��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
// (��ʵˮ�ɻ�����ָ3λ������λ���ֵ�3�η���Ϊ����)
// �� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

int Is_Bingo(int i) {
	
	// ��λ��n
	int n = 0;
	// ����i����
	int mask = i;
	while (mask) {
		mask /= 10;
		n++;
	}

	//������
	/*int n = 1;
	while (mask /= 10) {
		n++;
	}*/

	// ���λn���ݺ�
	int sum = 0;
	// ����i����
	int tmp = i;
	while (tmp) {
		// ���дsum += (int)pow((tmp % 10), n); ��Ϊpow��������Ϊdouble�����⾯��
		sum += (int)pow((tmp % 10), n);
		tmp /= 10;
	}

	if (sum == i) {
		return 1;
	}
	return 0;

}


int main()
{
	int min = 0;
	int max = 10000;
	int i = 0;
	for (i = min; i <= max; i++) {
		// ����ǣ�����1�����Ƿ���0
		if (Is_Bingo(i)) {
			printf("%d ", i);
		}
	}

	return 0;
}


