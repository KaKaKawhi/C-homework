#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

int main()
{
	int money = 0;
	scanf("%d", &money);
	int single = 1;
	int soda_num = money / single;
	int emp_num = soda_num;
	// ��һ����������ˮ��
	int new_soda = soda_num;

	// ��Ϊ������϶�ʣһ����ƿ����������󻻵���ˮ����ʣ�µĻ������ʣ��û�����Ŀ�ƿ��
	while (1 != emp_num) {
		// ��ȡ��ˮ���ƿ������Ϊ����������ˮ�»�����ˮ��+ʣ����û������ƿ��
		emp_num = new_soda / 2 + new_soda % 2;
		// ������ˮ�����º�Ļ�ȡ����ˮ��
		new_soda /= 2;
		soda_num += new_soda;
	}
	printf("%d\n", soda_num);

	return 0;
}