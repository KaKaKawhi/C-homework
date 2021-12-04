#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main() {

    int x = 100;
    int i = 0;

    for (i = 1; i <= 31; i += 2) {//反向偶数位  正向：i = 30 i >= 0 i-= 2
        printf("%d", (x >> i) & 1);
    }
    printf("%c",'\n');//这样也可，或者printf（"\n"）；
    //printf（'\n'）错误，因为函数原型：int printf(char *format, args, ...);
                      // 功       能：按format指向的格式字符串所规定的格式，将输出表列args的值输出
                      // 返  回   值：输出字符的个数，若出错，返回负数

    for (i = 0; i <= 30; i += 2) {//从零开始   反向奇数位  zhengxiang:i = 31 i >= 1
        printf("%d", (x >> i) & 1);
    }


    return 0;
}

//答案：
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
//void Printbit(int num)
//{
//    for (int i = 31; i >= 1; i -= 2)     //这样才是正确的打印！！！！！！！！！！！！！！
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n");
//
//    for (int i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (num >> i) & 1);
//    }
//    printf("\n");
//}