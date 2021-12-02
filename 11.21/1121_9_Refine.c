#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
#include <string.h>
#include <assert.h>

// ģ��ʵ�ֿ⺯��strcpy
// char *strcpy( char *to, const char *from );
// ���ܣ������ַ���from �е��ַ����ַ���to��������ֵ������������ֵΪָ��to��

char* my_strcpy(char* to, const char* from) {
    assert(to && from);
    char* mask1 = to;  //����Ҫ�У���Ϊ���渳ֵʱ��ָ�벻��ָ����Ԫ�ص�ַ��һֱ�ں���
    char* mask2 = from;
    while (*mask1 != '\0') {  //while(*mask1)
        mask1++;
    }
    while (*mask2 != '\0') {  //while(*mask2)
        *mask1++ = *mask2++;
    }
    *mask1 = *mask2;
    return to;
}


int main()
{
    char to[20] = {0};
    char from[] = "hello";
    scanf("%s", to);  //to��Ϊ���ַ���
    char* ret = my_strcpy(to, from);
    printf("%d\n", strlen(ret));  //���'\0'
    printf("%s\n", ret);

    return 0;
}