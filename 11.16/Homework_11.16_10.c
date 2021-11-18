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

int main() {

    char arr[] = "abcdef";
    int length = sizeof(arr) / sizeof(arr[0]);  //这个元素个数包含了\0 
    reverse(arr,length);

    return 0;
}

