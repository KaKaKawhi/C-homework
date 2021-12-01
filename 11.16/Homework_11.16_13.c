#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//打印菱形

//int main() {

	//笨
    //printf("      *      \n");
    //printf("     ***     \n");
    //printf("    *****    \n");   //\n别忘记  
    //printf("   *******   \n");
    //printf("  *********  \n");
    //printf(" *********** \n");
    //printf("*************\n");
    //printf(" *********** \n");
    //printf("  *********  \n");
    //printf("   *******   \n");
    //printf("    *****    \n");
    //printf("     ***     \n");
    //printf("      *      \n");

	//更新，右边的边界就沿着菱形
	//printf("      *\n");
	//printf("     ***\n");
	//printf("    *****\n");   //\n别忘记  
	//printf("   *******\n");
	//printf("  *********\n");
	//printf(" ***********\n");
	//printf("*************\n");
	//printf(" ***********\n");
	//printf("  *********\n");
	//printf("   *******\n");
	//printf("    *****\n");
	//printf("     ***\n");
	//printf("      *\n");

    ///*答案     菱形后面的空格不输入!!!!!!!!!
	//思路：
	//	仔细观察图形，可以发现，此图形中是由空格和* 按照不同个数的输出组成的。
	//	上三角：先输出空格，后输出* ，每行中
	//	空格：从上往下，一行减少一个
	//	* ：2* i + 1的方式递增

	//	下三角：先输出空格，后输出 * ，每行中
	//	空格：从上往下，每行多一个空格
	//	* ： 从上往下，按照2 * (line - 1 - i) - 1的方式减少，其中：line表示总共有多少行
	//	按照上述方式，将上三角和下三角中的空格和 * 分别输出即可。
	//	* /


    //答案：
	int main(){
		int line = 0;
		int i = 0;
		scanf("%d", &line);//7
		//打印上半部分
		for (i = 0; i < line; i++)
		{
			//打印一行
			//打印空格
			int j = 0;
			for (j = 0; j < line - 1 - i; j++)  //-i   使得动态控制每行打印数
			{
				printf(" ");
			}
			//打印*
			for (j = 0; j < 2 * i + 1; j++)   //1 3 5 7 9 。。
			{
				printf("*");
			}
			printf("\n");
		}


		//打印下半部分
		for (i = 0; i < line - 1; i++)
		{
			//打印一行
			int j = 0;
			for (j = 0; j <= i; j++)    //或者 for(j = 0; j < i + 1; j++)
			{
				printf(" ");
			}
			for (j = 0; j < 2 * (line - 1 - i) - 1; j++)  //-i   使得动态控制每行打印数
			{
				printf("*");
			}
			printf("\n");
		}
	
    return 0;
}

