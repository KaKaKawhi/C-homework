#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main() {

    int n = 0;
    while (1) {   //c��׼��û��true false ֻ��01
        scanf("%d", &n);//����ͨ������oj  
                        //����д��while(scanf("%d", &n) != EOF)   end of file
                        //�൱��while(~scanf("%d", &n))
        if (n % 2 == 0) {
            printf("Even\n");
            break;
        }
        else {  //n % 2ֻ����Ϊ0 �� 1
            printf("Odd\n");
            break;
        }
    }

    //oj��Ҫ�������룬��Ҫѭ��
    return 0;
}

