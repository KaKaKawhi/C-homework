#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���

int main()
{
    int money = 20;
    int emp_count = 0;//��ƿ��
    int cola_count = 0;//�ɻ�õ���ˮ��
    cola_count = money / 1;
    int mask = cola_count;//����ԭʼ�ɻ����ˮ��������
    while (mask) {
		// ��һƿ
        mask--;
        emp_count++;
		// ��ƿ��һ��Ϊ2�ͽ�������
        if (2 == emp_count) {
            cola_count++;
            mask++;
            emp_count = 0;  //��ƿ������
        }
    }
    printf("%d\n",cola_count);

    return 0;
}

/*
˼·��
1. 20Ԫ���ȿ��Ժ�20ƿ����ʱ������20����ƿ��
2. ������ƿ�ӿ��Ժ�һƿ������֮�󣬿�ƿ��ʣ�ࣺempty/2(������ƿ�ӻ��ĺ���������ƿ��) + empty%2(��������ƿ��)
3. ���ƿ�Ӹ�������1�������Լ����������ظ�2
*/
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//����1
	total = money;
	empty = money;
	while (empty >= 2)   //���϶����Ϻ���ʣ��1ƿ�ӣ�С��������ƿ��û�����ˣ���������˼·�������ϰ�
						 //��һ����ƿ��������ʣ��һ��һ��һƿ��Ȼ����һƿ�Ŀ�ƿ�����ϰ�
	{
		total += empty / 2;				//�����Ŀ�ƿ��
		empty = empty / 2 + empty % 2;  //�����Ŀ�ƿ����ʣ�µĿ�ƿ��
	}
	printf("%d\n", total);

	return 0;
}


// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣���ʵ���Ǹ��Ȳ����У�money*2-1
int main()
{
	int money = 0;
	int total = 0;
	int empty = 0;


	scanf("%d", &money);

	//����2���Լ��ҵĹ���һ�㲻������д���룬�����������һ��˵����
			//1ƿ����1Ԫ��1����ƿ�൱0.5Ԫ��20Ԫ��ֵ40����ƿ�������
			//�Ͽ϶���һ��������40-1=39
	if (money <= 0)
	{
		total = 0;
	}
	else
	{
		total = money * 2 - 1;
	}
	printf("total = %d\n", total);


	return 0;
}



// 3shua�Լ�д�Ĵ�����룬��������һ������Ϊ���϶���
// ��ʣ��һ����ƿ���Լ��Ĵ��뽫��ƿ���Լ������ˮ������
int main(void)
{
	int money = 0;
	scanf("%d", &money);
	int num = money / 1;
	int sum = num;
	while (num) {
		sum += num / 2;
		num /= 2;
	}
	printf("%d\n", sum);

	return 0;
}


// 3shua��������