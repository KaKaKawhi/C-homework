#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <assert.h>

// ģ��ʵ�ֿ⺯��strlen
//size_t strlen(char* str);
//���ܣ����������ַ���str �ĳ���(����ֵ������֮ǰ�ַ���Ŀ)��


//�𰸣�
//size_t my_strlen(const char* str)  //����arr�����ݲ����ı�
//{
//    const char* eos = str;
//    while (*eos++);
//    return(eos - str - 1);
//}

int my_strlen(const char* arr) {  //����arr�����ݲ����ı�
    assert(arr != NULL);   //��ֹ�����ָ��
    char* mask = arr;

    while (*mask != '\0') {   //����1�����汾����ͼ���������
        mask++;
    }
    return mask - arr;

    //while (*mask++ != '\0') {   //����2�������Ļ�ָ���ָ��\0���ĺ��棬
    //                            //��ͼ�������ɣ�����return������ȥ1
    //    ;
    //}
    //return mask - arr - 1;

}

//���˺��������汾��
//int my_strlen(char* arr) {
//    int len = 0;
//    /*while (*arr++ != '\0') {
//        len++;
//    }*/
//    while (*arr++) {
//        len++;
//    }
//    return len;
//}

int main()
{
    char arr[20] = "";
    //�Ҿ��������char arr[20] = {0};
    scanf("%s", arr);   //arr������ǵ�ַ������&
    int len = my_strlen(arr);
    printf("%d\n", len);

    return 0;
}

