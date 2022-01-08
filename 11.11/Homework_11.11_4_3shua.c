#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

// 个人法：移动1
void Print_Odd(int n) {
    // i控制1左移的位数
    int i = 0;
    for(i = 30; i >= 0; i -= 2){
    // for (i = 0; i <= 30; i += 2) {错误！！！应该从高位开始打印
        // 实际为if(1 == (n & (1 << i)))
        if (n & (1 << i)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}

void Print_Even(int n) {
    // i控制1左移的位数
    int i = 0;
    for(i = 31; i >= 1; i -= 2){
    // for (i = 1; i <= 31; i += 2) {错误！！！应该从高位开始打印
        // 实际为if(1 == (n & (1 << i)))
        if (n & (1 << i)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
}

int main() {

    int n = 0;
    scanf("%d", &n);
    Print_Odd(n);
    printf("\n------------------------------------\n");
    Print_Even(n);
    
	return 0;
}


// 答案法：移动n
/*
思路：
1. 提取所有的奇数位，如果该位是1，输出1，是0则输出0
2. 以同样的方式提取偶数位置


 检测num中某一位是0还是1的方式：
   1. 将num向右移动i位
   2. 将移完位之后的结果与1按位与，如果：
      结果是0，则第i个比特位是0
      结果是非0，则第i个比特位是1
*/
void Printbit(int num)
{
    for (int i = 31; i >= 1; i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    printf("\n");

    for (int i = 30; i >= 0; i -= 2)
    {
        printf("%d ", (num >> i) & 1);
    }
    printf("\n");
}