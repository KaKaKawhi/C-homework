#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/*��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
˼·��
ͨ���۲���Է��֣��ñ��ʽ�ĵ�i������i��a���֣���ˣ�
�����i��Ϊtemp�����i+1��Ϊtemp*10+a
����ο����´���
*/
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d%d", &a, &n);//����֮��Ҫ�ӿո�   ��scanf����%d %d��,...�� ͬ��
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a; //��ÿһ����ǰһ���ϵ����!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
							//˼·
							// i=0		i=1		i=2		  i=3
							// 2		22		222		  2222
							// 2		2*10+2	22*10+2	  222*10+2
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}

//�Լ�д�ģ�˼·
// i=0		 i=1	   i=2		   i=3		
// 2		2+10*2	22+100*2	222+1000*2
//int main() {
//
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int num = 0;
//  int sum = 0;
//	int time = 1;
//	for (i = 0; i < n; i++) {
//		num += a * time;
//      sum += num;
//		time *= 10;
//	}
//
//	return 0;
//}