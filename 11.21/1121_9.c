#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <assert.h>

// ģ��ʵ�ֿ⺯��strcpy
// char *strcpy( char *to, const char *from );
// ���ܣ������ַ���from �е��ַ����ַ���to��������ֵ������������ֵΪָ��to��

char* my_strcpy(char* to, const char* from) {
    assert(to && from);
    char* mask = to;  //����Ҫ�У���Ϊ���渳ֵʱ��ָ�벻��ָ����Ԫ�ص�ַ��һֱ�ں���
    /*while (*to++ = *from++ != '\0') { ����
        ;
    }*/
    while (*mask++ = *from++) {  //��*fromΪ\0ʱ����ֵ\0����ʽΪ�٣�ǡ�ò���ȥ
        ;
    }
    //*to = *from; ����
    return to;
}

int main()
{
    char to[20] = "\0";
    char from[] = "hello";
    printf("%s\n", my_strcpy(to, from));

    return 0;
}

