#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


// 写函数,实现每次调用这个函数，就会将num值增加1

void add(int* num) {
    (*num)++;
}

int main()
{
    int num = 0;
    add(&num);
    printf("%d\n", num);
    
    return 0;
}


// 三刷（二刷见笔记）
void add(int* num) {
    (*num)++;
}

int main()
{
    int num = 0;
    scanf("%d", &num);
    add(&num);
    printf("%d\n", num);

    return 0;
}