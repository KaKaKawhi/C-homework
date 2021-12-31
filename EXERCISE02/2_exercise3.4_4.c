#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>
#include<string.h>

//编写代码演示多个字符从两端移动，向中间汇聚，即：
//############
//h##########!
//he########!!
//...
//hello world!

int main() {

    char arr1[] = "############";
    char arr2[] = "hello world!";

    int left = 0;
    int right = strlen(arr1) - 1;
    printf("%s\n", arr1);
    while (left <= right) {  //等于号不能丢，因为可能二者最后指向一个
        arr1[left] = arr2[left];
        arr1[right] = arr2[right];
        printf("%s\n", arr1);
        Sleep(1000);
        system("cls");//执行系统命令清理，使得在一行内变化
        left++;
        right--;
        
    }

    return 0;
}


// 二刷第一次完全没思路
//int main() {
//
//    char ch[] = "***********";
//    char* l = ch;
//    char* r = ch + strlen(ch);
//
//    return 0;
//}

// 看了一边答案，理理思路写：
// 用两个字符串分别为"************"，"hello world!"，表示起始和最后，
// 然后通过两个下标(指针不好用，如果用下标，两个字符数组可以通用)，分别指向起始和结尾，
// 先打印起始字符串，然后通过首尾指针将2字符串的首尾赋值给1字符串，再打印1字符串，
// 首尾指针移动重复上述，直到指针相遇

int main() {

    char start[] = "************";
    char end[] = "hello world!";
    char left = 0;
    char right = strlen(start) - 1;
    // left == right 时也要打印，交换，打印
    while (left <= right) {
        printf("%s\n", start);
        start[left] = end[left];
        start[right] = end[right];
        printf("%s\n", start);
        left++;
        right--;
    }

    return 0;
}