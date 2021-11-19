#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<windows.h>

//编写代码演示多个字符从两端移动，向中间汇聚，即：
//############
//h##########!
//he########!!
//...
//hello bit!!!

int main() {

    char arr1[] = "############";
    char arr2[] = "hello bit!!!";

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

