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

//�𰸣�
//char* my_strcpy(char* dst, const char* src)
//{
//    char* cp = dst;
//    while (*cp++ = *src++);
//    return(dst);
//}

//�Լ�����д�İ汾,to�ַ����鲻�ǿ����飡����������һ���ļ�

int main()
{
    char to[20] = "\0";
    char from[] = "hello";
    //printf("%d\n", strlen(my_strcpy(to, from)));  //���'\0'(��ͷ�ļ�)
    printf("%s\n", my_strcpy(to, from));

    return 0;
}

