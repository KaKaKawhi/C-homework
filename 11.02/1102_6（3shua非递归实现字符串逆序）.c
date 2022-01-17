#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


int My_Strlen(char str[]) {
    char* mask = str;
    //最好写成'\0' != *mask
    // 优化：最好写成if(*mask)
    if (*mask != '\0') {
        return 1 + My_Strlen(mask + 1);
    }
    else {
        return 0;
    }
    // 个人觉得带着else更加清晰
}

//未使用递归方式：
void Reverse_Str(char str[]) {
    int left = 0;                //也可以用指针
    int right = My_Strlen(str) - 1;
    while (left < right) {
        char mask = str[left]; 
        str[left] = str[right];
        str[right] = mask;
        left++;
        right--;
    }
}

int main()
{
    char str[20] = "";
    scanf("%s", str);
    Reverse_Str(str);
    printf("%s\n", str);

    return 0;
}