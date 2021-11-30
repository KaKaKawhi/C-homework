#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <string.h>

int main()
{
    int n = 0;
    int arr[100000] = { 0 };
    int i = 0;
    int tmp = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &tmp);
        arr[tmp] = tmp;
    }
    for (i = 0; i < 100000; i++)
    {
        if (arr[i] != 0)
            printf("%d ", arr[i]);
    }
    return 0;
}