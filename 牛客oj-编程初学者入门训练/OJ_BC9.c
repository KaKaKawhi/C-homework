#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ���������
// �������У�
// ��һ��Ϊ��Hello world!��
// �ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ��

int main() {

    int a = printf("Hello world!");
    // ����ӡaʱ��a�Żᱻ���У�������һ��printf("Hello world!")
    // ͬʱ��printf���� Hello world! ���ַ������ո�Ҳ�㣩
    // /nҪ����%dǰ�����ʹ�����������������
    printf("\n%d", a);

    return 0;
}