#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//写一个函数逆序一个字符串的内容
void reverse(char * p, int length) {
    p += (length - 1 - 1);  //-1得到最后一个元素下标，再减一将\0去除
    int i = 0;
    for (i = 0; i < length-1; i++) {  //-1因为去除了\0
        printf("%c", *(p - i));
    }
}

//答案法，我觉得更清晰
//void reverse(char* p, int length) {    //传入指针，就可以远程改变原值，无需返回
//    char* left = p;   //首元素
//    char* right = p + (length - 1 - 1);//尾元素
//    while (left < right) {
//        /*char* mask = left;
//        left = right;
//        right = mask;*/         //错误！！！交换的是内容而不是指针
//        char mask = *left;
//        *left = *right;
//        *right = mask;
//        left++;
//        right--;
//    }
//}

//答案！！！好
//void Reverse(char* str)
//{
//    char* left = str;
//    char* right = str + strlen(str) - 1;  //加头文件
//    while (left < right)
//    {
//        char temp = *left;
//        *left = *right;
//        *right = temp;
//        ++left;      //不知道为啥前置++，应该效果一样，讲的后置
//        --right;
//    }
//}

int main() {

    char arr[] = "abcdef";  //如果要手动输入要用gets（），因为如果需要的字符串有空格，scanf遇到空格就停止
    int length = sizeof(arr) / sizeof(arr[0]);  //这个元素个数包含了\0 
    reverse(arr,length);  //也可以不用传入length，用strlen函数

    return 0;
}

// 注意：如果是在线OJ时，必须要考虑循环输入，因为每个算法可能有多组测试用例进行验证，参考以下main函数写法，
//int main()
//{
//    char str[101] = { 0 };
//    while (gets(str))
//    {
//        Reverse(str);
//        printf("%s\n", str);
//        memset(str, 0, sizeof(str) / sizeof(str[0]));
//                  //#include <string.h>
//                  //void* memset(void* buffer, int ch, size_t count);
//                  //功能: 函数拷贝ch 到buffer 从头开始的count 个字符里, 并返回buffer指针。 
//                  //memset() 可以应用在将一段内存初始化为某个值。例如：
//                  //memset(the_array, '\0', sizeof(the_array));
//                  //这是将一个数组的所以分量设置成零的很便捷的方法。
//    }
//    return 0;
//}
