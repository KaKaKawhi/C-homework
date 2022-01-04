#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
#include <string.h>

// 编写一个函数 reverse_string(char * string)（递归实现）
// 实现：将参数字符串中的字符反向排列，不是逆序打印。
// 要求：不能使用C函数库中的字符串操作函数。

//未使用递归方式：
//void reverse_string(char* arr) {
//    int left = 0;                //也可以用指针
//    int right = strlen(arr) - 1;
//    while (left < right) {
//        char mask = arr[left]; 
//        arr[left] = arr[right];
//        arr[right] = mask;
//        left++;
//        right--;
//    }
//}

int my_strlen(char* arr) { //使用自己写的求字符串长度函数
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }
    return count;
}

//使用递归实现字符串逆序
void reverse_string(char* arr) {
    // 不会！-------->
    // 首先，如果逆序abcde，相当于逆序a和e然后逆序bcd，但是，这样的话，
    // \0在最后，你无法以它为结束标志（bcde无法看作一个字符串了）
    // 所以先将a取到tmp中，然后e放在a位置，然后\0放在e的位置，然后递归传入
    // b的地址，这样下次分析就会以"bcde"来调用函数
    // 以上递归的限制条件为剩下的元素个数大于2个才有必要交换
        //必须写出来，不能用一次调用一次，因为之后str的长度已经发生变化了
        int len = my_strlen(arr);
        char tmp = *arr;
        *arr = *(arr + len - 1);
        *(arr + len - 1) = '\0';
        if (my_strlen(arr + 1) >= 2) {    //剩下的元素个数大于2个才有必要交换
            reverse_string(arr + 1);
        }
        *(arr + len - 1) = tmp;            //递归结束后才把a放在e的位置上，实现交换

}

int main()
{
    char arr[20] = ""; //必须要初始化20，否则运行会数组溢出
    scanf("%s", &arr);
    reverse_string(arr);
    printf("%s\n", arr);

    return 0;
}

