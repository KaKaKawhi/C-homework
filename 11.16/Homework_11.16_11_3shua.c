#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
// ���磺2 + 22 + 222 + 2222 + 22222

int main()
{
	// ����ĺ�
	int count = 0;
	// ʲô����
	int n = 0;
	scanf("%d %d", &count, &n);
	
	// ˼����2=0+2*1;22=2+2*10;222=22+2*100
	int sum = 0;
	int num = 0;
	// ���Ƽ���ĺ�
	int i = 0;
	// ����ÿ��Ҫ�ӵ����ֵı䶯
	int j = 0;
	for (i = 0, j = 1; i < count; i++, j *= 10) {
		num += n * j;
		sum += num;
	}
	printf("%d\n", sum);


	return 0;
}


//�����������˾��ø����㣬ÿ��ֻʹ����10��ǰһ�
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		//��ÿһ����ǰһ���ϵ����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//˼·
		// i=0		i=1		i=2		  i=3
		// 2		22		222		  2222
		// 2		2*10+2	22*10+2	  222*10+2
		tmp = tmp * 10 + a; 
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}