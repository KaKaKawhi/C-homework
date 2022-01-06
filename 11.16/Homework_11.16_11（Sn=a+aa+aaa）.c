#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


/*求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
思路：
通过观察可以发现，该表达式的第i项中有i个a数字，因此：
假设第i项为temp，则第i+1项为temp*10+a
具体参考以下代码
*/
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d%d", &a, &n);//输入之间要加空格   和scanf（“%d %d”,...） 同理
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a; //把每一项与前一项都联系起来!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
							//思路
							// i=0		i=1		i=2		  i=3
							// 2		22		222		  2222
							// 2		2*10+2	22*10+2	  222*10+2
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}

//自己写的，思路
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