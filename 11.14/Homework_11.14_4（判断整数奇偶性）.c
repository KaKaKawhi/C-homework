#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int n = 0;
    while (1) {   //c��׼��û��true false ֻ��01
        scanf("%d", &n);//����ͨ������oj  
                        //����д��while(scanf("%d", &n) != EOF)   end of file
                        //�൱��while(~scanf("%d", &n))
        if (n % 2 == 0) {
            printf("Even\n");  //ojС�ģ�����ӻ��вŸ�ʽһ��
            //break;    ����Ҫbreak�������ֲ棬ִ��������Ͳ�ִ������һ�����ͽ�����
        }
        else {  //n % 2ֻ����Ϊ0 �� 1!!!!!!!!!!!!!!!!!!!!!!!
            printf("Odd\n");    //ojС�ģ�����ӻ��вŸ�ʽһ��
            //break;     ͬ��
        }
    }

    //oj��Ҫ�������룬��Ҫѭ��
    return 0;
}


//oj
//#include <stdio.h>
//
//int main() {
//
//    int n = 0;
//    while ((scanf("%d", &n)) != EOF) {
//        if (n % 2 == 0) {
//            printf("Even\n");
//        }
//        else {
//            printf("Odd\n");
//        }
//    }
//
//    return 0;
//}


// oj�Ż�
#include <stdio.h>

int main() {

    int n = 0;
    while (~scanf("%d", &n)) {
        if (n % 2) {
            printf("Odd\n");
        }
        else {
            printf("Even\n");
        }
    }

    return 0;
}