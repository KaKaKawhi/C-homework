#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>

// ģ��ʵ�ֿ⺯��strcpy

// 3shua
void My_Strcpy(char* str, const char* ch) //����ch�ַ����ݲ����ı�
{
    assert(str && ch);
    // �൱while('\0' != *ch)
    while (*ch) {
        *str = *ch;
        ch++;
        str++;
    }
    // ��ch����'\0'����str���
    *str = *ch;

}

int main()
{ 
    char str[20] = { 0 };
    char ch[] = "abc";
    My_Strcpy(str, ch);
    printf("%s\n", str);

    return 0;
}


//�𰸣����Ƿ���Ҫ��˼򻯣������ǣ�������������
//char* my_strcpy(char* dst, const char* src) // ����src�ַ����ݲ����ı�
//{
//    // ����dst��ֵ����Ϊ���Ҫ����dst��dst����ָ����Ԫ��
//    char* cp = dst;
//    // ��ֹ�����ָ��
//    assert(dst && src);
//    // ��srcָ��'\0'ʱ�����ȸ�ֵ��cp��Ȼ����ʽ'\0'������ѭ��
//    while (*cp++ = *src++);
//    return(dst);
//}